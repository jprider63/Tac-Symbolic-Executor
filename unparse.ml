open Se

let unparse_arg () = function
	| Id x -> x
	| Int i -> string_of_int i

let unparse_bop () = function
	| Plus -> "+"
	| Minus -> "-"
	| Times -> "*"
	| Div -> "/"

let unparse_uop () = function
	| Neg -> "-"
	
let unparse_rop () = function
	| Eq -> "=="
	| Neq -> "!="
	| Lt -> "<"
	| Gt -> ">"
	| Ge -> ">="
	| Le -> "<="

let unparse_prestmt () = function
	| Bop(x, y, op, z) -> Printf.sprintf "%s := %a %a %a;"
		x unparse_arg y unparse_bop op unparse_arg z
	| Uop(x, op, y) -> Printf.sprintf "%s := %a %a;"
		x unparse_uop op unparse_arg y
	| Copy(x, y) -> Printf.sprintf "%s := %a;"
		x unparse_arg y
	| Newarray (x,i) -> Printf.sprintf "%s := newarray %d;" x i
	| Awrite(x, i, y) -> Printf.sprintf "%s[%a] := %a;"
		x unparse_arg i unparse_arg y
	| Aread(x, y, i) -> Printf.sprintf "%s := %s[%a];"
		x y unparse_arg i
	| Goto l -> Printf.sprintf "goto %s;" l
	| Cond(x, op, y, l) -> Printf.sprintf "if %a %a %a goto %s;"
		unparse_arg x unparse_rop op unparse_arg y l
	| SymInt x -> Printf.sprintf "%s := symint" x
	| SymArray(x,i) -> Printf.sprintf "%s := symarray %d" x i
	| Assert(x, op, y) -> Printf.sprintf "assert %a %a %a"
		unparse_arg x unparse_rop op unparse_arg y

let unparse_lab () = function
	| None -> ""
	| Some l -> l ^ ":"
		
let unparse_stmt (i, l, s) =
	Printf.sprintf "%2d %a %a" i unparse_lab l unparse_prestmt s

let rec unparse_stmts = function
	| [] -> ""
	| s::ss -> (unparse_stmt s) ^ "\n" ^ (unparse_stmts ss)

let unparse s =
	Printf.printf "%s\n" (unparse_stmts s)
