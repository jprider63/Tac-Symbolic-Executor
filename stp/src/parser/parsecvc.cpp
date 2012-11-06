/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse cvcparse
#define yylex   cvclex
#define yyerror cvcerror
#define yylval  cvclval
#define yychar  cvcchar
#define yydebug cvcdebug
#define yynerrs cvcnerrs


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




/* Copy the first part of user declarations.  */
#line 1 "cvc.y"

  // -*- c++ -*-
  /********************************************************************
   * AUTHORS: Vijay Ganesh
   *
   * BEGIN DATE: November, 2005
   *
   * LICENSE: Please view LICENSE file in the home dir of this Program
   ********************************************************************/
  
#include "parser.h"
#include "ParserInterface.h"

  using namespace std; 
  using namespace BEEV;
  
  // Suppress the bogus warning suppression in bison (it generates
  // compile error)
#undef __GNUC_MINOR__
  
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 1048576000
#define YYERROR_VERBOSE 1
#define YY_EXIT_FAILURE -1
#define YYPARSE_PARAM AssertsQuery
  
  extern int cvclex(void);
  extern char* yytext;
  extern int cvclineno;
  int yyerror(const char *s) {
    cout << "syntax error: line " << cvclineno << "\n" << s << endl;    
    FatalError("");
    return YY_EXIT_FAILURE;
  };
  
  

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */
#line 310 "parsecvc.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 323 "parsecvc.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1570

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  347

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      69,    82,     2,     2,    81,     2,    68,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    79,
       2,    65,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      70,    71,    72,    73,    74,    75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    12,    14,    17,    20,
      23,    25,    29,    31,    34,    38,    42,    45,    49,    53,
      59,    65,    67,    71,    73,    75,    77,    79,    84,    86,
      91,    97,   101,   107,   111,   113,   118,   125,   129,   133,
     136,   140,   144,   148,   152,   156,   160,   164,   171,   178,
     185,   192,   199,   206,   213,   220,   222,   224,   226,   231,
     237,   241,   247,   249,   251,   255,   257,   261,   263,   268,
     271,   274,   277,   282,   287,   294,   297,   301,   305,   312,
     319,   326,   333,   340,   344,   348,   352,   356,   360,   367,
     374,   381,   388,   397,   402,   411,   420,   429,   438,   447,
     449,   451,   456,   458,   462,   468,   476,   478,   482,   486,
     492,   496
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      85,     0,    -1,    87,    -1,    87,    86,    -1,    73,    79,
      -1,    -1,    91,    -1,    92,    91,    -1,    88,    91,    -1,
      92,    89,    -1,    89,    -1,    88,    92,    89,    -1,    90,
      -1,    89,    90,    -1,    53,   102,    79,    -1,    54,   102,
      79,    -1,    93,    79,    -1,    92,    93,    79,    -1,    95,
      80,    96,    -1,    95,    80,    96,    65,   106,    -1,    95,
      80,    96,    65,   102,    -1,    78,    -1,    78,    81,    94,
      -1,    94,    -1,    97,    -1,    98,    -1,    99,    -1,    20,
      69,    74,    82,    -1,    55,    -1,    56,    97,    57,    97,
      -1,    12,   102,    13,   106,   101,    -1,    14,   106,    17,
      -1,    15,   106,    13,   106,   101,    -1,    69,   102,    82,
      -1,    72,    -1,    72,    69,   106,    82,    -1,    52,    69,
     106,    81,    74,    82,    -1,   106,    65,   106,    -1,   106,
      18,   106,    -1,     5,   102,    -1,   102,     4,   102,    -1,
     102,     9,   102,    -1,   102,     3,   102,    -1,   102,     8,
     102,    -1,   102,    10,   102,    -1,   102,    11,   102,    -1,
     102,     7,   102,    -1,    42,    69,   106,    81,   106,    82,
      -1,    43,    69,   106,    81,   106,    82,    -1,    44,    69,
     106,    81,   106,    82,    -1,    45,    69,   106,    81,   106,
      82,    -1,    46,    69,   106,    81,   106,    82,    -1,    47,
      69,   106,    81,   106,    82,    -1,    48,    69,   106,    81,
     106,    82,    -1,    49,    69,   106,    81,   106,    82,    -1,
     103,    -1,    59,    -1,    60,    -1,    62,   109,    61,   102,
      -1,    12,   102,    13,   102,   104,    -1,    14,   102,    17,
      -1,    15,   102,    13,   102,   104,    -1,    78,    -1,   106,
      -1,   105,    81,   106,    -1,    71,    -1,    69,   106,    82,
      -1,    70,    -1,    50,    69,   102,    82,    -1,    74,    75,
      -1,    74,    76,    -1,    74,    77,    -1,   106,    66,   106,
      83,    -1,   106,    69,   106,    82,    -1,   106,    66,    74,
      80,    74,    83,    -1,    34,   106,    -1,   106,    35,   106,
      -1,   106,    36,   106,    -1,    37,    69,   106,    81,   106,
      82,    -1,    38,    69,   106,    81,   106,    82,    -1,    39,
      69,   106,    81,   106,    82,    -1,    40,    69,   106,    81,
     106,    82,    -1,    51,    69,   106,    81,    74,    82,    -1,
     106,    41,   106,    -1,   106,    21,    74,    -1,   106,    21,
     106,    -1,   106,    22,    74,    -1,   106,    22,   106,    -1,
      23,    69,   106,    81,   106,    82,    -1,    24,    69,   106,
      81,   106,    82,    -1,    25,    69,   106,    81,   106,    82,
      -1,    26,    69,    74,    81,   105,    82,    -1,    27,    69,
      74,    81,   106,    81,   106,    82,    -1,    28,    69,   106,
      82,    -1,    29,    69,    74,    81,   106,    81,   106,    82,
      -1,    30,    69,    74,    81,   106,    81,   106,    82,    -1,
      31,    69,    74,    81,   106,    81,   106,    82,    -1,    32,
      69,    74,    81,   106,    81,   106,    82,    -1,    33,    69,
      74,    81,   106,    81,   106,    82,    -1,   100,    -1,   107,
      -1,    62,   109,    61,   106,    -1,    78,    -1,   106,    58,
     108,    -1,    66,   106,    83,    19,   106,    -1,   108,    58,
      66,   106,    83,    19,   106,    -1,   110,    -1,   109,    81,
     110,    -1,    78,    65,   106,    -1,    78,    80,    96,    65,
     106,    -1,    78,    65,   102,    -1,    78,    80,    96,    65,
     102,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   184,   184,   188,   194,   201,   216,   222,   228,   246,
     250,   254,   274,   281,   290,   296,   301,   304,   309,   320,
     335,   352,   358,   366,   382,   383,   384,   387,   399,   405,
     413,   431,   432,   451,   455,   459,   465,   477,   484,   491,
     496,   502,   508,   514,   520,   526,   532,   538,   545,   552,
     559,   566,   573,   580,   587,   594,   595,   601,   608,   617,
     626,   627,   633,   641,   648,   658,   659,   660,   661,   671,
     677,   683,   689,   699,   709,   724,   731,   742,   753,   764,
     776,   788,   800,   817,   826,   842,   922,   942,   958,   967,
     976,   985,   992,  1000,  1007,  1015,  1023,  1031,  1039,  1046,
    1047,  1048,  1051,  1059,  1089,  1096,  1105,  1106,  1109,  1128,
    1142,  1152
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"AND\"", "\"OR\"", "\"NOT\"",
  "\"EXCEPT\"", "\"XOR\"", "\"NAND\"", "\"NOR\"", "\"=>\"", "\"<=>\"",
  "\"IF\"", "\"THEN\"", "\"ELSE\"", "\"ELSIF\"", "\"END\"", "\"ENDIF\"",
  "\"/=\"", "\":=\"", "\"BV\"", "\"<<\"", "\">>\"", "\"BVSHL\"",
  "\"BVLSHR\"", "\"BVASHR\"", "\"BVPLUS\"", "\"BVSUB\"", "\"BVUMINUS\"",
  "\"BVMULT\"", "\"BVDIV\"", "\"BVMOD\"", "\"SBVDIV\"", "\"SBVREM\"",
  "\"~\"", "\"&\"", "\"|\"", "\"BVXOR\"", "\"BVNAND\"", "\"BVNOR\"",
  "\"BVXNOR\"", "\"@\"", "\"BVLT\"", "\"BVGT\"", "\"BVLE\"", "\"BVGE\"",
  "\"BVSLT\"", "\"BVSGT\"", "\"BVSLE\"", "\"BVSGE\"", "\"BOOLBV\"",
  "\"BVSX\"", "\"BOOLEXTRACT\"", "\"ASSERT\"", "\"QUERY\"", "\"BOOLEAN\"",
  "\"ARRAY\"", "\"OF\"", "\"WITH\"", "\"TRUE\"", "\"FALSE\"", "\"IN\"",
  "\"LET\"", "\"PUSH\"", "\"POP\"", "'='", "'['", "'{'", "'.'", "'('",
  "BVCONST_TOK", "TERMID_TOK", "FORMID_TOK", "COUNTEREXAMPLE_TOK",
  "NUMERAL_TOK", "BIN_BASED_NUMBER", "DEC_BASED_NUMBER",
  "HEX_BASED_NUMBER", "STRING_TOK", "';'", "':'", "','", "')'", "']'",
  "$accept", "cmd", "counterexample", "other_cmd", "other_cmd1", "Asserts",
  "Assert", "Query", "VarDecls", "VarDecl", "reverseFORM_IDs", "FORM_IDs",
  "Type", "BvType", "BoolType", "ArrayType", "IfExpr", "ElseRestExpr",
  "Formula", "IfForm", "ElseRestForm", "Exprs", "Expr", "ArrayUpdateExpr",
  "Updates", "LetDecls", "LetDecl", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    61,    91,   123,    46,    40,
     320,   321,   322,   323,   324,   325,   326,   327,   328,    59,
      58,    44,    41,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    90,    91,    92,    92,    93,    93,
      93,    94,    94,    95,    96,    96,    96,    97,    98,    99,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     104,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   108,   108,   109,   109,   110,   110,
     110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     1,     2,     2,     2,
       1,     3,     1,     2,     3,     3,     2,     3,     3,     5,
       5,     1,     3,     1,     1,     1,     1,     4,     1,     4,
       5,     3,     5,     3,     1,     4,     6,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     6,
       6,     6,     6,     6,     6,     1,     1,     1,     4,     5,
       3,     5,     1,     1,     3,     1,     3,     1,     4,     2,
       2,     2,     4,     4,     6,     2,     3,     3,     6,     6,
       6,     6,     6,     3,     3,     3,     3,     3,     6,     6,
       6,     6,     8,     4,     8,     8,     8,     8,     8,     1,
       1,     4,     1,     3,     5,     7,     1,     3,     3,     5,
       3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    21,     0,     2,     0,    10,    12,     6,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,     0,    67,    65,    34,
       0,   102,    99,     0,    55,     0,   100,     0,     0,     1,
       0,     3,     8,     0,    13,     9,     7,     0,    16,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      22,     4,    11,    17,     0,    28,     0,    18,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    66,     0,    42,    40,
      46,    43,    41,    44,    45,    38,    84,    85,    86,    87,
      76,    77,    83,     0,   103,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,   110,   108,     0,    58,   101,   107,    35,     0,
       0,     0,    72,    73,     0,     0,    20,    19,     0,     0,
      62,    59,     0,     0,    30,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    29,     0,     0,
       0,     0,    88,    89,    90,     0,    91,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    47,    48,    49,
      50,    51,    52,    53,    54,    82,    36,   111,   109,     0,
       0,    74,    60,     0,    31,     0,    64,     0,     0,     0,
       0,     0,     0,   104,     0,     0,     0,    92,    94,    95,
      96,    97,    98,     0,    61,    32,   105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    61,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   137,   138,   139,   140,    52,   254,    53,    54,
     251,   258,    55,    56,   194,   103,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
     -47,   397,   397,   -72,    73,    20,   -33,    38,  -129,  -129,
     -47,    22,  -129,    23,   397,   397,    33,    50,    52,    54,
      55,    56,    63,    65,    67,    68,    69,   453,    71,    75,
      76,    79,    80,    81,    96,    98,    99,   101,   104,   122,
     128,   132,   133,  -129,  -129,    30,   397,  -129,  -129,   145,
      19,  -129,  -129,    25,  -129,  1461,  -129,    39,   147,  -129,
     150,  -129,  -129,    -1,  -129,    38,  -129,   159,  -129,    10,
    -129,   349,   453,   453,   453,   165,   166,   453,   170,   171,
     174,   176,   179,   397,    30,   453,   134,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   397,
     453,   453,   -43,   -10,  -129,     7,    64,   453,  -129,  -129,
    -129,   397,   397,   397,   397,   397,   397,   397,  -129,   453,
     509,   565,   453,   453,   453,   189,   453,   621,   453,  -129,
    -129,  -129,    38,  -129,   187,  -129,   237,   193,  -129,  -129,
    -129,   397,  1084,  1094,  1110,   180,   182,   106,   184,   188,
     192,   200,   202,   390,     9,   297,  1126,  1136,  1152,  1168,
    1178,  1194,  1210,  1220,  1236,  1252,  1262,  1278,    16,  1294,
    1304,   397,    10,   397,    30,  -129,  -129,   643,    70,    66,
     149,   255,  -129,   373,   373,  1501,    19,    14,    19,    14,
     134,    85,    18,   453,  -129,  1501,   118,   183,   645,   212,
     217,   397,    53,  1420,   453,   453,   453,   453,   453,  -129,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,  -129,
     213,   214,   224,  1461,   226,   224,  1461,  -129,  -129,   185,
     223,   218,  -129,  -129,   216,   237,   224,  1461,   397,   397,
    -129,  -129,   453,   453,  -129,   652,   694,   701,   -78,  1501,
    1320,  1336,  1346,  1362,  1378,  1388,  1452,  1501,   733,   743,
     772,   782,   811,   821,   850,   860,   889,   899,   928,   938,
     238,   241,   397,   305,   453,   242,  -129,  -129,   268,   498,
    1459,   309,  -129,  -129,  -129,   453,  -129,   453,   453,   453,
     453,   453,   453,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,   224,  1461,   453,
     201,  -129,  -129,   397,  -129,   453,  1501,   967,   977,  1006,
    1016,  1045,  1055,   -28,   307,    53,  1452,  -129,  -129,  -129,
    -129,  -129,  -129,   453,  -129,  -129,   -28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,  -129,  -129,    -8,    -6,    82,   321,    -5,
     270,  -129,   157,  -128,  -129,  -129,  -129,     0,    -2,  -129,
       2,  -129,    89,  -129,  -129,   250,   161
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      57,    64,    65,   295,   296,    67,     1,     2,   200,    58,
     111,   112,    70,    71,   113,   114,   115,   116,   117,   111,
     112,     2,   171,   113,   114,   115,   116,   117,   111,   112,
     134,     3,   113,   114,   115,   116,   117,   172,   127,   120,
     121,   128,   111,   112,   105,     3,   113,   114,   115,   116,
     117,   173,     1,   122,   123,   132,   111,   112,    67,    64,
     113,   114,   115,   116,   117,   135,   136,   248,   249,   111,
     216,   174,   125,    59,   114,   115,   125,     3,   114,   115,
     127,   153,   119,   128,   127,   120,   121,   128,    62,   175,
     174,     1,    66,    60,   108,   109,   110,   168,   229,   122,
     123,    68,    72,    69,   118,   124,   120,   121,   102,   178,
     179,   180,   181,   182,   183,   184,    86,   287,   129,    73,
     122,    74,   125,    75,    76,    77,    64,   120,   121,   126,
     127,   250,    78,   128,    79,   106,    80,    81,    82,   202,
      87,   122,   123,   125,    88,    89,   176,   124,    90,    91,
      92,   127,   111,   112,   128,   120,   121,   114,   115,   116,
     117,   142,   143,   144,   125,    93,   147,    94,    95,   232,
      96,   235,   127,    97,   155,   128,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   209,   169,
     170,    98,   125,   108,   109,   110,   177,    99,   241,   246,
     127,   100,   101,   128,   120,   121,   120,   121,   185,   187,
     189,   190,   191,   192,   107,   195,   197,   198,   122,   123,
     122,   123,   120,   121,   124,     3,   124,   111,   112,   131,
     203,   113,   114,   115,   116,   117,   122,   123,   133,   145,
     146,   125,   124,   125,   148,   149,   288,   289,   150,   127,
     151,   127,   128,   152,   128,   193,   199,   134,   201,   125,
     233,   207,   236,   208,   115,   210,   242,   127,   283,   211,
     128,   111,   112,   212,   245,   113,   114,   115,   116,   117,
     317,   213,   239,   214,   334,   322,   244,   280,   281,   284,
     247,   282,   285,   255,   256,   257,   259,   260,   286,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   120,   121,
     315,   335,   325,   316,   319,   321,   343,    63,   130,   234,
     120,   121,   122,   123,   154,   237,   345,   344,   124,     0,
       0,   290,   291,     0,   122,   123,     0,     0,     0,     0,
     124,     0,   111,   112,     0,   125,   113,   114,   115,   116,
     117,     0,   141,   127,     0,     0,   128,   125,     0,     0,
       0,   318,     0,   320,     0,   127,   111,   112,   128,   176,
       0,   114,   115,   116,   326,     0,   327,   328,   329,   330,
     331,   332,     0,   111,   112,     0,     0,   113,   114,   115,
     116,   117,    14,   215,     0,     0,     0,     0,   333,    15,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   346,     0,    28,    29,    30,    31,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,     0,     0,     0,     0,    43,    44,     0,    45,
       0,     0,     0,     0,     0,    83,    46,    47,    48,    49,
       0,    50,     0,     0,     0,    51,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,   111,   112,    40,    41,   113,   114,   115,   116,   117,
       0,   323,     0,     0,     0,    84,     0,     0,     0,     0,
       0,    83,    85,    47,    48,     0,     0,    50,     0,     0,
       0,    51,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,    83,    85,    47,
      48,     0,     0,   186,     0,     0,     0,    51,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,    83,    85,    47,    48,     0,     0,   188,
       0,     0,     0,    51,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,    28,    29,
      30,    31,     0,     0,   120,   121,   120,   121,     0,     0,
       0,    40,    41,   120,   121,     0,     0,     0,   122,   123,
     122,   123,     0,    84,   124,     0,   124,   122,   123,     0,
      85,    47,    48,   124,     0,   196,     0,     0,     0,    51,
       0,   125,     0,   125,     0,     0,     0,     0,     0,   127,
     125,   127,   128,     0,   128,   120,   121,     0,   127,     0,
       0,   128,   120,   121,     0,   238,     0,   243,     0,   122,
     123,     0,     0,     0,   292,   124,   122,   123,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,   120,   121,     0,     0,     0,   125,
     127,     0,     0,   128,   120,   121,     0,   127,   122,   123,
     128,     0,     0,     0,   124,     0,   293,     0,   122,   123,
       0,     0,     0,   294,   124,     0,     0,     0,     0,     0,
       0,   125,     0,   120,   121,     0,     0,     0,     0,   127,
       0,   125,   128,   120,   121,     0,     0,   122,   123,   127,
       0,     0,   128,   124,     0,   303,     0,   122,   123,     0,
       0,     0,     0,   124,     0,   304,     0,     0,     0,     0,
     125,     0,   120,   121,     0,     0,     0,     0,   127,     0,
     125,   128,   120,   121,     0,     0,   122,   123,   127,     0,
       0,   128,   124,     0,   305,     0,   122,   123,     0,     0,
       0,     0,   124,     0,   306,     0,     0,     0,     0,   125,
       0,   120,   121,     0,     0,     0,     0,   127,     0,   125,
     128,   120,   121,     0,     0,   122,   123,   127,     0,     0,
     128,   124,     0,   307,     0,   122,   123,     0,     0,     0,
       0,   124,     0,   308,     0,     0,     0,     0,   125,     0,
     120,   121,     0,     0,     0,     0,   127,     0,   125,   128,
     120,   121,     0,     0,   122,   123,   127,     0,     0,   128,
     124,     0,   309,     0,   122,   123,     0,     0,     0,     0,
     124,     0,   310,     0,     0,     0,     0,   125,     0,   120,
     121,     0,     0,     0,     0,   127,     0,   125,   128,   120,
     121,     0,     0,   122,   123,   127,     0,     0,   128,   124,
       0,   311,     0,   122,   123,     0,     0,     0,     0,   124,
       0,   312,     0,     0,     0,     0,   125,     0,   120,   121,
       0,     0,     0,     0,   127,     0,   125,   128,   120,   121,
       0,     0,   122,   123,   127,     0,     0,   128,   124,     0,
     313,     0,   122,   123,     0,     0,     0,     0,   124,     0,
     314,     0,     0,     0,     0,   125,     0,   120,   121,     0,
       0,     0,     0,   127,     0,   125,   128,   120,   121,     0,
       0,   122,   123,   127,     0,     0,   128,   124,     0,   337,
       0,   122,   123,     0,     0,     0,     0,   124,     0,   338,
       0,     0,     0,     0,   125,     0,   120,   121,     0,     0,
       0,     0,   127,     0,   125,   128,   120,   121,     0,     0,
     122,   123,   127,     0,     0,   128,   124,     0,   339,     0,
     122,   123,     0,     0,     0,     0,   124,     0,   340,     0,
       0,     0,     0,   125,     0,   120,   121,     0,     0,     0,
       0,   127,     0,   125,   128,   120,   121,     0,     0,   122,
     123,   127,     0,     0,   128,   124,     0,   341,     0,   122,
     123,   120,   121,     0,     0,   124,     0,   342,     0,     0,
       0,     0,   125,     0,     0,   122,   123,   120,   121,     0,
     127,   124,   125,   128,     0,     0,     0,   120,   121,     0,
     127,   122,   123,   128,     0,   204,     0,   124,   125,     0,
       0,   122,   123,   120,   121,   205,   127,   124,     0,   128,
       0,     0,     0,     0,   125,     0,     0,   122,   123,   120,
     121,   206,   127,   124,   125,   128,     0,     0,     0,   120,
     121,     0,   127,   122,   123,   128,     0,   217,     0,   124,
     125,     0,     0,   122,   123,   120,   121,   218,   127,   124,
       0,   128,     0,     0,     0,     0,   125,     0,     0,   122,
     123,   120,   121,   219,   127,   124,   125,   128,     0,     0,
       0,   120,   121,     0,   127,   122,   123,   128,     0,   220,
       0,   124,   125,     0,     0,   122,   123,   120,   121,   221,
     127,   124,     0,   128,     0,     0,     0,     0,   125,     0,
       0,   122,   123,   120,   121,   222,   127,   124,   125,   128,
       0,     0,     0,   120,   121,     0,   127,   122,   123,   128,
       0,   223,     0,   124,   125,     0,     0,   122,   123,   120,
     121,   224,   127,   124,     0,   128,     0,     0,     0,     0,
     125,     0,     0,   122,   123,   120,   121,   225,   127,   124,
     125,   128,     0,     0,     0,   120,   121,     0,   127,   122,
     123,   128,     0,   226,     0,   124,   125,     0,     0,   122,
     123,   120,   121,   227,   127,   124,     0,   128,     0,     0,
       0,     0,   125,     0,     0,   122,   123,   120,   121,   228,
     127,   124,   125,   128,     0,     0,     0,   120,   121,     0,
     127,   122,   123,   128,     0,   230,     0,   124,   125,     0,
       0,   122,   123,   120,   121,   231,   127,   124,     0,   128,
       0,     0,     0,     0,   125,     0,     0,   122,   123,   120,
     121,   297,   127,   124,   125,   128,     0,     0,     0,   120,
     121,     0,   127,   122,   123,   128,     0,   298,     0,   124,
     125,     0,     0,   122,   123,     0,     0,   299,   127,   124,
       0,   128,     0,     0,   252,   253,   125,     0,   119,     0,
       0,   120,   121,   300,   127,     0,   125,   128,     0,     0,
       0,     0,     0,     0,   127,   122,   123,   128,     0,   301,
       0,   124,     0,     0,     0,     0,   252,   253,     0,   302,
       0,     0,     0,   120,   121,     0,   324,     0,   125,   119,
     120,   121,   120,   121,     0,   126,   127,   122,   123,   128,
       0,     0,     0,   124,   122,   123,   122,   123,     0,     0,
     124,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,   125,   127,   125,
       0,   128,   120,   121,     0,   127,   126,   127,   128,     0,
     128,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,   127,     0,     0,
     128
};

