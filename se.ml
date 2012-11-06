open OcamlSTP

type lab = string (* label *)

type id = string (* identifier (variable) *)

type bop = Plus | Minus | Times | Div
type uop = Neg
type rop = Eq | Neq | Lt | Gt | Ge | Le

type arg =
	| Id of id
	| Int of int

type prestmt =
	| Bop of id * arg * bop * arg
	| Uop of id * uop * arg
	| Copy of id * arg
	| Newarray of id * int
	| Awrite of	id * arg * arg
	| Aread of id * id * arg
	| Goto of lab
	| Cond of arg * rop * arg * lab
	| SymInt of id
	| SymArray of id * int
	| Assert of arg * rop * arg

type stmt = int * lab option * prestmt
type cont = 
	| BVInt of ([`bv], [`var|`expr|`const]) expr
	| Array of ([`array], [`var|`expr]) expr * int
type mem = (id * cont) list
type pc = int
type pcond = (([`bool], [`expr|`const|`var]) expr) list
type state = pc * pcond * mem

exception Halted

let stp = make_context ()
let w = 16

let rec assoc3 d l = match l with
	| [] -> raise Halted
	| (a,b,c)::t ->
		if d = a then
			(b,c)
		else
			assoc3 d t
;;

(* Update a key-value pair from an associated list. *)
let update_assoc k v l = 
	let l' = List.remove_assoc k l in
	(k,v)::l'
;;

(* Initialize an array. *)
let rec initArray a i =
	if i < 0 then
		a
	else
		let z = bv_of_int stp w 0 in
		let i' = bv_of_int stp w i in
		let a' = array_write stp a i' z in
		initArray a' (i-1)
;;

(* Initialize a symbolic array. *)
let rec initSymArray v a i =
	if i < 0 then
		a
	else
		let name = v^"["^(string_of_int i)^"]" in
		let z = bv_var stp name w in
		let i' = bv_of_int stp w i in
		let a' = array_write stp a i' z in
		initSymArray v a' (i-1)
;;

let to_signed i = 
	if i >= 32768 then
		i - 65536
	else
		i
;;

(* Print an array. *)
let rec printArray a k i = 
	if i < 0 then
		()
	else
		let i' = bv_of_int stp w i in
		let v' = array_read stp a i' in
		let Some s = vc_get_counterexample stp v' in
		printArray a k (i-1);
		Printf.printf "\t%s[%d] : %d\n" k i (to_signed (to_int stp s))
;;

(* Get the program counter given a label. *)
let getPC label stmts = 
	let (pc,_,_) = List.find (
		fun (_,lab,_) -> match lab with
			| Some lab' -> lab' = label
			| _ -> false
	) stmts in
	pc
;;

let lookupInt (a:arg) (mem:mem) = match a with
	| Id x -> (
		try
			let id:cont = List.assoc x mem in
			match id with
				| BVInt x' -> x'
				| _ -> failwith "lookupInt: Not an int." (*Array x' -> x'*)
		with Not_found -> bv_of_int stp w 0
	)
	| Int i -> bv_of_int stp w i
;;

let lookupArray (a:arg) (mem:mem) = match a with
	| Id x -> (
		let id:cont = List.assoc x mem in
		match id with
			| Array (x',n) -> (x',n)
			| _ -> failwith "lookupArray: Not an array."
	)
	| Int i -> failwith "lookupArray: Not an array."
;;

(* Symbolically execute a sequence of statements. *)
let se stmts =
	let fails = ref 0 in
	let step stmts (pc,cond,mem):(state list) = (
		let assrt stp e = (
			vc_push stp;
			(*make previous assertions from cond*)
			List.iter ( fun c -> vc_assert stp c) cond;
			let r = match (vc_query stp e) with
				| Valid -> [(pc+1,e::cond,mem)]
				| Invalid ->
		 			fails := !fails + 1;
					Printf.printf "Fail %d\n" pc;
					(*print list...*)
					List.iter ( fun (k,v) -> match v with
						| BVInt v' ->
							let Some s = vc_get_counterexample stp v' in
							let s' = to_int stp s in
							Printf.printf "\t%s : %d\n" k (to_signed s')
						| Array (a,n) -> printArray a k (n-1)
					) mem;
					[]
				| Undecided -> failwith "STP returned Undecided..."
			in
			vc_pop stp;
			r
		) in
		try
			let lab,s = assoc3 pc stmts in
			match s with
				| Bop (x,y,op,z) -> ( 
					let y' = (lookupInt y mem) in
					let z' = (lookupInt z mem) in
					match op with
						| Plus -> [(pc+1,cond, update_assoc x (BVInt (bv_add stp y' z')) mem)]
						| Minus -> [(pc+1,cond, update_assoc x (BVInt (bv_sub stp y' z')) mem)]
						| Times -> [(pc+1,cond, update_assoc x (BVInt (bv_mul stp y' z')) mem)]
						| Div ->
							match assrt stp (bool_not stp (bv_eq stp z' (bv_of_int stp w 0))) with (*assert that z != 0*)
								| [] -> []
								| [(pc,cond',_)] -> [(pc,cond', update_assoc x (BVInt (bv_signed_div stp y' z')) mem)]
								| _ -> failwith "assrt returned multiple states..."
				)
				| Uop (x,Neg,y) ->
				  let y' = bv_neg stp (lookupInt y mem) in (*set var x in context?*)
					[(pc+1,cond, update_assoc x (BVInt y') mem)]
				| Copy (x,y) -> [(pc+1,cond, update_assoc x (BVInt (lookupInt y mem)) mem)]
				| Newarray (x,i) -> 
					let a = initArray (array_var stp x w w) (i-1) in
					[(pc+1,cond, update_assoc x (Array ( a, i)) mem)]
				| Awrite (x,i,y) -> (
					let a,n = lookupArray (Id x) mem in
					let i' = lookupInt i mem in
					(* i' < n && i' >= 0*)
					let c = bool_and stp (bv_signed_lt stp i' (bv_of_int stp w n)) (bv_signed_ge stp i' (bv_of_int stp w 0)) in 
					match assrt stp c with
						| [] -> []
						| [(pc,cond',_)] ->
							let a' = array_write stp a i' (lookupInt y mem) in
							[(pc,cond', update_assoc x (Array (a',n)) mem)]
						| _ -> failwith "assrt returned multiple states..."
				)
				| Aread (x,y,i) -> (
					let a,n = lookupArray (Id y) mem in
					let i' = lookupInt i mem in
					(* i' < n && i' >= 0*)
					let c = bool_and stp (bv_signed_lt stp i' (bv_of_int stp w n)) (bv_signed_ge stp i' (bv_of_int stp w 0)) in 
					match assrt stp c with
						| [] -> []
						| [(pc,cond',_)] ->
							let r = array_read stp a i' in
							[(pc,cond', update_assoc x (BVInt r) mem)]
						| _ -> failwith "assrt returned multiple states..."
				)
				| Goto l -> [( getPC l stmts, cond, mem)]
				| Cond (x,op,y,l) -> 
					let x' = lookupInt x mem in
					let y' = lookupInt y mem in
					let e = match op with
						| Eq -> bv_eq stp x' y'
						| Neq -> bool_not stp (bv_eq stp x' y')
						| Lt -> bv_signed_lt stp x' y'
						| Gt -> bv_signed_gt stp x' y'
						| Ge -> bv_signed_ge stp x' y'
						| Le -> bv_signed_lt stp x' y'
					in
					let r = (
						vc_push stp;
						List.iter ( fun c -> vc_assert stp c) cond;
						let r' = match (vc_query stp e) with
							| Valid -> [(getPC l stmts,e::cond,mem)]
							| Invalid -> []
							| Undecided -> failwith "STP returned Undecided..."
						in
						vc_pop stp;
						r'
					) in
					let e' = bool_not stp e in
					vc_push stp;
					List.iter ( fun c -> vc_assert stp c) cond;
					let r' = match (vc_query stp e') with
						| Valid -> [(pc+1,e'::cond,mem)]
						| Invalid -> []
						| Undecided -> failwith "STP returned Undecided..."
					in
					vc_pop stp;
					r'@r
					(*Ask if cond is possible, ask if not possible: return upto 2 states*)
					(*What if empty is returned, is this possible*)
				| Assert (x,op,y) -> (
					let x' = lookupInt x mem in
					let y' = lookupInt y mem in
					let e = match op with
						| Eq -> bv_eq stp x' y'
						| Neq -> bool_not stp (bv_eq stp x' y')
						| Lt -> bv_signed_lt stp x' y'
						| Gt -> bv_signed_gt stp x' y'
						| Ge -> bv_signed_ge stp x' y'
						| Le -> bv_signed_lt stp x' y'
					in
					assrt stp e
				)
				| SymInt x ->
					let x' = bv_var stp x w in
					[(pc+1,cond,(x, BVInt x')::mem)]
				| SymArray (x,i) ->
					let a = initSymArray x (array_var stp x w w) (i-1) in
					[(pc+1,cond, update_assoc x (Array ( a, i)) mem)]
		with Halted -> 
			[]
	) in
	let rec run stmts states = match states with
		| [] -> 
			if !fails = 0 then
				Printf.printf "Pass\n";
			()
		| h::t ->
			run stmts ((step stmts h)@t)
	in
	run stmts [0,[],[]]
;;
