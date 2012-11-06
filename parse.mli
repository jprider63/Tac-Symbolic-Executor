type token =
  | ID of (string)
  | INT of (int)
  | PLUS
  | MINUS
  | TIMES
  | DIV
  | ASSIGN
  | EQ
  | NEQ
  | LT
  | GT
  | GE
  | LE
  | SC
  | GOTO
  | IF
  | LBRACK
  | RBRACK
  | COLON
  | ERROR
  | ASSERT
  | NEWARRAY
  | SYMINT
  | SYMARRAY
  | TEOF

val prog :
  (Lexing.lexbuf  -> token) -> Lexing.lexbuf -> Se.stmt list
