let analysis = ref None

let do_unparse () = analysis := Some Unparse.unparse
let do_se () = analysis := Some Se.se
let do_stp_example () = Stp_example.run (); exit 0

let infile = ref "-"

let arg_specs =
	[
		("-unparse", Arg.Unit do_unparse, "Unparse input program");
		("-se", Arg.Unit do_se, "Symbolically execute input program");
		("-stp-example", Arg.Unit do_stp_example, "Run an example query for STP");
	];;

let main () =
  Arg.parse arg_specs (function s -> infile := s) "";
  let (ch,k) =
    if (!infile = "-") then
      (stdin, function () -> ())
    else
      let chan = open_in !infile in
      (chan, function () -> close_in chan) in

  (* parse it *)
  let lexbuf = Lexing.from_channel ch in
  let cmds = Parse.prog Lex.token lexbuf in
  	k();
  	match !analysis with
    | None -> Arg.usage arg_specs "usage: se [opts] [file]\n"
  	| Some f -> f cmds
;;

main();;
