TOP = ../..
include $(TOP)/scripts/Makefile.common


OCAMLFLAGS = -w A -warn-error A
OCAMLLDFLAGS = -linkall -cclib -lstdc++
OCAMLRUNPARAM = b
OCAMLDOCDIR = doc

OCAMLC = ocamlc
OCAMLOPT = ocamlopt
OCAMLMKTOP = ocamlmktop
OCAMLDOC = ocamldoc

VALGRIND := $(shell which valgrind)
OCAMLINCDIR := $(shell $(OCAMLC) -where)

CXXFLAGS += -I$(OCAMLINCDIR)


all : lib top doc

test : test-native-code

lib : libOcamlSTP.a OcamlSTP.a OcamlSTP.cmi OcamlSTP.cma OcamlSTP.cmxa

top : OcamlSTP


%.a %.cmi %.cma %.cmxa : %.mli %.ml lib%.a libstp.a
	$(OCAMLOPT) $(OCAMLFLAGS) $(OCAMLLDFLAGS) -a -o $*.cmxa $*.mli $*.ml -cclib -l$* -cclib -lstp
	$(OCAMLC) $(OCAMLFLAGS) $(OCAMLLDFLAGS) -a -custom -o $*.cma $*.mli $*.ml -cclib -l$* -cclib -lstp

libOcamlSTP.a : OcamlSTP_impl.o
	$(RM) $@
	$(AR) qcs $@ $^

# make local copy and link to it, to avoid adding spurious autolink flags to the Ocaml archives
libstp.a : $(TOP)/lib/libstp.a
	ln -f $< $@

OcamlSTP : OcamlSTP.cma
	$(OCAMLMKTOP) -I . -o $@ $^

doc : $(OCAMLDOCDIR)/index.html

$(OCAMLDOCDIR)/index.html : OcamlSTP.mli OcamlSTP.ml | OcamlSTP.cmi
	mkdir -p $(@D)
	$(OCAMLDOC) -html -d $(@D) $^


test-native-code : lib
	$(OCAMLOPT) -g -I . -o TestOcamlSTP.native OcamlSTP.cmxa TestOcamlSTP.ml -verbose
	OCAMLRUNPARAM=$(OCAMLRUNPARAM) $(VALGRIND) ./TestOcamlSTP.native

test-byte-code : lib
	$(OCAMLC) -g -I . -o TestOcamlSTP.byte OcamlSTP.cma TestOcamlSTP.ml -verbose
	OCAMLRUNPARAM=$(OCAMLRUNPARAM) $(VALGRIND) ./TestOcamlSTP.byte


clean ::
	$(RM) libstp.a libOcamlSTP.a OcamlSTP_impl.o OcamlSTP
	$(RM) $(addprefix OcamlSTP.,cmi cma cmxa cmi cmo cmx o a)
	$(RM) $(addprefix TestOcamlSTP.,native byte cmi cmo cmx o)
	$(RM) -r $(OCAMLDOCDIR)
	$(RM) depend


depend: OcamlSTP_impl.cpp
	@$(call makedepend,$@,OcamlSTP_impl.cpp)

-include depend
