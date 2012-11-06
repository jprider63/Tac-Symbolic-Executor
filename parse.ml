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

open Parsing;;
# 2 "parse.mly"
	open Se

	let next =
		let c = ref 0 in
			fun () -> (let temp = !c in c := !c + 1; temp )
				
	let parse_error s =
	  Printf.printf "Parse error on line %d\n" !Err.lineno
# 39 "parse.ml"
let yytransl_const = [|
  259 (* PLUS *);
  260 (* MINUS *);
  261 (* TIMES *);
  262 (* DIV *);
  263 (* ASSIGN *);
  264 (* EQ *);
  265 (* NEQ *);
  266 (* LT *);
  267 (* GT *);
  268 (* GE *);
  269 (* LE *);
  270 (* SC *);
  271 (* GOTO *);
  272 (* IF *);
  273 (* LBRACK *);
  274 (* RBRACK *);
  275 (* COLON *);
  276 (* ERROR *);
  277 (* ASSERT *);
  278 (* NEWARRAY *);
  279 (* SYMINT *);
  280 (* SYMARRAY *);
  281 (* TEOF *);
    0|]

let yytransl_block = [|
  257 (* ID *);
  258 (* INT *);
    0|]

let yylhs = "\255\255\
\001\000\001\000\002\000\002\000\003\000\003\000\004\000\004\000\
\004\000\004\000\004\000\004\000\004\000\004\000\004\000\004\000\
\004\000\005\000\005\000\006\000\006\000\006\000\006\000\007\000\
\008\000\008\000\008\000\008\000\008\000\008\000\000\000"

let yylen = "\002\000\
\001\000\002\000\001\000\002\000\001\000\003\000\006\000\005\000\
\004\000\005\000\007\000\007\000\003\000\007\000\004\000\005\000\
\005\000\001\000\001\000\001\000\001\000\001\000\001\000\001\000\
\001\000\001\000\001\000\001\000\001\000\001\000\002\000"

let yydefred = "\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\001\000\031\000\
\000\000\003\000\005\000\000\000\000\000\000\000\000\000\018\000\
\019\000\000\000\000\000\002\000\004\000\000\000\024\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\006\000\013\000\
\025\000\026\000\027\000\028\000\029\000\030\000\000\000\000\000\
\000\000\000\000\015\000\000\000\020\000\021\000\022\000\023\000\
\009\000\000\000\000\000\000\000\000\000\000\000\000\000\010\000\
\016\000\000\000\008\000\000\000\000\000\017\000\000\000\007\000\
\000\000\000\000\012\000\011\000\014\000"

let yydgoto = "\002\000\
\008\000\009\000\010\000\011\000\018\000\050\000\028\000\039\000"

let yysindex = "\003\000\
\000\255\000\000\251\254\004\255\041\255\041\255\000\000\000\000\
\002\255\000\000\000\000\007\255\041\255\025\255\255\254\000\000\
\000\000\052\255\052\255\000\000\000\000\011\255\000\000\017\255\
\010\255\030\255\033\255\041\255\027\255\003\255\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\041\255\041\255\
\041\255\038\255\000\000\039\255\000\000\000\000\000\000\000\000\
\000\000\041\255\042\255\048\255\043\255\053\255\050\255\000\000\
\000\000\055\255\000\000\041\255\056\255\000\000\057\255\000\000\
\058\255\059\255\000\000\000\000\000\000"

let yyrindex = "\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\045\255\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
\000\000\000\000\000\000\000\000\000\000"

let yygindex = "\000\000\
\000\000\000\000\057\000\056\000\250\255\000\000\000\000\055\000"

let yytablesize = 74
let yytable = "\019\000\
\003\000\012\000\003\000\001\000\015\000\027\000\029\000\022\000\
\017\000\012\000\023\000\013\000\032\000\014\000\004\000\005\000\
\004\000\005\000\042\000\013\000\006\000\051\000\006\000\043\000\
\007\000\030\000\020\000\041\000\024\000\025\000\026\000\044\000\
\053\000\054\000\055\000\045\000\046\000\047\000\048\000\004\000\
\005\000\016\000\017\000\058\000\052\000\006\000\049\000\018\000\
\018\000\018\000\018\000\056\000\057\000\065\000\060\000\059\000\
\066\000\061\000\018\000\033\000\034\000\035\000\036\000\037\000\
\038\000\021\000\062\000\063\000\064\000\031\000\067\000\068\000\
\069\000\040\000"