static const yytype_int16 yycheck[] =
{
       2,     7,    10,    81,    82,    10,    53,    54,   136,    81,
       3,     4,    14,    15,     7,     8,     9,    10,    11,     3,
       4,    54,    65,     7,     8,     9,    10,    11,     3,     4,
      20,    78,     7,     8,     9,    10,    11,    80,    66,    21,
      22,    69,     3,     4,    46,    78,     7,     8,     9,    10,
      11,    61,    53,    35,    36,    63,     3,     4,    63,    65,
       7,     8,     9,    10,    11,    55,    56,    14,    15,     3,
      61,    81,    58,     0,     8,     9,    58,    78,     8,     9,
      66,    83,    18,    69,    66,    21,    22,    69,     6,    82,
      81,    53,    10,    73,    75,    76,    77,    99,    82,    35,
      36,    79,    69,    80,    79,    41,    21,    22,    78,   111,
     112,   113,   114,   115,   116,   117,    27,   245,    79,    69,
      35,    69,    58,    69,    69,    69,   132,    21,    22,    65,
      66,    78,    69,    69,    69,    46,    69,    69,    69,   141,
      69,    35,    36,    58,    69,    69,    82,    41,    69,    69,
      69,    66,     3,     4,    69,    21,    22,     8,     9,    10,
      11,    72,    73,    74,    58,    69,    77,    69,    69,   171,
      69,   173,    66,    69,    85,    69,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    82,   100,
     101,    69,    58,    75,    76,    77,   107,    69,    80,   201,
      66,    69,    69,    69,    21,    22,    21,    22,   119,   120,
     121,   122,   123,   124,    69,   126,   127,   128,    35,    36,
      35,    36,    21,    22,    41,    78,    41,     3,     4,    79,
     141,     7,     8,     9,    10,    11,    35,    36,    79,    74,
      74,    58,    41,    58,    74,    74,   248,   249,    74,    66,
      74,    66,    69,    74,    69,    66,    69,    20,    65,    58,
     171,    81,   173,    81,     9,    81,    83,    66,    83,    81,
      69,     3,     4,    81,    57,     7,     8,     9,    10,    11,
     282,    81,   193,    81,    83,    17,    74,    74,    74,    66,
     201,    65,    74,   204,   205,   206,   207,   208,    82,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    21,    22,
      82,   323,    13,    82,    19,    83,    19,     6,    58,   172,
      21,    22,    35,    36,    84,   174,   336,   335,    41,    -1,
      -1,   252,   253,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,     3,     4,    -1,    58,     7,     8,     9,    10,
      11,    -1,    13,    66,    -1,    -1,    69,    58,    -1,    -1,
      -1,   282,    -1,   284,    -1,    66,     3,     4,    69,    82,
      -1,     8,     9,    10,   295,    -1,   297,   298,   299,   300,
     301,   302,    -1,     3,     4,    -1,    -1,     7,     8,     9,
      10,    11,     5,    13,    -1,    -1,    -1,    -1,   319,    12,
      -1,    -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   343,    -1,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    12,    69,    70,    71,    72,
      -1,    74,    -1,    -1,    -1,    78,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    50,    51,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    12,    69,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    78,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    12,    69,    70,
      71,    -1,    -1,    74,    -1,    -1,    -1,    78,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    12,    69,    70,    71,    -1,    -1,    74,
      -1,    -1,    -1,    78,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    38,
      39,    40,    -1,    -1,    21,    22,    21,    22,    -1,    -1,
      -1,    50,    51,    21,    22,    -1,    -1,    -1,    35,    36,
      35,    36,    -1,    62,    41,    -1,    41,    35,    36,    -1,
      69,    70,    71,    41,    -1,    74,    -1,    -1,    -1,    78,
      -1,    58,    -1,    58,    -1,    -1,    -1,    -1,    -1,    66,
      58,    66,    69,    -1,    69,    21,    22,    -1,    66,    -1,
      -1,    69,    21,    22,    -1,    82,    -1,    82,    -1,    35,
      36,    -1,    -1,    -1,    82,    41,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    21,    22,    -1,    -1,    -1,    58,
      66,    -1,    -1,    69,    21,    22,    -1,    66,    35,    36,
      69,    -1,    -1,    -1,    41,    -1,    82,    -1,    35,    36,
      -1,    -1,    -1,    82,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    21,    22,    -1,    -1,    -1,    -1,    66,
      -1,    58,    69,    21,    22,    -1,    -1,    35,    36,    66,
      -1,    -1,    69,    41,    -1,    82,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    82,    -1,    -1,    -1,    -1,
      58,    -1,    21,    22,    -1,    -1,    -1,    -1,    66,    -1,
      58,    69,    21,    22,    -1,    -1,    35,    36,    66,    -1,
      -1,    69,    41,    -1,    82,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    82,    -1,    -1,    -1,    -1,    58,
      -1,    21,    22,    -1,    -1,    -1,    -1,    66,    -1,    58,
      69,    21,    22,    -1,    -1,    35,    36,    66,    -1,    -1,
      69,    41,    -1,    82,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    82,    -1,    -1,    -1,    -1,    58,    -1,
      21,    22,    -1,    -1,    -1,    -1,    66,    -1,    58,    69,
      21,    22,    -1,    -1,    35,    36,    66,    -1,    -1,    69,
      41,    -1,    82,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    82,    -1,    -1,    -1,    -1,    58,    -1,    21,
      22,    -1,    -1,    -1,    -1,    66,    -1,    58,    69,    21,
      22,    -1,    -1,    35,    36,    66,    -1,    -1,    69,    41,
      -1,    82,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    82,    -1,    -1,    -1,    -1,    58,    -1,    21,    22,
      -1,    -1,    -1,    -1,    66,    -1,    58,    69,    21,    22,
      -1,    -1,    35,    36,    66,    -1,    -1,    69,    41,    -1,
      82,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      82,    -1,    -1,    -1,    -1,    58,    -1,    21,    22,    -1,
      -1,    -1,    -1,    66,    -1,    58,    69,    21,    22,    -1,
      -1,    35,    36,    66,    -1,    -1,    69,    41,    -1,    82,
      -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    82,
      -1,    -1,    -1,    -1,    58,    -1,    21,    22,    -1,    -1,
      -1,    -1,    66,    -1,    58,    69,    21,    22,    -1,    -1,
      35,    36,    66,    -1,    -1,    69,    41,    -1,    82,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    82,    -1,
      -1,    -1,    -1,    58,    -1,    21,    22,    -1,    -1,    -1,
      -1,    66,    -1,    58,    69,    21,    22,    -1,    -1,    35,
      36,    66,    -1,    -1,    69,    41,    -1,    82,    -1,    35,
      36,    21,    22,    -1,    -1,    41,    -1,    82,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    35,    36,    21,    22,    -1,
      66,    41,    58,    69,    -1,    -1,    -1,    21,    22,    -1,
      66,    35,    36,    69,    -1,    81,    -1,    41,    58,    -1,
      -1,    35,    36,    21,    22,    81,    66,    41,    -1,    69,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    35,    36,    21,
      22,    81,    66,    41,    58,    69,    -1,    -1,    -1,    21,
      22,    -1,    66,    35,    36,    69,    -1,    81,    -1,    41,
      58,    -1,    -1,    35,    36,    21,    22,    81,    66,    41,
      -1,    69,    -1,    -1,    -1,    -1,    58,    -1,    -1,    35,
      36,    21,    22,    81,    66,    41,    58,    69,    -1,    -1,
      -1,    21,    22,    -1,    66,    35,    36,    69,    -1,    81,
      -1,    41,    58,    -1,    -1,    35,    36,    21,    22,    81,
      66,    41,    -1,    69,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    35,    36,    21,    22,    81,    66,    41,    58,    69,
      -1,    -1,    -1,    21,    22,    -1,    66,    35,    36,    69,
      -1,    81,    -1,    41,    58,    -1,    -1,    35,    36,    21,
      22,    81,    66,    41,    -1,    69,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    35,    36,    21,    22,    81,    66,    41,
      58,    69,    -1,    -1,    -1,    21,    22,    -1,    66,    35,
      36,    69,    -1,    81,    -1,    41,    58,    -1,    -1,    35,
      36,    21,    22,    81,    66,    41,    -1,    69,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    35,    36,    21,    22,    81,
      66,    41,    58,    69,    -1,    -1,    -1,    21,    22,    -1,
      66,    35,    36,    69,    -1,    81,    -1,    41,    58,    -1,
      -1,    35,    36,    21,    22,    81,    66,    41,    -1,    69,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    35,    36,    21,
      22,    81,    66,    41,    58,    69,    -1,    -1,    -1,    21,
      22,    -1,    66,    35,    36,    69,    -1,    81,    -1,    41,
      58,    -1,    -1,    35,    36,    -1,    -1,    81,    66,    41,
      -1,    69,    -1,    -1,    14,    15,    58,    -1,    18,    -1,
      -1,    21,    22,    81,    66,    -1,    58,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    35,    36,    69,    -1,    81,
      -1,    41,    -1,    -1,    -1,    -1,    14,    15,    -1,    81,
      -1,    -1,    -1,    21,    22,    -1,    17,    -1,    58,    18,
      21,    22,    21,    22,    -1,    65,    66,    35,    36,    69,
      -1,    -1,    -1,    41,    35,    36,    35,    36,    -1,    -1,
      41,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    58,    66,    58,
      -1,    69,    21,    22,    -1,    66,    65,    66,    69,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,    78,    85,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     5,    12,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    37,    38,
      39,    40,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    59,    60,    62,    69,    70,    71,    72,
      74,    78,   100,   102,   103,   106,   107,   102,    81,     0,
      73,    86,    91,    92,    90,    89,    91,    93,    79,    80,
     102,   102,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    12,    62,    69,   106,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    78,   109,   110,   102,   106,    69,    75,    76,
      77,     3,     4,     7,     8,     9,    10,    11,    79,    18,
      21,    22,    35,    36,    41,    58,    65,    66,    69,    79,
      94,    79,    89,    79,    20,    55,    56,    96,    97,    98,
      99,    13,   106,   106,   106,    74,    74,   106,    74,    74,
      74,    74,    74,   102,   109,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   102,   106,
     106,    65,    80,    61,    81,    82,    82,   106,   102,   102,
     102,   102,   102,   102,   102,   106,    74,   106,    74,   106,
     106,   106,   106,    66,   108,   106,    74,   106,   106,    69,
      97,    65,   102,   106,    81,    81,    81,    81,    81,    82,
      81,    81,    81,    81,    81,    13,    61,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      81,    81,   102,   106,    96,   102,   106,   110,    82,   106,
      58,    80,    83,    82,    74,    57,   102,   106,    14,    15,
      78,   104,    14,    15,   101,   106,   106,   106,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
      74,    74,    65,    83,    66,    74,    82,    97,   102,   102,
     106,   106,    82,    82,    82,    81,    82,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,   102,   106,    19,
     106,    83,    17,    13,    17,    13,   106,   106,   106,   106,
     106,   106,   106,   106,    83,   102,   106,    82,    82,    82,
      82,    82,    82,    19,   104,   101,   106
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 185 "cvc.y"
    {
  parserInterface->letMgr._parser_symbol_table.clear();
;}
    break;

  case 3:
#line 189 "cvc.y"
    {
  parserInterface->letMgr._parser_symbol_table.clear(); 
;}
    break;

  case 4:
#line 195 "cvc.y"
    {
  parserInterface->getUserFlags().print_counterexample_flag = true;
  (GlobalSTP->Ctr_Example)->PrintCounterExample(true);
;}
    break;

  case 6:
#line 217 "cvc.y"
    { 
  ((ASTVec*)AssertsQuery)->push_back(parserInterface->CreateNode(TRUE));
  ((ASTVec*)AssertsQuery)->push_back(*(yyvsp[(1) - (1)].node));                       
  delete (yyvsp[(1) - (1)].node);
;}
    break;

  case 7:
#line 223 "cvc.y"
    { 
  ((ASTVec*)AssertsQuery)->push_back(parserInterface->CreateNode(TRUE));
  ((ASTVec*)AssertsQuery)->push_back(*(yyvsp[(2) - (2)].node));
  delete (yyvsp[(2) - (2)].node);
;}
    break;

  case 8:
#line 229 "cvc.y"
    {
  ASTVec aaa = parserInterface->GetAsserts();
  if(aaa.size() == 0)
    {
      yyerror("Fatal Error: parsing:  GetAsserts() call: no assertions: ");
    }

  ASTNode asserts = 
    aaa.size() == 1 ? 
    aaa[0] :
    parserInterface->CreateNode(AND, aaa);
  ((ASTVec*)AssertsQuery)->push_back(asserts);
  ((ASTVec*)AssertsQuery)->push_back(*(yyvsp[(2) - (2)].node));
  delete (yyvsp[(2) - (2)].node);
;}
    break;

  case 9:
#line 247 "cvc.y"
    {
  delete (yyvsp[(2) - (2)].vec);
;}
    break;

  case 10:
#line 251 "cvc.y"
    {
  delete (yyvsp[(1) - (1)].vec);
;}
    break;

  case 11:
#line 255 "cvc.y"
    {
  delete (yyvsp[(3) - (3)].vec);
;}
    break;

  case 12:
#line 275 "cvc.y"
    {
  (yyval.vec) = new ASTVec;
  (yyval.vec)->push_back(*(yyvsp[(1) - (1)].node));
  parserInterface->AddAssert(*(yyvsp[(1) - (1)].node));
  delete (yyvsp[(1) - (1)].node);
;}
    break;

  case 13:
#line 282 "cvc.y"
    {
  (yyvsp[(1) - (2)].vec)->push_back(*(yyvsp[(2) - (2)].node));
  parserInterface->AddAssert(*(yyvsp[(2) - (2)].node));
  (yyval.vec) = (yyvsp[(1) - (2)].vec);
  delete (yyvsp[(2) - (2)].node);
;}
    break;

  case 14:
#line 291 "cvc.y"
    { 
  (yyval.node) = (yyvsp[(2) - (3)].node);
 ;}
    break;

  case 15:
#line 296 "cvc.y"
    { parserInterface->AddQuery(*(yyvsp[(2) - (3)].node)); (yyval.node) = (yyvsp[(2) - (3)].node);;}
    break;

  case 16:
#line 302 "cvc.y"
    {
;}
    break;

  case 17:
#line 305 "cvc.y"
    {
;}
    break;

  case 18:
#line 310 "cvc.y"
    {
  for(vector<char*>::iterator i=(yyvsp[(1) - (3)].stringVec)->begin(),iend=(yyvsp[(1) - (3)].stringVec)->end();i!=iend;i++) {
    ASTNode s = BEEV::parserInterface->LookupOrCreateSymbol(*i);
    s.SetIndexWidth((yyvsp[(3) - (3)].indexvaluewidth).indexwidth);
    s.SetValueWidth((yyvsp[(3) - (3)].indexvaluewidth).valuewidth);
    parserInterface->letMgr._parser_symbol_table.insert(s);
    ParserBM->ListOfDeclaredVars.push_back(s);
  }
  delete (yyvsp[(1) - (3)].stringVec);
;}
    break;

  case 19:
#line 321 "cvc.y"
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[(5) - (5)].node));
  if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
                         
  for(vector<char*>::iterator i=(yyvsp[(1) - (5)].stringVec)->begin(),iend=(yyvsp[(1) - (5)].stringVec)->end();i!=iend;i++) {                         
    parserInterface->letMgr.LetExprMgr(*i,*(yyvsp[(5) - (5)].node));
  }
    delete (yyvsp[(5) - (5)].node);
    delete (yyvsp[(1) - (5)].stringVec);
