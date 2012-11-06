Tac Symbolic Executor
---------------------

This is a symbolic executor I implemented for CMSC631, *Program Analysis and Understanding*. It is written in OCaml and makes use of the constraint solver OCamlSTP. The project specification can be found [here](http://www.cs.umd.edu/class/fall2011/cmsc631/p2.shtml).

Refer to the function *se* in the file *se.ml* for the meat of the implementation. The project can be compiled by running *make*. To symbolically execute the program *mytest1.tac*, run the command *./se -se mytest1.tac*.