let yycheck = "\006\000\
\001\001\007\001\001\001\001\000\001\001\012\000\013\000\001\001\
\002\001\007\001\004\001\017\001\014\001\019\001\015\001\016\001\
\015\001\016\001\002\001\017\001\021\001\028\000\021\001\014\001\
\025\001\001\001\025\001\017\001\022\001\023\001\024\001\002\001\
\039\000\040\000\041\000\003\001\004\001\005\001\006\001\015\001\
\016\001\001\001\002\001\050\000\018\001\021\001\014\001\003\001\
\004\001\005\001\006\001\014\001\014\001\060\000\007\001\014\001\
\001\001\015\001\014\001\008\001\009\001\010\001\011\001\012\001\
\013\001\009\000\014\001\018\001\014\001\014\000\014\001\014\001\
\014\001\019\000"

let yynames_const = "\
  PLUS\000\
  MINUS\000\
  TIMES\000\
  DIV\000\
  ASSIGN\000\
  EQ\000\
  NEQ\000\
  LT\000\
  GT\000\
  GE\000\
  LE\000\
  SC\000\
  GOTO\000\
  IF\000\
  LBRACK\000\
  RBRACK\000\
  COLON\000\
  ERROR\000\
  ASSERT\000\
  NEWARRAY\000\
  SYMINT\000\
  SYMARRAY\000\
  TEOF\000\
  "

let yynames_block = "\
  ID\000\
  INT\000\
  "

