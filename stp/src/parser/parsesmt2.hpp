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
     END = 0,
     NUMERAL_TOK = 258,
     BVCONST_DECIMAL_TOK = 259,
     BVCONST_BINARY_TOK = 260,
     BVCONST_HEXIDECIMAL_TOK = 261,
     DECIMAL_TOK = 262,
     FORMID_TOK = 263,
     TERMID_TOK = 264,
     STRING_TOK = 265,
     SOURCE_TOK = 266,
     CATEGORY_TOK = 267,
     DIFFICULTY_TOK = 268,
     VERSION_TOK = 269,
     STATUS_TOK = 270,
     PRINT_TOK = 271,
     UNDERSCORE_TOK = 272,
     LPAREN_TOK = 273,
     RPAREN_TOK = 274,
     BVLEFTSHIFT_1_TOK = 275,
     BVRIGHTSHIFT_1_TOK = 276,
     BVARITHRIGHTSHIFT_TOK = 277,
     BVPLUS_TOK = 278,
     BVSUB_TOK = 279,
     BVNOT_TOK = 280,
     BVMULT_TOK = 281,
     BVDIV_TOK = 282,
     SBVDIV_TOK = 283,
     BVMOD_TOK = 284,
     SBVREM_TOK = 285,
     SBVMOD_TOK = 286,
     BVNEG_TOK = 287,
     BVAND_TOK = 288,
     BVOR_TOK = 289,
     BVXOR_TOK = 290,
     BVNAND_TOK = 291,
     BVNOR_TOK = 292,
     BVXNOR_TOK = 293,
     BVCONCAT_TOK = 294,
     BVLT_TOK = 295,
     BVGT_TOK = 296,
     BVLE_TOK = 297,
     BVGE_TOK = 298,
     BVSLT_TOK = 299,
     BVSGT_TOK = 300,
     BVSLE_TOK = 301,
     BVSGE_TOK = 302,
     BVSX_TOK = 303,
     BVEXTRACT_TOK = 304,
     BVZX_TOK = 305,
     BVROTATE_RIGHT_TOK = 306,
     BVROTATE_LEFT_TOK = 307,
     BVREPEAT_TOK = 308,
     BVCOMP_TOK = 309,
     BITVEC_TOK = 310,
     ARRAY_TOK = 311,
     BOOL_TOK = 312,
     TRUE_TOK = 313,
     FALSE_TOK = 314,
     NOT_TOK = 315,
     AND_TOK = 316,
     OR_TOK = 317,
     XOR_TOK = 318,
     ITE_TOK = 319,
     EQ_TOK = 320,
     IMPLIES_TOK = 321,
     DISTINCT_TOK = 322,
     LET_TOK = 323,
     EXIT_TOK = 324,
     CHECK_SAT_TOK = 325,
     LOGIC_TOK = 326,
     NOTES_TOK = 327,
     OPTION_TOK = 328,
     DECLARE_FUNCTION_TOK = 329,
     FORMULA_TOK = 330,
     PUSH_TOK = 331,
     POP_TOK = 332,
     SELECT_TOK = 333,
     STORE_TOK = 334
   };
#endif
/* Tokens.  */
#define END 0
#define NUMERAL_TOK 258
#define BVCONST_DECIMAL_TOK 259
#define BVCONST_BINARY_TOK 260
#define BVCONST_HEXIDECIMAL_TOK 261
#define DECIMAL_TOK 262
#define FORMID_TOK 263
#define TERMID_TOK 264
#define STRING_TOK 265
#define SOURCE_TOK 266
#define CATEGORY_TOK 267
#define DIFFICULTY_TOK 268
#define VERSION_TOK 269
#define STATUS_TOK 270
#define PRINT_TOK 271
#define UNDERSCORE_TOK 272
#define LPAREN_TOK 273
#define RPAREN_TOK 274
#define BVLEFTSHIFT_1_TOK 275
#define BVRIGHTSHIFT_1_TOK 276
#define BVARITHRIGHTSHIFT_TOK 277
#define BVPLUS_TOK 278
#define BVSUB_TOK 279
#define BVNOT_TOK 280
#define BVMULT_TOK 281
#define BVDIV_TOK 282
#define SBVDIV_TOK 283
#define BVMOD_TOK 284
#define SBVREM_TOK 285
#define SBVMOD_TOK 286
#define BVNEG_TOK 287
#define BVAND_TOK 288
#define BVOR_TOK 289
#define BVXOR_TOK 290
#define BVNAND_TOK 291
#define BVNOR_TOK 292
#define BVXNOR_TOK 293
#define BVCONCAT_TOK 294
#define BVLT_TOK 295
#define BVGT_TOK 296
#define BVLE_TOK 297
#define BVGE_TOK 298
#define BVSLT_TOK 299
#define BVSGT_TOK 300
#define BVSLE_TOK 301
#define BVSGE_TOK 302
#define BVSX_TOK 303
#define BVEXTRACT_TOK 304
#define BVZX_TOK 305
#define BVROTATE_RIGHT_TOK 306
#define BVROTATE_LEFT_TOK 307
#define BVREPEAT_TOK 308
#define BVCOMP_TOK 309
#define BITVEC_TOK 310
#define ARRAY_TOK 311
#define BOOL_TOK 312
#define TRUE_TOK 313
#define FALSE_TOK 314
#define NOT_TOK 315
#define AND_TOK 316
#define OR_TOK 317
#define XOR_TOK 318
#define ITE_TOK 319
#define EQ_TOK 320
#define IMPLIES_TOK 321
#define DISTINCT_TOK 322
#define LET_TOK 323
#define EXIT_TOK 324
#define CHECK_SAT_TOK 325
#define LOGIC_TOK 326
#define NOTES_TOK 327
#define OPTION_TOK 328
#define DECLARE_FUNCTION_TOK 329
#define FORMULA_TOK 330
#define PUSH_TOK 331
#define POP_TOK 332
#define SELECT_TOK 333
#define STORE_TOK 334




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 78 "smt2.y"
{  
  unsigned uintval;                  /* for numerals in types. */
  //ASTNode,ASTVec
  BEEV::ASTNode *node;
  BEEV::ASTVec *vec;
  std::string *str;
}
/* Line 1529 of yacc.c.  */
#line 217 "parsesmt2.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE smt2lval;

