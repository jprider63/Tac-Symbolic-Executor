EXTRALIBDIRS := stp/src/OcamlSTP
SOURCES := err.ml parse.ml lex.ml unparse.mli unparse.ml se.mli se.ml stp_example.ml main.ml
OBJS := $(filter %.cmo,$(SOURCES:.ml=.cmo))
CMIS := $(filter %.cmi,$(SOURCES:.mli=.cmi))
CSLFLAGS := -annot $(EXTRALIBDIRS:%=-I %)

se: $(OBJS)
	ocamlc $(CSLFLAGS) OcamlSTP.cma $^ -o se

$(OBJS) $(CMIS) : stp $(wildcard $(EXTRALIBDIRS) $(EXTRALIBDIRS:%=%/*))

clean:
	-$(RM) *.cmo *.cmi *.annot se .dep

distclean realclean: clean
	-$(MAKE) -C stp distclean


################
# sub-projects #
################

.PHONY : stp
stp : stp/Makefile
	$(MAKE) -C stp OcamlSTP
stp/Makefile : stp/scripts/Makefile.in stp/scripts/configure
	cd stp && scripts/configure --with-fpic --with-prefix=. --with-gcc="gcc -m32" --with-g++="g++ -m32"


########################################
# implicit rules for ocaml compilation #
########################################

%.cmi : %.mli
	ocamlc $(CSLFLAGS) -c $< -o $@

%.cmi : %.ml
	ocamlc $(CSLFLAGS) -c $< -o $@

%.cmo : %.ml
	ocamlc $(CSLFLAGS) -c $< -o $@

%.ml %.mli : %.mly
	ocamlyacc $<

%.ml : %.mll
	ocamllex $<

.dep: $(SOURCES)
	ocamldep *.ml* > .dep

depend: .dep

-include .dep

