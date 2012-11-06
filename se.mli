type lab = string (* label *)

type id = string (* identifier (vairable) *)

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

(*
	Binop x y op z		-->		x := y op z
	Uop x op y		-->		x := op y
	Copy x y		-->		x := y
	Newarray x		-->		x := newarray
	Awrite x i y		-->		x[i] := y
	Aread x y i		-->		x := y[i]
	Goto l			-->		goto l
	Cond x op y l		--> 	 	if x op y goto l
        SymInt x                -->		x := symint
        SymArray x              -->             x := symarray
	Assert x op y		-->		assert x op y
*)

type stmt = int * lab option * prestmt


val se : stmt list -> unit