;}
    break;

  case 20:
#line 336 "cvc.y"
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[(5) - (5)].node));
  if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
                         
  for(vector<char*>::iterator i=(yyvsp[(1) - (5)].stringVec)->begin(),iend=(yyvsp[(1) - (5)].stringVec)->end();i!=iend;i++) {                         
    parserInterface->letMgr.LetExprMgr(*i,*(yyvsp[(5) - (5)].node));
  }
  delete (yyvsp[(5) - (5)].node);
  delete (yyvsp[(1) - (5)].stringVec);
;}
    break;

  case 21:
#line 353 "cvc.y"
    {
  (yyval.stringVec) = new vector<char*>();                      
  (yyval.stringVec)->push_back((yyvsp[(1) - (1)].str));
 // delete $1;
;}
    break;

  case 22:
#line 359 "cvc.y"
    {
  (yyvsp[(3) - (3)].stringVec)->push_back((yyvsp[(1) - (3)].str));
  (yyval.stringVec) = (yyvsp[(3) - (3)].stringVec);
 // delete $1;
;}
    break;

  case 23:
#line 367 "cvc.y"
    {
  (yyval.stringVec) = new vector<char*>((yyvsp[(1) - (1)].stringVec)->rbegin(),(yyvsp[(1) - (1)].stringVec)->rend());
  delete (yyvsp[(1) - (1)].stringVec);
;}
    break;

  case 24:
