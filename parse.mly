%{
	open Se

	let next =
		let c = ref 0 in
			fun () -> (let temp = !c in c := !c + 1; temp )
				
	let parse_error s =
	  Printf.printf "Parse error on line %d\n" !Err.lineno
%}
/*  declarations */

%token<string> ID
%token<int> INT
%token PLUS MINUS TIMES DIV ASSIGN EQ NEQ LT GT GE LE SC GOTO
%token IF LBRACK RBRACK COLON ERROR ASSERT NEWARRAY SYMINT SYMARRAY
%token TEOF

%type<Se.stmt list> prog rev_program
%type<Se.stmt> stmt
%type<Se.prestmt> prestmt
%type<Se.arg> arg
%type<Se.bop> bop
%type<Se.uop> uop
%type<Se.rop> rop

%start prog

%%
/*  rules */

prog:
	| TEOF { [] }
	| rev_program TEOF { List.rev  $1 }

rev_program:
	| stmt { [$1] }
	| rev_program stmt { $2::$1 }

stmt:
	| prestmt { (next(), None, $1) }
	| ID COLON prestmt { (next(), Some $1, $3) }

prestmt:
	| ID ASSIGN arg bop arg SC { Bop($1, $3, $4, $5)}
	| ID ASSIGN uop arg SC { Uop($1, $3, $4) }
	| ID ASSIGN arg SC { Copy($1, $3) }
	| ID ASSIGN NEWARRAY INT SC { Newarray($1,$4) }
	| ID LBRACK arg RBRACK ASSIGN arg SC { Awrite($1, $3, $6) }
	| ID ASSIGN ID LBRACK arg RBRACK SC { Aread($1, $3, $5) }
	| GOTO ID SC { Goto $2 }
	| IF arg rop arg GOTO ID SC { Cond($2, $3, $4, $6) }
	| ID ASSIGN SYMINT SC { SymInt($1) }
	| ID ASSIGN SYMARRAY INT SC { SymArray($1,$4) }
	| ASSERT arg rop arg SC { Assert($2, $3, $4) }

arg:
	| ID { Id $1 }
	| INT { Int $1 }

bop:
	| PLUS { Plus }
	| MINUS { Minus }
	| TIMES { Times }
	| DIV { Div }

uop:
	| MINUS { Neg }

rop:
	| EQ { Eq }
	| NEQ { Neq }
	| LT { Lt }
	| GT { Gt }
	| GE { Ge }
	| LE { Le }

%%
