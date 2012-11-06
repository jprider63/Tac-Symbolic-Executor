
let run () =
	let stp = OcamlSTP.make_context () in
	let x = OcamlSTP.bv_var stp "x" 2 in (* x : BITVECTOR(2) *)
	let y = OcamlSTP.bv_var stp "y" 2 in (* y : BITVECTOR(2) *)
	OcamlSTP.vc_assert stp (OcamlSTP.bv_lt stp x y); (* x < y *)
	let d = OcamlSTP.bv_sub stp y x in (* d = y - x *)
	let q = OcamlSTP.bv_gt stp d (OcamlSTP.bv_of_int stp 2 0) in (* q = d > 0 *)
	(* only one query can be made per context, but e_push/e_pop can be used to recycle the context *)
	let ans =
		OcamlSTP.vc_push stp;
		let ans = OcamlSTP.vc_query stp q in (* QUERY(q) *)
		OcamlSTP.vc_pop stp;
		ans
	in
	let not_ans =
		OcamlSTP.vc_push stp;
		let ans = OcamlSTP.vc_query stp (OcamlSTP.bool_not stp q) in (* QUERY(NOT(q)) *)
		OcamlSTP.vc_pop stp;
		ans
	in
	match ans, not_ans with
		| OcamlSTP.Valid, _ -> Printf.printf "True\n"
		| _, OcamlSTP.Valid -> Printf.printf "False\n"
		| _, _ -> Printf.printf "Unknown\n"