#line 382 "cvc.y"
    { (yyval.indexvaluewidth) = (yyvsp[(1) - (1)].indexvaluewidth); ;}
    break;

  case 25:
#line 383 "cvc.y"
    { (yyval.indexvaluewidth) = (yyvsp[(1) - (1)].indexvaluewidth); ;}
    break;

  case 26:
#line 384 "cvc.y"
    { (yyval.indexvaluewidth) = (yyvsp[(1) - (1)].indexvaluewidth); ;}
    break;

  case 27:
#line 388 "cvc.y"
    {
  /*((indexwidth is 0) && (valuewidth>0)) iff type is BV*/
  (yyval.indexvaluewidth).indexwidth = 0;
  unsigned int length = (yyvsp[(3) - (4)].uintval);
  if(length > 0) {
    (yyval.indexvaluewidth).valuewidth = length;
  }
  else
    FatalError("Fatal Error: parsing: BITVECTORS must be of positive length: \n");
;}
    break;

  case 28:
#line 400 "cvc.y"
    {
  (yyval.indexvaluewidth).indexwidth = 0;
  (yyval.indexvaluewidth).valuewidth = 0;
;}
    break;

  case 29:
#line 406 "cvc.y"
    {
  (yyval.indexvaluewidth).indexwidth = (yyvsp[(2) - (4)].indexvaluewidth).valuewidth;
  (yyval.indexvaluewidth).valuewidth = (yyvsp[(4) - (4)].indexvaluewidth).valuewidth;
;}
    break;

  case 30:
