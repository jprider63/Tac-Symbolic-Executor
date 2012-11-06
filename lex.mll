{
	open Parse
}

rule token = parse
	| "assert"	{ ASSERT }
	| "+"		{ PLUS }
	| "-"		{ MINUS }
	| "*"		{ TIMES }
	| "/"		{ DIV }
	| ":="		{ ASSIGN }
	| "=="		{ EQ }
	| "!="		{ NEQ }
	| "<"		{ LT }
	| ">"		{ GT }
	| ">=" 		{ GE }
	| "<="		{ LE }
	| ";"		{ SC }
	| "goto"	{ GOTO }
	| "if"		{ IF }
	| "newarray"	{ NEWARRAY }
	| "symint"	{ SYMINT }
	| "symarray"	{ SYMARRAY }
	| "["		{ LBRACK }
	| "]"		{ RBRACK }
	| ":"		{ COLON }
	| ['0'-'9']+ as num
				{ INT (int_of_string num) }
	| ['a'-'z']['a'-'z''A'-'Z''0'-'9''.''_''\'']* as id { ID id }
	| [ ' ' '\t']	{ token lexbuf }
	| ['\n']	{ incr Err.lineno; token lexbuf }
	| eof		{ TEOF }
	| '(''*'	{ comment lexbuf; token lexbuf }
	| _			{ failwith ("Unrecognized symbol: " ^ (Lexing.lexeme lexbuf)) }
and comment = parse
	  | '*'')'      { () }
	  | '(''*'      { comment lexbuf; comment lexbuf }
	  | '\n'        { incr Err.lineno; comment lexbuf }
	  | _           { comment lexbuf }