let yyact = [|
  (fun _ -> failwith "parser")
; (fun __caml_parser_env ->
    Obj.repr(
# 33 "parse.mly"
        ( [] )
# 184 "parse.ml"
               : Se.stmt list))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 1 : Se.stmt list) in
    Obj.repr(
# 34 "parse.mly"
                    ( List.rev  _1 )
# 191 "parse.ml"
               : Se.stmt list))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : Se.stmt) in
    Obj.repr(
# 37 "parse.mly"
        ( [_1] )
# 198 "parse.ml"
               : Se.stmt list))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 1 : Se.stmt list) in
    let _2 = (Parsing.peek_val __caml_parser_env 0 : Se.stmt) in
    Obj.repr(
# 38 "parse.mly"
                    ( _2::_1 )
# 206 "parse.ml"
               : Se.stmt list))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : Se.prestmt) in
    Obj.repr(
# 41 "parse.mly"
           ( (next(), None, _1) )
# 213 "parse.ml"
               : Se.stmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 2 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 0 : Se.prestmt) in
    Obj.repr(
# 42 "parse.mly"
                    ( (next(), Some _1, _3) )
# 221 "parse.ml"
               : Se.stmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 5 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 3 : Se.arg) in
    let _4 = (Parsing.peek_val __caml_parser_env 2 : Se.bop) in
    let _5 = (Parsing.peek_val __caml_parser_env 1 : Se.arg) in
    Obj.repr(
# 45 "parse.mly"
                            ( Bop(_1, _3, _4, _5))
# 231 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 4 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 2 : Se.uop) in
    let _4 = (Parsing.peek_val __caml_parser_env 1 : Se.arg) in
    Obj.repr(
# 46 "parse.mly"
                        ( Uop(_1, _3, _4) )
# 240 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 3 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 1 : Se.arg) in
    Obj.repr(
# 47 "parse.mly"
                    ( Copy(_1, _3) )
# 248 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 4 : string) in
    let _4 = (Parsing.peek_val __caml_parser_env 1 : int) in
    Obj.repr(
# 48 "parse.mly"
                             ( Newarray(_1,_4) )
# 256 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 6 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 4 : Se.arg) in
    let _6 = (Parsing.peek_val __caml_parser_env 1 : Se.arg) in
    Obj.repr(
# 49 "parse.mly"
                                      ( Awrite(_1, _3, _6) )
# 265 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 6 : string) in
    let _3 = (Parsing.peek_val __caml_parser_env 4 : string) in
    let _5 = (Parsing.peek_val __caml_parser_env 2 : Se.arg) in
    Obj.repr(
# 50 "parse.mly"
                                     ( Aread(_1, _3, _5) )
# 274 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 1 : string) in
    Obj.repr(
# 51 "parse.mly"
              ( Goto _2 )
# 281 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 5 : Se.arg) in
    let _3 = (Parsing.peek_val __caml_parser_env 4 : Se.rop) in
    let _4 = (Parsing.peek_val __caml_parser_env 3 : Se.arg) in
    let _6 = (Parsing.peek_val __caml_parser_env 1 : string) in
    Obj.repr(
# 52 "parse.mly"
                             ( Cond(_2, _3, _4, _6) )
# 291 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 3 : string) in
    Obj.repr(
# 53 "parse.mly"
                       ( SymInt(_1) )
# 298 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 4 : string) in
    let _4 = (Parsing.peek_val __caml_parser_env 1 : int) in
    Obj.repr(
# 54 "parse.mly"
                             ( SymArray(_1,_4) )
# 306 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _2 = (Parsing.peek_val __caml_parser_env 3 : Se.arg) in
    let _3 = (Parsing.peek_val __caml_parser_env 2 : Se.rop) in
    let _4 = (Parsing.peek_val __caml_parser_env 1 : Se.arg) in
    Obj.repr(
# 55 "parse.mly"
                         ( Assert(_2, _3, _4) )
# 315 "parse.ml"
               : Se.prestmt))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : string) in
    Obj.repr(
# 58 "parse.mly"
      ( Id _1 )
# 322 "parse.ml"
               : Se.arg))
; (fun __caml_parser_env ->
    let _1 = (Parsing.peek_val __caml_parser_env 0 : int) in
    Obj.repr(
# 59 "parse.mly"
       ( Int _1 )
# 329 "parse.ml"
               : Se.arg))
; (fun __caml_parser_env ->
    Obj.repr(
# 62 "parse.mly"
        ( Plus )
# 335 "parse.ml"
               : Se.bop))
; (fun __caml_parser_env ->
    Obj.repr(
# 63 "parse.mly"
         ( Minus )
# 341 "parse.ml"
               : Se.bop))
; (fun __caml_parser_env ->
    Obj.repr(
# 64 "parse.mly"
         ( Times )
# 347 "parse.ml"
               : Se.bop))
; (fun __caml_parser_env ->
    Obj.repr(
# 65 "parse.mly"
       ( Div )
# 353 "parse.ml"
               : Se.bop))
; (fun __caml_parser_env ->
    Obj.repr(
# 68 "parse.mly"
         ( Neg )
# 359 "parse.ml"
               : Se.uop))
; (fun __caml_parser_env ->
    Obj.repr(
# 71 "parse.mly"
      ( Eq )
# 365 "parse.ml"
               : Se.rop))
; (fun __caml_parser_env ->
    Obj.repr(
# 72 "parse.mly"
       ( Neq )
# 371 "parse.ml"
               : Se.rop))
; (fun __caml_parser_env ->
    Obj.repr(
# 73 "parse.mly"
      ( Lt )
# 377 "parse.ml"
               : Se.rop))
; (fun __caml_parser_env ->
    Obj.repr(
# 74 "parse.mly"
      ( Gt )
# 383 "parse.ml"
               : Se.rop))
; (fun __caml_parser_env ->
    Obj.repr(
# 75 "parse.mly"
      ( Ge )
# 389 "parse.ml"
               : Se.rop))
; (fun __caml_parser_env ->
    Obj.repr(
# 76 "parse.mly"
      ( Le )
# 395 "parse.ml"
               : Se.rop))
(* Entry prog *)
; (fun __caml_parser_env -> raise (Parsing.YYexit (Parsing.peek_val __caml_parser_env 0)))
|]
let yytables =
  { Parsing.actions=yyact;
    Parsing.transl_const=yytransl_const;
    Parsing.transl_block=yytransl_block;
    Parsing.lhs=yylhs;
    Parsing.len=yylen;
    Parsing.defred=yydefred;
    Parsing.dgoto=yydgoto;
    Parsing.sindex=yysindex;
    Parsing.rindex=yyrindex;
    Parsing.gindex=yygindex;
    Parsing.tablesize=yytablesize;
    Parsing.table=yytable;
    Parsing.check=yycheck;
    Parsing.error_function=parse_error;
    Parsing.names_const=yynames_const;
    Parsing.names_block=yynames_block }
let prog (lexfun : Lexing.lexbuf -> token) (lexbuf : Lexing.lexbuf) =
   (Parsing.yyparse yytables 1 lexfun lexbuf : Se.stmt list)
;;