#line 414 "cvc.y"
    {
  unsigned int width = (yyvsp[(4) - (5)].node)->GetValueWidth();
  if (width != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");                   
  if((yyvsp[(4) - (5)].node)->GetIndexWidth() != (yyvsp[(5) - (5)].node)->GetIndexWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");

  BVTypeCheck(*(yyvsp[(2) - (5)].node));
  BVTypeCheck(*(yyvsp[(4) - (5)].node));
  BVTypeCheck(*(yyvsp[(5) - (5)].node));
  (yyval.node) = new ASTNode(parserInterface->nf->CreateArrayTerm(ITE,(yyvsp[(5) - (5)].node)->GetIndexWidth(), width, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
  delete (yyvsp[(2) - (5)].node);
  delete (yyvsp[(4) - (5)].node);
  delete (yyvsp[(5) - (5)].node);
;}
    break;

  case 31:
#line 431 "cvc.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 32:
#line 433 "cvc.y"
    {
  unsigned int width = (yyvsp[(2) - (5)].node)->GetValueWidth();
  if (width != (yyvsp[(4) - (5)].node)->GetValueWidth() || width != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");
  if ((yyvsp[(2) - (5)].node)->GetIndexWidth() != (yyvsp[(4) - (5)].node)->GetValueWidth() || (yyvsp[(2) - (5)].node)->GetIndexWidth() != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Width mismatch in IF-THEN-ELSE");

  BVTypeCheck(*(yyvsp[(2) - (5)].node));
  BVTypeCheck(*(yyvsp[(4) - (5)].node));
  BVTypeCheck(*(yyvsp[(5) - (5)].node));                     
  (yyval.node) = new ASTNode(parserInterface->nf->CreateArrayTerm(ITE, (yyvsp[(5) - (5)].node)->GetIndexWidth(), width, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
  delete (yyvsp[(2) - (5)].node);
  delete (yyvsp[(4) - (5)].node);
  delete (yyvsp[(5) - (5)].node);
;}
    break;

  case 33:
#line 452 "cvc.y"
    {
  (yyval.node) = (yyvsp[(2) - (3)].node); 
;}
    break;

  case 34:
#line 456 "cvc.y"
    {  
  (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[(1) - (1)].node))); delete (yyvsp[(1) - (1)].node);
;}
    break;

  case 35:
#line 460 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(PARAMBOOL,*(yyvsp[(1) - (4)].node),*(yyvsp[(3) - (4)].node)));
  delete (yyvsp[(1) - (4)].node);
  delete (yyvsp[(3) - (4)].node);
;}
    break;

  case 36:
#line 466 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  if(width <= (unsigned)(yyvsp[(5) - (6)].uintval))
    yyerror("Fatal Error: BOOLEXTRACT: trying to boolextract a bit which beyond range");
                         
  ASTNode bit = parserInterface->CreateBVConst(32, (yyvsp[(5) - (6)].uintval));
  ASTNode * out = new ASTNode(parserInterface->nf->CreateNode(BOOLEXTRACT,*(yyvsp[(3) - (6)].node),bit));

  (yyval.node) = out;
  delete (yyvsp[(3) - (6)].node);
;}
    break;

  case 37:
#line 478 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(EQ, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  (yyval.node) = n;
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 38:
#line 485 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(NOT, parserInterface->nf->CreateNode(EQ, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node))));
  (yyval.node) = n;
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 39:
#line 492 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NOT, *(yyvsp[(2) - (2)].node)));
  delete (yyvsp[(2) - (2)].node);
;}
    break;

  case 40:
#line 497 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(OR, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 41:
#line 503 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NOR, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 42:
#line 509 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(AND, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 43:
#line 515 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(NAND, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 44:
#line 521 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IMPLIES, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 45:
#line 527 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(IFF, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 46:
#line 533 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(XOR, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 47:
#line 539 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 48:
#line 546 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 49:
#line 553 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVLE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 50:
#line 560 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVGE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 51:
#line 567 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 52:
#line 574 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGT, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 53:
#line 581 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSLE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 54:
#line 588 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateNode(BVSGE, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 56:
#line 596 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->CreateNode(TRUE)); 
  assert((yyval.node)->GetIndexWidth() == 0);
  assert((yyval.node)->GetValueWidth() == 0);
;}
    break;

  case 57:
#line 602 "cvc.y"
    { 
  (yyval.node) = new ASTNode(parserInterface->CreateNode(FALSE)); 
  assert((yyval.node)->GetIndexWidth() == 0);
  assert((yyval.node)->GetValueWidth() == 0);
;}
    break;

  case 58:
#line 609 "cvc.y"
    {
  (yyval.node) = (yyvsp[(4) - (4)].node);
  //Cleanup the LetIDToExprMap
  parserInterface->letMgr.CleanupLetIDMap();
;}
    break;

  case 59:
#line 618 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(ITE, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
  delete (yyvsp[(2) - (5)].node);
  delete (yyvsp[(4) - (5)].node);
  delete (yyvsp[(5) - (5)].node);
;}
    break;

  case 60:
#line 626 "cvc.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 61:
#line 628 "cvc.y"
    {
  (yyval.node) = new ASTNode(parserInterface->nf->CreateNode(ITE, *(yyvsp[(2) - (5)].node), *(yyvsp[(4) - (5)].node), *(yyvsp[(5) - (5)].node)));
  delete (yyvsp[(2) - (5)].node);
  delete (yyvsp[(4) - (5)].node);
  delete (yyvsp[(5) - (5)].node);
;}
    break;

  case 62:
#line 634 "cvc.y"
    {
   cerr << "Unresolved symbol:" << (yyvsp[(1) - (1)].str) << endl;
   yyerror("bad symbol"); 
;}
    break;

  case 63:
#line 642 "cvc.y"
    {
  (yyval.vec) = new ASTVec;
  BVTypeCheck(*(yyvsp[(1) - (1)].node));
  (yyval.vec)->push_back(*(yyvsp[(1) - (1)].node));
  delete (yyvsp[(1) - (1)].node);
;}
    break;

  case 64:
#line 649 "cvc.y"
    {
  (yyvsp[(1) - (3)].vec)->push_back(*(yyvsp[(3) - (3)].node));
  BVTypeCheck(*(yyvsp[(3) - (3)].node));
  (yyval.vec) = (yyvsp[(1) - (3)].vec); 
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 65:
#line 658 "cvc.y"
    { (yyval.node) = new ASTNode(parserInterface->letMgr.ResolveID(*(yyvsp[(1) - (1)].node))); delete (yyvsp[(1) - (1)].node);;}
    break;

  case 66:
#line 659 "cvc.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 67:
#line 660 "cvc.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 68:
#line 662 "cvc.y"
    {
  BVTypeCheck(*(yyvsp[(3) - (4)].node));
  ASTNode one = parserInterface->CreateBVConst(1,1);
  ASTNode zero = parserInterface->CreateBVConst(1,0);

  //return ITE(*$3, length(1), 0bin1, 0bin0)
  (yyval.node) = new ASTNode(parserInterface->nf->CreateTerm(ITE,1,*(yyvsp[(3) - (4)].node),one,zero));
  delete (yyvsp[(3) - (4)].node);
;}
    break;

  case 69:
#line 672 "cvc.y"
    { 
  std::string vals((yyvsp[(2) - (2)].str));
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst(vals, 2, (yyvsp[(1) - (2)].uintval)));
  free((yyvsp[(2) - (2)].str));
;}
    break;

  case 70:
#line 678 "cvc.y"
    { 
  std::string vals((yyvsp[(2) - (2)].str));
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst(vals, 10, (yyvsp[(1) - (2)].uintval)));
  free((yyvsp[(2) - (2)].str));
;}
    break;

  case 71:
