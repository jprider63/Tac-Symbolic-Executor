/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND_TOK = 258,
     OR_TOK = 259,
     NOT_TOK = 260,
     EXCEPT_TOK = 261,
     XOR_TOK = 262,
     NAND_TOK = 263,
     NOR_TOK = 264,
     IMPLIES_TOK = 265,
     IFF_TOK = 266,
     IF_TOK = 267,
     THEN_TOK = 268,
     ELSE_TOK = 269,
     ELSIF_TOK = 270,
     END_TOK = 271,
     ENDIF_TOK = 272,
     NEQ_TOK = 273,
     ASSIGN_TOK = 274,
     BV_TOK = 275,
     BVLEFTSHIFT_TOK = 276,
     BVRIGHTSHIFT_TOK = 277,
     BVSHL_TOK = 278,
     BVLSHR_TOK = 279,
     BVASHR_TOK = 280,
     BVPLUS_TOK = 281,
     BVSUB_TOK = 282,
     BVUMINUS_TOK = 283,
     BVMULT_TOK = 284,
     BVDIV_TOK = 285,
     BVMOD_TOK = 286,
     SBVDIV_TOK = 287,
     SBVREM_TOK = 288,
     BVNEG_TOK = 289,
     BVAND_TOK = 290,
     BVOR_TOK = 291,
     BVXOR_TOK = 292,
     BVNAND_TOK = 293,
     BVNOR_TOK = 294,
     BVXNOR_TOK = 295,
     BVCONCAT_TOK = 296,
     BVLT_TOK = 297,
     BVGT_TOK = 298,
     BVLE_TOK = 299,
     BVGE_TOK = 300,
     BVSLT_TOK = 301,
     BVSGT_TOK = 302,
     BVSLE_TOK = 303,
     BVSGE_TOK = 304,
     BOOL_TO_BV_TOK = 305,
     BVSX_TOK = 306,
     BOOLEXTRACT_TOK = 307,
     ASSERT_TOK = 308,
     QUERY_TOK = 309,
     BOOLEAN_TOK = 310,
     ARRAY_TOK = 311,
     OF_TOK = 312,
     WITH_TOK = 313,
     TRUELIT_TOK = 314,
     FALSELIT_TOK = 315,
     IN_TOK = 316,
     LET_TOK = 317,
     PUSH_TOK = 318,
     POP_TOK = 319,
     BVCONST_TOK = 320,
     TERMID_TOK = 321,
     FORMID_TOK = 322,
     COUNTEREXAMPLE_TOK = 323,
     NUMERAL_TOK = 324,
     BIN_BASED_NUMBER = 325,
     DEC_BASED_NUMBER = 326,
     HEX_BASED_NUMBER = 327,
     STRING_TOK = 328
   };
#endif
/* Tokens.  */
#define AND_TOK 258
#define OR_TOK 259
#define NOT_TOK 260
#define EXCEPT_TOK 261
#define XOR_TOK 262
#define NAND_TOK 263
#define NOR_TOK 264
#define IMPLIES_TOK 265
#define IFF_TOK 266
#define IF_TOK 267
#define THEN_TOK 268
#define ELSE_TOK 269
#define ELSIF_TOK 270
#define END_TOK 271
#define ENDIF_TOK 272
#define NEQ_TOK 273
#define ASSIGN_TOK 274
#define BV_TOK 275
#define BVLEFTSHIFT_TOK 276
#define BVRIGHTSHIFT_TOK 277
#define BVSHL_TOK 278
#define BVLSHR_TOK 279
#define BVASHR_TOK 280
#define BVPLUS_TOK 281
#define BVSUB_TOK 282
#define BVUMINUS_TOK 283
#define BVMULT_TOK 284
#define BVDIV_TOK 285
#define BVMOD_TOK 286
#define SBVDIV_TOK 287
#define SBVREM_TOK 288
#define BVNEG_TOK 289
#define BVAND_TOK 290
#define BVOR_TOK 291
#define BVXOR_TOK 292
#define BVNAND_TOK 293
#define BVNOR_TOK 294
#define BVXNOR_TOK 295
#define BVCONCAT_TOK 296
#define BVLT_TOK 297
#define BVGT_TOK 298
#define BVLE_TOK 299
#define BVGE_TOK 300
#define BVSLT_TOK 301
#define BVSGT_TOK 302
#define BVSLE_TOK 303
#define BVSGE_TOK 304
#define BOOL_TO_BV_TOK 305
#define BVSX_TOK 306
#define BOOLEXTRACT_TOK 307
#define ASSERT_TOK 308
#define QUERY_TOK 309
#define BOOLEAN_TOK 310
#define ARRAY_TOK 311
#define OF_TOK 312
#define WITH_TOK 313
#define TRUELIT_TOK 314
#define FALSELIT_TOK 315
#define IN_TOK 316
#define LET_TOK 317
#define PUSH_TOK 318
#define POP_TOK 319
#define BVCONST_TOK 320
#define TERMID_TOK 321
#define FORMID_TOK 322
#define COUNTEREXAMPLE_TOK 323
#define NUMERAL_TOK 324
#define BIN_BASED_NUMBER 325
#define DEC_BASED_NUMBER 326
#define HEX_BASED_NUMBER 327
#define STRING_TOK 328




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 38 "cvc.y"
{

  unsigned int uintval;                 /* for numerals in types. */
  struct {
    //stores the indexwidth and valuewidth
    //indexwidth is 0 iff type is bitvector. positive iff type is
    //array, and stores the width of the indexing bitvector
    unsigned int indexwidth;
    //width of the bitvector type
    unsigned int valuewidth;
  } indexvaluewidth;

  //ASTNode,ASTVec
  BEEV::ASTNode *node;
  BEEV::ASTVec *vec;
  vector<char*> * stringVec;
  char* str;

  //Hash_Map to hold Array Updates during parse A map from array index
  //to array values. To support the WITH construct
  BEEV::ASTNodeMap * Index_To_UpdateValue;
}
/* Line 1529 of yacc.c.  */
#line 218 "parsecvc.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE cvclval;