#line 684 "cvc.y"
    { 
  std::string vals((yyvsp[(2) - (2)].str));
  (yyval.node) = new ASTNode(parserInterface->CreateBVConst(vals, 16, (yyvsp[(1) - (2)].uintval)));
  free((yyvsp[(2) - (2)].str));
;}
    break;

  case 72:
#line 690 "cvc.y"
    {                        
  // valuewidth is same as array, indexwidth is 0.
  unsigned int width = (yyvsp[(1) - (4)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(READ, width, *(yyvsp[(1) - (4)].node), *(yyvsp[(3) - (4)].node)));
  (yyval.node) = n;

  delete (yyvsp[(1) - (4)].node);
  delete (yyvsp[(3) - (4)].node);
;}
    break;

  case 73:
#line 700 "cvc.y"
    {
  // valuewidth is same as array, indexwidth is 0.
  unsigned int width = (yyvsp[(1) - (4)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(READ, width, *(yyvsp[(1) - (4)].node), *(yyvsp[(3) - (4)].node)));
  (yyval.node) = n;

  delete (yyvsp[(1) - (4)].node);
  delete (yyvsp[(3) - (4)].node);
;}
    break;

  case 74:
#line 710 "cvc.y"
    {
  int width = (yyvsp[(3) - (6)].uintval) - (yyvsp[(5) - (6)].uintval) + 1;
  if (width < 0)
    yyerror("Negative width in extract");
                         
  if((unsigned)(yyvsp[(3) - (6)].uintval) >= (yyvsp[(1) - (6)].node)->GetValueWidth())
    yyerror("Parsing: Wrong width in BVEXTRACT\n");                      

  ASTNode hi  =  parserInterface->CreateBVConst(32, (yyvsp[(3) - (6)].uintval));
  ASTNode low =  parserInterface->CreateBVConst(32, (yyvsp[(5) - (6)].uintval));
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVEXTRACT, width, *(yyvsp[(1) - (6)].node),hi,low));
  (yyval.node) = n;
  delete (yyvsp[(1) - (6)].node);
;}
    break;

  case 75:
#line 725 "cvc.y"
    {
  unsigned int width = (yyvsp[(2) - (2)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNEG, width, *(yyvsp[(2) - (2)].node)));
  (yyval.node) = n;
  delete (yyvsp[(2) - (2)].node);
;}
    break;

  case 76:
#line 732 "cvc.y"
    {
  unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();
  if (width != (yyvsp[(3) - (3)].node)->GetValueWidth()) {
    yyerror("Width mismatch in AND");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVAND, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  (yyval.node) = n;
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 77:
#line 743 "cvc.y"
    {
  unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();
  if (width != (yyvsp[(3) - (3)].node)->GetValueWidth()) {
    yyerror("Width mismatch in OR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVOR, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node))); 
  (yyval.node) = n;
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 78:
#line 754 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
    yyerror("Width mismatch in XOR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVXOR, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 79:
#line 765 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
    yyerror("Width mismatch in NAND");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNAND, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;

  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 80:
#line 777 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
    yyerror("Width mismatch in NOR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVNOR, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;

  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 81:
#line 789 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  if (width != (yyvsp[(5) - (6)].node)->GetValueWidth()) {
    yyerror("Width mismatch in NOR");
  }
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVXNOR, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;

  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 82:
#line 801 "cvc.y"
    {
  //width of the expr which is being sign
  //extended. $5 is the resulting length of the
  //signextended expr
  BVTypeCheck(*(yyvsp[(3) - (6)].node));
  if((yyvsp[(3) - (6)].node)->GetValueWidth() == (yyvsp[(5) - (6)].uintval)) {
    (yyval.node) = (yyvsp[(3) - (6)].node);
  }
  else {
    ASTNode width = parserInterface->CreateBVConst(32,(yyvsp[(5) - (6)].uintval));
    ASTNode *n =  
      new ASTNode(parserInterface->nf->CreateTerm(BVSX, (yyvsp[(5) - (6)].uintval),*(yyvsp[(3) - (6)].node),width));
    (yyval.node) = n;
    delete (yyvsp[(3) - (6)].node);
  }
;}
    break;

  case 83:
#line 818 "cvc.y"
    {
  unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth() + (yyvsp[(3) - (3)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  (yyval.node) = n;
                         
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 84:
#line 827 "cvc.y"
    {
  if (0 == (yyvsp[(3) - (3)].uintval))
  	{
  	(yyval.node) = (yyvsp[(1) - (3)].node);
  	}
  else
  {
  ASTNode zero_bits = parserInterface->CreateZeroConst((yyvsp[(3) - (3)].uintval));
  ASTNode * n = 
    new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT,
                                     (yyvsp[(1) - (3)].node)->GetValueWidth() + (yyvsp[(3) - (3)].uintval), *(yyvsp[(1) - (3)].node), zero_bits));
  (yyval.node) = n;
  delete (yyvsp[(1) - (3)].node);
  }
;}
    break;

  case 85:
#line 843 "cvc.y"
    {
  // VARIABLE LEFT SHIFT
  //
  // $1 (THEEXPR) is being shifted
  //
  // $3 is the variable shift amount
  unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();
  ASTNode * ret = new ASTNode(parserInterface->nf->CreateTerm(BVLEFTSHIFT, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  BVTypeCheck(*ret);
  //cout << *ret;

  (yyval.node) = ret;
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 86:
#line 923 "cvc.y"
    {
  ASTNode len = parserInterface->CreateZeroConst((yyvsp[(3) - (3)].uintval));
  unsigned int w = (yyvsp[(1) - (3)].node)->GetValueWidth();

  //the amount by which you are rightshifting
  //is less-than/equal-to the length of input
  //bitvector
  if((unsigned)(yyvsp[(3) - (3)].uintval) < w) {
    ASTNode hi = parserInterface->CreateBVConst(32,w-1);
    ASTNode low = parserInterface->CreateBVConst(32,(yyvsp[(3) - (3)].uintval));
    ASTNode extract = parserInterface->nf->CreateTerm(BVEXTRACT,w-(yyvsp[(3) - (3)].uintval),*(yyvsp[(1) - (3)].node),hi,low);
    ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVCONCAT, w,len, extract));
    (yyval.node) = n;
  }
  else
    (yyval.node) = new ASTNode(parserInterface->CreateZeroConst(w));

  delete (yyvsp[(1) - (3)].node);
;}
    break;

  case 87:
#line 943 "cvc.y"
    {
  // VARIABLE RIGHT SHIFT
  //
  // $1 (THEEXPR) is being shifted
  //
  // $3 is the variable shift amount
  unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();
  ASTNode * ret = new ASTNode(parserInterface->nf->CreateTerm(BVRIGHTSHIFT, width, *(yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].node)));
  BVTypeCheck(*ret);
  //cout << *ret;

  (yyval.node) = ret;
  delete (yyvsp[(1) - (3)].node);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 88:
#line 959 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVLEFTSHIFT, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;

  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 89:
#line 968 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVRIGHTSHIFT, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;

  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 90:
#line 977 "cvc.y"
    {
  unsigned int width = (yyvsp[(3) - (6)].node)->GetValueWidth();
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSRSHIFT, width, *(yyvsp[(3) - (6)].node), *(yyvsp[(5) - (6)].node)));
  (yyval.node) = n;

  delete (yyvsp[(3) - (6)].node);
  delete (yyvsp[(5) - (6)].node);
;}
    break;

  case 91:
#line 986 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVPLUS, (yyvsp[(3) - (6)].uintval), *(yyvsp[(5) - (6)].vec)));
  (yyval.node) = n;

  delete (yyvsp[(5) - (6)].vec);
;}
    break;

  case 92:
#line 993 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVSUB, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
  (yyval.node) = n;

  delete (yyvsp[(5) - (8)].node);
  delete (yyvsp[(7) - (8)].node);
;}
    break;

  case 93:
#line 1001 "cvc.y"
    {
  unsigned width = (yyvsp[(3) - (4)].node)->GetValueWidth();
  ASTNode * n =  new ASTNode(parserInterface->nf->CreateTerm(BVUMINUS,width,*(yyvsp[(3) - (4)].node)));
  (yyval.node) = n;
  delete (yyvsp[(3) - (4)].node);
;}
    break;

  case 94:
#line 1008 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMULT, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
  (yyval.node) = n;

  delete (yyvsp[(5) - (8)].node);
  delete (yyvsp[(7) - (8)].node);
;}
    break;

  case 95:
#line 1016 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVDIV, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
  (yyval.node) = n;

  delete (yyvsp[(5) - (8)].node);
  delete (yyvsp[(7) - (8)].node);
;}
    break;

  case 96:
#line 1024 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(BVMOD, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
  (yyval.node) = n;

  delete (yyvsp[(5) - (8)].node);
  delete (yyvsp[(7) - (8)].node);
;}
    break;

  case 97:
#line 1032 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVDIV, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
  (yyval.node) = n;

  delete (yyvsp[(5) - (8)].node);
  delete (yyvsp[(7) - (8)].node);
;}
    break;

  case 98:
#line 1040 "cvc.y"
    {
  ASTNode * n = new ASTNode(parserInterface->nf->CreateTerm(SBVREM, (yyvsp[(3) - (8)].uintval), *(yyvsp[(5) - (8)].node), *(yyvsp[(7) - (8)].node)));
  (yyval.node) = n;
  delete (yyvsp[(5) - (8)].node);
  delete (yyvsp[(7) - (8)].node);
;}
    break;

  case 99:
#line 1046 "cvc.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 101:
#line 1049 "cvc.y"
    {
  (yyval.node) = (yyvsp[(4) - (4)].node);
;}
    break;

  case 102:
#line 1052 "cvc.y"
    {
   cerr << "Unresolved symbol:" << (yyvsp[(1) - (1)].str) << endl;
   yyerror("bad symbol"); 
;}
    break;

  case 103:
#line 1060 "cvc.y"
    {
  ASTNode * result;
  unsigned int width = (yyvsp[(1) - (3)].node)->GetValueWidth();

  ASTNodeMap::iterator it = (yyvsp[(3) - (3)].Index_To_UpdateValue)->begin();
  ASTNodeMap::iterator itend = (yyvsp[(3) - (3)].Index_To_UpdateValue)->end();
  result = new ASTNode(parserInterface->nf->CreateArrayTerm(WRITE,
                                            (yyvsp[(1) - (3)].node)->GetIndexWidth(),
                                            width,
                                            *(yyvsp[(1) - (3)].node),
                                            (*it).first,
                                            (*it).second));
  BVTypeCheck(*result);
  for(it++;it!=itend;it++) {
    result = new ASTNode(parserInterface->nf->CreateArrayTerm(WRITE,
                                              (yyvsp[(1) - (3)].node)->GetIndexWidth(),
                                              width,
                                              *result,
                                              (*it).first,
                                              (*it).second));
    BVTypeCheck(*result);
  }
  BVTypeCheck(*result);
  (yyval.node) = result;
  delete (yyvsp[(3) - (3)].Index_To_UpdateValue);
  delete (yyvsp[(1) - (3)].node);
;}
    break;

  case 104:
#line 1090 "cvc.y"
    {
  (yyval.Index_To_UpdateValue) = new ASTNodeMap();
  (*(yyval.Index_To_UpdateValue))[*(yyvsp[(2) - (5)].node)] = *(yyvsp[(5) - (5)].node);         
  delete (yyvsp[(2) - (5)].node);
  delete (yyvsp[(5) - (5)].node);        
;}
    break;

  case 105:
#line 1097 "cvc.y"
    {                   
  (*(yyvsp[(1) - (7)].Index_To_UpdateValue))[*(yyvsp[(4) - (7)].node)] = *(yyvsp[(7) - (7)].node);
  delete (yyvsp[(4) - (7)].node);
  delete (yyvsp[(7) - (7)].node);
;}
    break;

  case 108:
#line 1110 "cvc.y"
    {
  //Expr must typecheck
  BVTypeCheck(*(yyvsp[(3) - (3)].node));

  //set the valuewidth of the identifier
  
  //populate the hashtable from LET-var -->
  //LET-exprs and then process them:
  //
  //1. ensure that LET variables do not clash
  //1. with declared variables.
  //
  //2. Ensure that LET variables are not
  //2. defined more than once
  parserInterface->letMgr.LetExprMgr((yyvsp[(1) - (3)].str),*(yyvsp[(3) - (3)].node));
  delete (yyvsp[(1) - (3)].str);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 109:
#line 1129 "cvc.y"
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[(5) - (5)].node));
                          
  if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");

  parserInterface->letMgr.LetExprMgr((yyvsp[(1) - (5)].str),*(yyvsp[(5) - (5)].node));
  delete (yyvsp[(1) - (5)].str);
  delete (yyvsp[(5) - (5)].node);
;}
    break;

  case 110:
#line 1143 "cvc.y"
    {
  //Expr must typecheck
  BVTypeCheck(*(yyvsp[(3) - (3)].node));

  //Do LET-expr management
  parserInterface->letMgr.LetExprMgr((yyvsp[(1) - (3)].str),*(yyvsp[(3) - (3)].node));
  delete (yyvsp[(1) - (3)].str);
  delete (yyvsp[(3) - (3)].node);
;}
    break;

  case 111:
#line 1153 "cvc.y"
    {
  //do type checking. if doesn't pass then abort
  BVTypeCheck(*(yyvsp[(5) - (5)].node));

  if((yyvsp[(3) - (5)].indexvaluewidth).indexwidth != (yyvsp[(5) - (5)].node)->GetIndexWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");
  if((yyvsp[(3) - (5)].indexvaluewidth).valuewidth != (yyvsp[(5) - (5)].node)->GetValueWidth())
    yyerror("Fatal Error: parsing: LET Expr: Type check fail: ");

  //Do LET-expr management
  parserInterface->letMgr.LetExprMgr((yyvsp[(1) - (5)].str),*(yyvsp[(5) - (5)].node));
  delete (yyvsp[(1) - (5)].str);
  delete (yyvsp[(5) - (5)].node);
;}
    break;


/* Line 1267 of yacc.c.  */
#line 3195 "parsecvc.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1169 "cvc.y"


