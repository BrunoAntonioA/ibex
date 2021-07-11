/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ibexparse
#define yylex           ibexlex
#define yyerror         ibexerror
#define yydebug         ibexdebug
#define yynerrs         ibexnerrs
#define yylval          ibexlval
#define yychar          ibexchar

/* First part of user prologue.  */
#line 1 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"

//============================================================================
//                                  I B E X                                   
// File        : Yacc/Bison input for Ibex parser
// Author      : Gilles Chabert
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Jun 12, 2012
// Last Update : Apr 11, 2018
//===========================================================================

#include "parser.cpp_"


#line 92 "parser.tab.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_IBEX_PARSER_TAB_HH_INCLUDED
# define YY_IBEX_PARSER_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ibexdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_CHOCO = 258,
    TK_CONSTANT = 259,
    TK_NEW_SYMBOL = 260,
    TK_FUNC_SYMBOL = 261,
    TK_EXPR_TMP_SYMBOL = 262,
    TK_ENTITY = 263,
    TK_ITERATOR = 264,
    TK_UNARY_OP = 265,
    TK_BINARY_OP = 266,
    TK_STRING = 267,
    TK_INTEGER = 268,
    TK_FLOAT = 269,
    TK_PI = 270,
    TK_INFINITY = 271,
    TK_BOOL = 272,
    TK_PARAM = 273,
    TK_CONST = 274,
    TK_VARS = 275,
    TK_FUNCTION = 276,
    TK_DIFF = 277,
    TK_MIN = 278,
    TK_MAX = 279,
    TK_INF = 280,
    TK_MID = 281,
    TK_SUP = 282,
    TK_SIGN = 283,
    TK_ABS = 284,
    TK_SQRT = 285,
    TK_EXPO = 286,
    TK_LOG = 287,
    TK_COS = 288,
    TK_SIN = 289,
    TK_TAN = 290,
    TK_ACOS = 291,
    TK_ASIN = 292,
    TK_ATAN = 293,
    TK_ATAN2 = 294,
    TK_COSH = 295,
    TK_SINH = 296,
    TK_TANH = 297,
    TK_ACOSH = 298,
    TK_ASINH = 299,
    TK_ATANH = 300,
    TK_LEQ = 301,
    TK_GEQ = 302,
    TK_EQU = 303,
    TK_ASSIGN = 304,
    TK_CHI = 305,
    TK_BEGIN = 306,
    TK_END = 307,
    TK_FOR = 308,
    TK_FROM = 309,
    TK_TO = 310,
    TK_RETURN = 311,
    TK_CTRS = 312,
    TK_MINIMIZE = 313,
    TK_IN = 314,
    TK_UNION = 315,
    TK_INTERSEC = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"

  char*     str;
  int       itg;
  double    real;
  
  ibex::Interval* itv;
  
  ibex::Dim*      dim;
  
  ibex::parser::P_NumConstraint*                constraint;
  std::vector<ibex::parser::P_NumConstraint*>*  constraints;

  const ibex::parser::P_ExprNode*               expression;
  std::vector<const ibex::parser::P_ExprNode*>* expressions;


#line 223 "parser.tab.cc"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ibexlval;

int ibexparse (void);

#endif /* !YY_IBEX_PARSER_TAB_HH_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

#define YYUNDEFTOK  2
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    69,
      71,    75,    65,    62,    73,    63,     2,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    76,    72,
      60,     2,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    74,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,    78,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    64,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    88,    91,    91,    96,   101,   105,   108,
     115,   116,   117,   120,   121,   124,   128,   133,   134,   135,
     138,   140,   145,   146,   148,   152,   160,   161,   164,   164,
     179,   179,   181,   182,   185,   189,   190,   193,   195,   203,
     204,   211,   212,   215,   218,   219,   223,   224,   225,   228,
     229,   232,   237,   236,   245,   246,   247,   248,   249,   250,
     251,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   286,   287,
     288,   289,   290,   291,   292,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   318,   319,   323,   324,   328,
     329,   330
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_CHOCO", "TK_CONSTANT",
  "TK_NEW_SYMBOL", "TK_FUNC_SYMBOL", "TK_EXPR_TMP_SYMBOL", "TK_ENTITY",
  "TK_ITERATOR", "TK_UNARY_OP", "TK_BINARY_OP", "TK_STRING", "TK_INTEGER",
  "TK_FLOAT", "TK_PI", "TK_INFINITY", "TK_BOOL", "TK_PARAM", "TK_CONST",
  "TK_VARS", "TK_FUNCTION", "TK_DIFF", "TK_MIN", "TK_MAX", "TK_INF",
  "TK_MID", "TK_SUP", "TK_SIGN", "TK_ABS", "TK_SQRT", "TK_EXPO", "TK_LOG",
  "TK_COS", "TK_SIN", "TK_TAN", "TK_ACOS", "TK_ASIN", "TK_ATAN",
  "TK_ATAN2", "TK_COSH", "TK_SINH", "TK_TANH", "TK_ACOSH", "TK_ASINH",
  "TK_ATANH", "TK_LEQ", "TK_GEQ", "TK_EQU", "TK_ASSIGN", "TK_CHI",
  "TK_BEGIN", "TK_END", "TK_FOR", "TK_FROM", "TK_TO", "TK_RETURN",
  "TK_CTRS", "TK_MINIMIZE", "TK_IN", "'<'", "'>'", "'+'", "'-'",
  "TK_UNION", "'*'", "'/'", "TK_INTERSEC", "'^'", "'\\''", "'['", "'('",
  "';'", "','", "']'", "')'", "':'", "'{'", "'}'", "$accept", "program",
  "$@1", "$@2", "system_or_func", "choco_ctr", "decl_opt_cst",
  "decl_cst_list", "decl_cst", "decl_var_list", "decl_var", "dimension",
  "interval", "decl_opt_fncs", "function", "$@3", "semicolon_opt",
  "fnc_inpt_list", "fnc_input", "fnc_code", "fnc_assign", "decl_opt_goal",
  "decl_opt_ctrs", "ctr_blk_list", "ctr_blk_list_", "ctr_blk",
  "ctr_assigns", "ctr_assign", "ctr_loop", "$@4", "ctr", "expr",
  "expr_row", "expr_col", "expr_index", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      60,    62,    43,    45,   315,    42,    47,   316,    94,    39,
      91,    40,    59,    44,    93,    41,    58,   123,   125
};
# endif

#define YYPACT_NINF (-220)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    17,     1,    55,  -220,    80,   141,   231,     8,    20,
    -220,    90,  -220,  -220,   108,  -220,    57,    46,  -220,  -220,
    -220,    63,    69,  -220,  -220,  -220,  -220,    75,    82,    97,
     109,   136,   139,   154,   162,   181,   206,   207,   218,   224,
     225,   226,   227,   228,   229,   232,   233,   234,   235,   236,
     246,   251,   318,   451,   451,   451,   451,   523,   113,  -220,
    -220,  -220,   252,  -220,   253,  -220,  -220,  -220,    89,   451,
     -37,    80,     8,   133,  -220,   321,   198,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   303,   451,   161,    73,
      73,   783,   277,    41,   -52,   -60,   280,   231,  -220,   305,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,  -220,   377,   377,   753,   451,   451,  -220,   304,    90,
      90,   293,    90,  -220,    28,   217,    48,   291,   795,   807,
      72,   120,   121,   363,   437,   509,   533,   544,   555,   566,
     577,   588,   599,   610,   621,   632,   643,   819,   654,   665,
     676,   687,   698,   709,   831,   451,   116,   451,   451,  -220,
     451,   451,  -220,   451,  -220,   451,  -220,  -220,  -220,  -220,
    -220,    28,    28,    28,    28,    28,    28,    73,    73,   105,
     105,   150,  -220,   101,   295,   124,   300,    28,    28,   451,
    -220,    -3,  -220,   366,   178,  -220,  -220,  -220,   451,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,   451,  -220,  -220,  -220,
    -220,  -220,  -220,   451,   146,   856,   763,    28,    28,    28,
      28,   451,  -220,   377,  -220,   451,    28,   451,   315,     8,
     128,  -220,    90,   720,   731,   843,   451,  -220,  -220,    28,
     298,   773,    -6,   231,  -220,  -220,   366,  -220,    -3,  -220,
    -220,   451,   866,  -220,  -220,  -220,  -220,   322,  -220,     5,
     315,   742,  -220,  -220,   329,   330,   451,   307,  -220,  -220,
     231,   451,   451,    -6,  -220,   252,    28,    28,   328,   337,
    -220,  -220
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    10,     0,     1,    11,     0,     0,    22,     0,
      13,     0,    28,     3,    27,   101,     0,     0,   100,    97,
      99,     0,     0,   107,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
     108,     9,    31,    45,     0,    50,    46,    48,     0,     0,
       0,    12,    22,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      68,     0,     0,     0,     0,     0,     0,    30,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,    14,    20,    27,
       0,     0,     0,    26,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,    89,     0,    95,     0,    96,    98,    44,    49,
      47,    55,    56,    54,    59,    57,    58,    61,    63,    62,
      64,    91,   119,   120,     0,     0,    23,    15,    16,     0,
      18,    39,    19,     0,     0,   102,   103,   113,     0,   112,
      66,    65,   109,   110,   111,    70,    69,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,   118,   116,   115,
     117,     0,    92,     0,    93,     0,    21,     0,    41,    22,
       0,    33,    27,     0,     0,     0,     0,    90,    25,   121,
       0,     0,    31,     0,     7,    34,     0,    36,    39,   114,
      67,     0,     0,    94,    24,    30,    40,     0,    32,     0,
      41,     0,    52,    42,     0,     0,     0,     0,     6,    87,
       0,     0,     0,    31,    35,    31,    38,    37,     0,     0,
      29,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,   323,   254,
    -133,   -67,  -220,  -131,   389,  -220,  -219,  -220,   122,  -220,
    -220,   119,   134,   157,   123,   319,  -220,   316,  -220,  -220,
     -38,   -53,    37,  -220,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    13,    59,     6,     9,    10,    73,
      74,    70,    60,    76,   143,    75,   118,   260,   261,   289,
     297,   258,   274,    61,    62,    63,    64,    65,    66,   300,
      67,    68,   114,   115,   204
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,   109,   110,   111,   113,   138,   210,   212,   211,   294,
     295,   135,   185,   205,    -4,   186,   134,     4,    12,   112,
       5,   183,   136,   184,   144,   145,   147,   148,   149,   149,
     149,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   286,   176,   257,   126,   127,     7,   128,
     129,   296,   130,   131,   132,   133,   285,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    69,   203,
     203,   190,   207,   208,   308,     8,   309,   120,   121,   122,
     126,   127,    71,   128,   129,    72,   130,   131,   132,   133,
     123,   124,   125,   126,   127,    77,   128,   129,    -8,   130,
     131,   132,   133,   180,   181,   146,   182,    78,   150,   151,
     152,   183,   244,   216,   245,   246,   116,   247,   248,   210,
     249,   278,   250,   270,    79,   120,   121,   122,   128,   129,
      80,   130,   131,   132,   133,   183,    81,   219,   123,   124,
     125,   126,   127,    82,   128,   129,   256,   130,   131,   132,
     133,    11,    12,   126,   127,   263,   128,   129,    83,   130,
     131,   132,   133,   130,   131,   132,   133,   251,   126,   127,
      84,   128,   129,   264,   130,   131,   132,   133,   180,   181,
     265,   182,   275,   183,   183,   220,   221,   253,   269,   254,
     203,   276,   271,   277,   272,   139,   140,    85,   126,   127,
      86,   128,   129,   282,   130,   131,   132,   133,   142,    12,
     132,   133,   266,   126,   127,    87,   128,   129,   291,   130,
     131,   132,   133,    88,   177,    15,    16,    17,    18,    19,
      20,    21,    22,   303,    23,    24,    25,    26,   306,   307,
     262,   140,    89,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    90,    91,   126,
     127,    51,   128,   129,    52,   130,   131,   132,   133,    92,
     181,    53,   215,    54,    55,    93,    94,    95,    96,    97,
      98,    56,    57,    99,   100,   101,   102,   103,    58,    15,
      16,    17,    18,    19,    20,    21,    22,   104,    23,    24,
      25,    26,   105,   106,   117,   119,   141,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   175,   179,   126,   127,    51,   128,   129,   187,   130,
     131,   132,   133,   209,   213,    53,   217,    54,    55,   252,
     255,   259,   273,   283,   293,    56,    57,   301,   302,   304,
     310,    15,    58,    17,    18,    19,    20,    21,    22,   311,
      23,    24,    25,    26,   137,    14,   214,   290,   288,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   305,   298,   126,   127,    51,   128,   129,
     287,   130,   131,   132,   133,   189,   188,    53,   222,    54,
      55,     0,     0,     0,     0,     0,     0,    56,   107,     0,
       0,     0,     0,   202,    58,    15,     0,    17,    18,    19,
      20,    21,    22,     0,    23,    24,    25,    26,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,   126,
     127,    51,   128,   129,     0,   130,   131,   132,   133,     0,
       0,    53,   223,    54,    55,     0,     0,     0,     0,     0,
       0,    56,   107,     0,     0,     0,     0,    15,    58,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,   126,   127,    51,   128,   129,     0,   130,   131,   132,
     133,     0,     0,    53,   224,    54,    55,     0,     0,     0,
       0,     0,     0,    56,    57,   126,   127,     0,   128,   129,
      58,   130,   131,   132,   133,     0,   126,   127,   225,   128,
     129,     0,   130,   131,   132,   133,     0,   126,   127,   226,
     128,   129,     0,   130,   131,   132,   133,     0,   126,   127,
     227,   128,   129,     0,   130,   131,   132,   133,     0,   126,
     127,   228,   128,   129,     0,   130,   131,   132,   133,     0,
     126,   127,   229,   128,   129,     0,   130,   131,   132,   133,
       0,   126,   127,   230,   128,   129,     0,   130,   131,   132,
     133,     0,   126,   127,   231,   128,   129,     0,   130,   131,
     132,   133,     0,   126,   127,   232,   128,   129,     0,   130,
     131,   132,   133,     0,   126,   127,   233,   128,   129,     0,
     130,   131,   132,   133,     0,   126,   127,   234,   128,   129,
       0,   130,   131,   132,   133,     0,   126,   127,   235,   128,
     129,     0,   130,   131,   132,   133,     0,   126,   127,   237,
     128,   129,     0,   130,   131,   132,   133,     0,   126,   127,
     238,   128,   129,     0,   130,   131,   132,   133,     0,   126,
     127,   239,   128,   129,     0,   130,   131,   132,   133,     0,
     126,   127,   240,   128,   129,     0,   130,   131,   132,   133,
       0,   126,   127,   241,   128,   129,     0,   130,   131,   132,
     133,     0,   126,   127,   242,   128,   129,     0,   130,   131,
     132,   133,     0,   126,   127,   279,   128,   129,     0,   130,
     131,   132,   133,     0,   126,   127,   280,   128,   129,     0,
     130,   131,   132,   133,     0,   126,   127,   299,   128,   129,
       0,   130,   131,   132,   133,   126,   127,   206,   128,   129,
       0,   130,   131,   132,   133,   126,   127,   268,   128,   129,
       0,   130,   131,   132,   133,   126,   127,   284,   128,   129,
       0,   130,   131,   132,   133,     0,   178,   126,   127,     0,
     128,   129,     0,   130,   131,   132,   133,     0,   218,   126,
     127,     0,   128,   129,     0,   130,   131,   132,   133,     0,
     181,   126,   127,     0,   128,   129,     0,   130,   131,   132,
     133,     0,   236,   126,   127,     0,   128,   129,     0,   130,
     131,   132,   133,     0,   243,   126,   127,     0,   128,   129,
       0,   130,   131,   132,   133,     0,   281,   267,   126,   127,
       0,   128,   129,     0,   130,   131,   132,   133,   126,   127,
       0,   128,   129,     0,   130,   131,   132,   133,   292
};

static const yytype_int16 yycheck[] =
{
      53,    54,    55,    56,    57,    72,   139,   140,   139,     4,
       5,    48,    72,   133,     3,    75,    69,     0,    21,    57,
      19,    73,    59,    75,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   272,   107,    58,    62,    63,     3,    65,
      66,    56,    68,    69,    70,    71,    72,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    70,   132,
     133,   119,   135,   136,   303,     5,   305,    46,    47,    48,
      62,    63,    72,    65,    66,     5,    68,    69,    70,    71,
      59,    60,    61,    62,    63,    48,    65,    66,     0,    68,
      69,    70,    71,    72,    73,    78,    75,    71,    81,    82,
      83,    73,   175,    75,   177,   178,    13,   180,   181,   262,
     183,   262,   185,   253,    71,    46,    47,    48,    65,    66,
      71,    68,    69,    70,    71,    73,    71,    75,    59,    60,
      61,    62,    63,    71,    65,    66,   209,    68,    69,    70,
      71,    20,    21,    62,    63,   218,    65,    66,    71,    68,
      69,    70,    71,    68,    69,    70,    71,    76,    62,    63,
      71,    65,    66,   236,    68,    69,    70,    71,    72,    73,
     243,    75,   259,    73,    73,    75,    75,    73,   251,    75,
     253,    73,   255,    75,   257,    72,    73,    71,    62,    63,
      71,    65,    66,   266,    68,    69,    70,    71,    20,    21,
      70,    71,    76,    62,    63,    71,    65,    66,   281,    68,
      69,    70,    71,    71,    73,     4,     5,     6,     7,     8,
       9,    10,    11,   296,    13,    14,    15,    16,   301,   302,
      72,    73,    71,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    71,    71,    62,
      63,    50,    65,    66,    53,    68,    69,    70,    71,    71,
      73,    60,    75,    62,    63,    71,    71,    71,    71,    71,
      71,    70,    71,    71,    71,    71,    71,    71,    77,     4,
       5,     6,     7,     8,     9,    10,    11,    71,    13,    14,
      15,    16,    71,     5,    72,    72,     5,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    48,    75,    62,    63,    50,    65,    66,    78,    68,
      69,    70,    71,    59,    71,    60,    75,    62,    63,    74,
      70,     5,    57,    75,    52,    70,    71,    48,    48,    72,
      52,     4,    77,     6,     7,     8,     9,    10,    11,    52,
      13,    14,    15,    16,    71,     6,   142,   278,   276,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,   300,   290,    62,    63,    50,    65,    66,
     273,    68,    69,    70,    71,   119,   117,    60,    75,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    77,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    62,
      63,    50,    65,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    60,    75,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,     4,    77,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    62,    63,    50,    65,    66,    -1,    68,    69,    70,
      71,    -1,    -1,    60,    75,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    62,    63,    -1,    65,    66,
      77,    68,    69,    70,    71,    -1,    62,    63,    75,    65,
      66,    -1,    68,    69,    70,    71,    -1,    62,    63,    75,
      65,    66,    -1,    68,    69,    70,    71,    -1,    62,    63,
      75,    65,    66,    -1,    68,    69,    70,    71,    -1,    62,
      63,    75,    65,    66,    -1,    68,    69,    70,    71,    -1,
      62,    63,    75,    65,    66,    -1,    68,    69,    70,    71,
      -1,    62,    63,    75,    65,    66,    -1,    68,    69,    70,
      71,    -1,    62,    63,    75,    65,    66,    -1,    68,    69,
      70,    71,    -1,    62,    63,    75,    65,    66,    -1,    68,
      69,    70,    71,    -1,    62,    63,    75,    65,    66,    -1,
      68,    69,    70,    71,    -1,    62,    63,    75,    65,    66,
      -1,    68,    69,    70,    71,    -1,    62,    63,    75,    65,
      66,    -1,    68,    69,    70,    71,    -1,    62,    63,    75,
      65,    66,    -1,    68,    69,    70,    71,    -1,    62,    63,
      75,    65,    66,    -1,    68,    69,    70,    71,    -1,    62,
      63,    75,    65,    66,    -1,    68,    69,    70,    71,    -1,
      62,    63,    75,    65,    66,    -1,    68,    69,    70,    71,
      -1,    62,    63,    75,    65,    66,    -1,    68,    69,    70,
      71,    -1,    62,    63,    75,    65,    66,    -1,    68,    69,
      70,    71,    -1,    62,    63,    75,    65,    66,    -1,    68,
      69,    70,    71,    -1,    62,    63,    75,    65,    66,    -1,
      68,    69,    70,    71,    -1,    62,    63,    75,    65,    66,
      -1,    68,    69,    70,    71,    62,    63,    74,    65,    66,
      -1,    68,    69,    70,    71,    62,    63,    74,    65,    66,
      -1,    68,    69,    70,    71,    62,    63,    74,    65,    66,
      -1,    68,    69,    70,    71,    -1,    73,    62,    63,    -1,
      65,    66,    -1,    68,    69,    70,    71,    -1,    73,    62,
      63,    -1,    65,    66,    -1,    68,    69,    70,    71,    -1,
      73,    62,    63,    -1,    65,    66,    -1,    68,    69,    70,
      71,    -1,    73,    62,    63,    -1,    65,    66,    -1,    68,
      69,    70,    71,    -1,    73,    62,    63,    -1,    65,    66,
      -1,    68,    69,    70,    71,    -1,    73,    61,    62,    63,
      -1,    65,    66,    -1,    68,    69,    70,    71,    62,    63,
      -1,    65,    66,    -1,    68,    69,    70,    71,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    80,    81,    82,     0,    19,    85,     3,     5,    86,
      87,    20,    21,    83,    93,     4,     5,     6,     7,     8,
       9,    10,    11,    13,    14,    15,    16,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    50,    53,    60,    62,    63,    70,    71,    77,    84,
      91,   102,   103,   104,   105,   106,   107,   109,   110,    70,
      90,    72,     5,    88,    89,    94,    92,    48,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,     5,    71,   110,   110,
     110,   110,   109,   110,   111,   112,    13,    72,    95,    72,
      46,    47,    48,    59,    60,    61,    62,    63,    65,    66,
      68,    69,    70,    71,   110,    48,    59,    87,    90,    72,
      73,     5,    20,    93,   110,   110,   111,   110,   110,   110,
     111,   111,   111,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,    48,   110,    73,    73,    75,
      72,    73,    75,    73,    75,    72,    75,    78,   104,   106,
     109,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,    76,   110,   113,   113,    74,   110,   110,    59,
      89,    92,    89,    71,    88,    75,    75,    75,    73,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    73,    75,    75,    75,
      75,    75,    75,    73,   110,   110,   110,   110,   110,   110,
     110,    76,    74,    73,    75,    70,   110,    58,   100,     5,
      96,    97,    72,   110,   110,   110,    76,    61,    74,   110,
     113,   110,   110,    57,   101,    90,    73,    75,    92,    75,
      75,    73,   110,    75,    74,    72,    95,   102,    97,    98,
     100,   110,    72,    52,     4,     5,    56,    99,   101,    75,
     108,    48,    48,   110,    72,   103,   110,   110,    95,    95,
      52,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    81,    80,    82,    80,    83,    83,    83,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    90,    90,    90,    91,    92,    92,    94,    93,
      95,    95,    96,    96,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   108,   107,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     3,     8,     6,     1,     1,
       0,     1,     3,     1,     3,     4,     4,     1,     3,     3,
       2,     4,     0,     3,     6,     5,     2,     0,     0,    11,
       1,     0,     3,     1,     2,     3,     0,     3,     3,     0,
       3,     0,     3,     2,     3,     1,     1,     3,     1,     3,
       1,     3,     0,    11,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     6,     2,     4,
       4,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     8,     2,     3,
       5,     3,     4,     4,     6,     3,     3,     1,     3,     1,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     6,     3,     3,     3,     3,     1,
       1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 88 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { begin(); }
#line 1737 "parser.tab.cc"
    break;

  case 4:
#line 91 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { begin(); 
                                                  begin_choco(); }
#line 1744 "parser.tab.cc"
    break;

  case 5:
#line 93 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { end_choco(); }
#line 1750 "parser.tab.cc"
    break;

  case 6:
#line 100 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { end_system(); }
#line 1756 "parser.tab.cc"
    break;

  case 7:
#line 104 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { end_system(); }
#line 1762 "parser.tab.cc"
    break;

  case 8:
#line 105 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { end_function(); }
#line 1768 "parser.tab.cc"
    break;

  case 15:
#line 125 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { scopes().top().add_cst((yyvsp[-3].str), (yyvsp[-2].dim), (yyvsp[0].expression)->_2domain()); 
                                                  free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1775 "parser.tab.cc"
    break;

  case 16:
#line 129 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { scopes().top().add_cst((yyvsp[-3].str), (yyvsp[-2].dim), (yyvsp[0].expression)->_2domain()); 
                                                  free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1782 "parser.tab.cc"
    break;

  case 20:
#line 138 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { scopes().top().add_var((yyvsp[-1].str),(yyvsp[0].dim));  
		                                          free((yyvsp[-1].str)); delete (yyvsp[0].dim); }
#line 1789 "parser.tab.cc"
    break;

  case 21:
#line 141 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                    { scopes().top().add_var((yyvsp[-3].str),(yyvsp[-2].dim),(yyvsp[0].expression)->_2domain()); 
						                          free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1796 "parser.tab.cc"
    break;

  case 22:
#line 145 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.dim)=new Dim(); }
#line 1802 "parser.tab.cc"
    break;

  case 23:
#line 146 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.dim)=new Dim(Dim::col_vec((yyvsp[-1].expression)->_2int())); 
                                                  delete (yyvsp[-1].expression);  }
#line 1809 "parser.tab.cc"
    break;

  case 24:
#line 148 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.dim)=new Dim(Dim::matrix((yyvsp[-4].expression)->_2int(),(yyvsp[-1].expression)->_2int())); 
                                                  delete (yyvsp[-4].expression); delete (yyvsp[-1].expression); }
#line 1816 "parser.tab.cc"
    break;

  case 25:
#line 152 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.itv)=new Interval((yyvsp[-3].expression)->_2dbl(true), (yyvsp[-1].expression)->_2dbl(false)); 
                                                  delete (yyvsp[-3].expression); delete (yyvsp[-1].expression); }
#line 1823 "parser.tab.cc"
    break;

  case 28:
#line 164 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { scopes().push(Scope(scopes().top(),true)); }
#line 1829 "parser.tab.cc"
    break;

  case 29:
#line 169 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { 
                								  // TODO: simplify the expression (beware of constants that should be "locked")
                								  Function* f=new Function(scopes().top().var_symbols(),(yyvsp[-2].expression)->generate(),(yyvsp[-8].str));        
                                                  scopes().pop();
                                                  scopes().top().add_func((yyvsp[-8].str),f);
                                                  source().func.push_back(f);
                                                  free((yyvsp[-8].str)); delete (yyvsp[-2].expression);
                                                 }
#line 1842 "parser.tab.cc"
    break;

  case 34:
#line 185 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { scopes().top().add_var((yyvsp[-1].str),(yyvsp[0].dim));
                                                  free((yyvsp[-1].str)); delete (yyvsp[0].dim); }
#line 1849 "parser.tab.cc"
    break;

  case 37:
#line 193 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { /* TODO: if this tmp symbol is not used, the expr $3 will never be deleted */
                                                  scopes().top().add_expr_tmp_symbol((yyvsp[-2].str),(yyvsp[0].expression)); free((yyvsp[-2].str)); }
#line 1856 "parser.tab.cc"
    break;

  case 38:
#line 195 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { cerr << "Warning: line " << ibex_lineno << ", local variable " << (yyvsp[-2].str) << " shadows the constant of the same name\n"; 
                                                  scopes().top().rem_cst((yyvsp[-2].str));
                                                  scopes().top().add_expr_tmp_symbol((yyvsp[-2].str),(yyvsp[0].expression)); free((yyvsp[-2].str)); }
#line 1864 "parser.tab.cc"
    break;

  case 39:
#line 203 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { source().goal = NULL; }
#line 1870 "parser.tab.cc"
    break;

  case 40:
#line 204 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { source().goal = (yyvsp[-1].expression); }
#line 1876 "parser.tab.cc"
    break;

  case 43:
#line 215 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { source().ctrs=new P_ConstraintList((yyvsp[-1].constraints)); }
#line 1882 "parser.tab.cc"
    break;

  case 44:
#line 218 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyvsp[-2].constraints)->push_back((yyvsp[0].constraint)); (yyval.constraints) = (yyvsp[-2].constraints); }
#line 1888 "parser.tab.cc"
    break;

  case 45:
#line 219 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraints) = new vector<P_NumConstraint*>();
              								      (yyval.constraints)->push_back((yyvsp[0].constraint)); }
#line 1895 "parser.tab.cc"
    break;

  case 46:
#line 223 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = (yyvsp[0].constraint); }
#line 1901 "parser.tab.cc"
    break;

  case 47:
#line 224 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = (yyvsp[0].constraint); }
#line 1907 "parser.tab.cc"
    break;

  case 48:
#line 225 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = (yyvsp[0].constraint); }
#line 1913 "parser.tab.cc"
    break;

  case 51:
#line 232 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { /* TODO: if this tmp symbol is not used, the expr $3 will never be deleted */
                                                  scopes().top().add_expr_tmp_symbol((yyvsp[-2].str),(yyvsp[0].expression)); free((yyvsp[-2].str)); }
#line 1920 "parser.tab.cc"
    break;

  case 52:
#line 237 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                                { scopes().push(scopes().top());
						       					 scopes().top().add_iterator((yyvsp[-5].str)); }
#line 1927 "parser.tab.cc"
    break;

  case 53:
#line 240 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_ConstraintLoop((yyvsp[-9].str), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-2].constraints)); 
						                          scopes().pop();
		                                          free((yyvsp[-9].str)); }
#line 1935 "parser.tab.cc"
    break;

  case 54:
#line 245 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),EQ,(yyvsp[0].expression)); }
#line 1941 "parser.tab.cc"
    break;

  case 55:
#line 246 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),LEQ,(yyvsp[0].expression)); }
#line 1947 "parser.tab.cc"
    break;

  case 56:
#line 247 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),GEQ,(yyvsp[0].expression)); }
#line 1953 "parser.tab.cc"
    break;

  case 57:
#line 248 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),LT,(yyvsp[0].expression)); }
#line 1959 "parser.tab.cc"
    break;

  case 58:
#line 249 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),GT,(yyvsp[0].expression)); }
#line 1965 "parser.tab.cc"
    break;

  case 59:
#line 250 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = new P_ThickEquality((yyvsp[-2].expression),(yyvsp[0].expression)->_2itv()); delete (yyvsp[0].expression); }
#line 1971 "parser.tab.cc"
    break;

  case 60:
#line 251 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.constraint) = (yyvsp[-1].constraint); }
#line 1977 "parser.tab.cc"
    break;

  case 61:
#line 258 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) + *(yyvsp[0].expression);     }
#line 1983 "parser.tab.cc"
    break;

  case 62:
#line 259 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) * *(yyvsp[0].expression);     }
#line 1989 "parser.tab.cc"
    break;

  case 63:
#line 260 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) - *(yyvsp[0].expression);     }
#line 1995 "parser.tab.cc"
    break;

  case 64:
#line 261 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = *(yyvsp[-2].expression) / *(yyvsp[0].expression);     }
#line 2001 "parser.tab.cc"
    break;

  case 65:
#line 262 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = max((yyvsp[-1].expressions));       }
#line 2007 "parser.tab.cc"
    break;

  case 66:
#line 263 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = min((yyvsp[-1].expressions));       }
#line 2013 "parser.tab.cc"
    break;

  case 67:
#line 264 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = atan2((yyvsp[-3].expression),(yyvsp[-1].expression));  }
#line 2019 "parser.tab.cc"
    break;

  case 68:
#line 265 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = -*(yyvsp[0].expression);          }
#line 2025 "parser.tab.cc"
    break;

  case 69:
#line 266 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = abs  ((yyvsp[-1].expression));     }
#line 2031 "parser.tab.cc"
    break;

  case 70:
#line 267 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = sign ((yyvsp[-1].expression));     }
#line 2037 "parser.tab.cc"
    break;

  case 71:
#line 268 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                    { (yyval.expression) = transpose((yyvsp[-1].expression)); }
#line 2043 "parser.tab.cc"
    break;

  case 72:
#line 269 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = sqrt ((yyvsp[-1].expression));     }
#line 2049 "parser.tab.cc"
    break;

  case 73:
#line 270 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = exp  ((yyvsp[-1].expression));     }
#line 2055 "parser.tab.cc"
    break;

  case 74:
#line 271 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = log  ((yyvsp[-1].expression));     }
#line 2061 "parser.tab.cc"
    break;

  case 75:
#line 272 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = cos  ((yyvsp[-1].expression));     }
#line 2067 "parser.tab.cc"
    break;

  case 76:
#line 273 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = sin  ((yyvsp[-1].expression));     }
#line 2073 "parser.tab.cc"
    break;

  case 77:
#line 274 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = tan  ((yyvsp[-1].expression));     }
#line 2079 "parser.tab.cc"
    break;

  case 78:
#line 275 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = acos ((yyvsp[-1].expression));     }
#line 2085 "parser.tab.cc"
    break;

  case 79:
#line 276 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = asin ((yyvsp[-1].expression));     }
#line 2091 "parser.tab.cc"
    break;

  case 80:
#line 277 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = atan ((yyvsp[-1].expression));     }
#line 2097 "parser.tab.cc"
    break;

  case 81:
#line 278 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = cosh ((yyvsp[-1].expression));     }
#line 2103 "parser.tab.cc"
    break;

  case 82:
#line 279 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = sinh ((yyvsp[-1].expression));     }
#line 2109 "parser.tab.cc"
    break;

  case 83:
#line 280 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = tanh ((yyvsp[-1].expression));     }
#line 2115 "parser.tab.cc"
    break;

  case 84:
#line 281 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = acosh((yyvsp[-1].expression));     }
#line 2121 "parser.tab.cc"
    break;

  case 85:
#line 282 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = asinh((yyvsp[-1].expression));     }
#line 2127 "parser.tab.cc"
    break;

  case 86:
#line 283 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = atanh((yyvsp[-1].expression));     }
#line 2133 "parser.tab.cc"
    break;

  case 87:
#line 285 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = chi((yyvsp[-5].expression),(yyvsp[-3].expression),(yyvsp[-1].expression)); }
#line 2139 "parser.tab.cc"
    break;

  case 88:
#line 286 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2145 "parser.tab.cc"
    break;

  case 89:
#line 287 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2151 "parser.tab.cc"
    break;

  case 90:
#line 288 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant(ball((yyvsp[-3].expression)->_2domain(),(yyvsp[-1].expression)->_2dbl(false))); }
#line 2157 "parser.tab.cc"
    break;

  case 91:
#line 289 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = pow((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2163 "parser.tab.cc"
    break;

  case 92:
#line 290 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = expr_with_index((yyvsp[-3].expression),(yyvsp[-1].expression),false);  }
#line 2169 "parser.tab.cc"
    break;

  case 93:
#line 291 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = expr_with_index((yyvsp[-3].expression),(yyvsp[-1].expression),true); }
#line 2175 "parser.tab.cc"
    break;

  case 94:
#line 293 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = expr_with_index((yyvsp[-5].expression),(yyvsp[-3].expression),(yyvsp[-1].expression),true); }
#line 2181 "parser.tab.cc"
    break;

  case 95:
#line 294 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = row_vec((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2187 "parser.tab.cc"
    break;

  case 96:
#line 295 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = col_vec((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2193 "parser.tab.cc"
    break;

  case 97:
#line 296 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprVarSymbol((yyvsp[0].str)); free((yyvsp[0].str)); /* cannot happen inside a function expr */}
#line 2199 "parser.tab.cc"
    break;

  case 98:
#line 297 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprVarSymbol(scopes().top().var((yyvsp[-1].itg)));   /* CHOCO variable symbols */ }
#line 2205 "parser.tab.cc"
    break;

  case 99:
#line 298 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprIter((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 2211 "parser.tab.cc"
    break;

  case 100:
#line 299 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprTmpSymbol((yyvsp[0].str)); free((yyvsp[0].str)); /* not this (we do **not** build DAG with P_ExprNodes!) ---> &scopes().top().get_expr_tmp_expr($1); */ }
#line 2217 "parser.tab.cc"
    break;

  case 101:
#line 300 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprCstSymbol((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 2223 "parser.tab.cc"
    break;

  case 102:
#line 301 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = apply(scopes().top().get_func((yyvsp[-3].str)), *(yyvsp[-1].expression)); free((yyvsp[-3].str)); }
#line 2229 "parser.tab.cc"
    break;

  case 103:
#line 302 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = apply(scopes().top().get_func((yyvsp[-3].str)), *(yyvsp[-1].expressions)); free((yyvsp[-3].str)); delete (yyvsp[-1].expressions); }
#line 2235 "parser.tab.cc"
    break;

  case 104:
#line 304 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant((yyvsp[0].real)); }
#line 2241 "parser.tab.cc"
    break;

  case 105:
#line 305 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant(Interval::PI); }
#line 2247 "parser.tab.cc"
    break;

  case 106:
#line 306 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = dbl_infinity(); }
#line 2253 "parser.tab.cc"
    break;

  case 107:
#line 307 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant((yyvsp[0].itg)); }
#line 2259 "parser.tab.cc"
    break;

  case 108:
#line 308 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprConstant(*(yyvsp[0].itv)); delete (yyvsp[0].itv); }
#line 2265 "parser.tab.cc"
    break;

  case 109:
#line 309 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = inf((yyvsp[-1].expression)); }
#line 2271 "parser.tab.cc"
    break;

  case 110:
#line 310 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = mid((yyvsp[-1].expression)); }
#line 2277 "parser.tab.cc"
    break;

  case 111:
#line 311 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = sup((yyvsp[-1].expression)); }
#line 2283 "parser.tab.cc"
    break;

  case 112:
#line 312 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = diff((yyvsp[-1].expressions)); }
#line 2289 "parser.tab.cc"
    break;

  case 113:
#line 313 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprGenericUnaryOp((yyvsp[-3].str),*(yyvsp[-1].expression)); free((yyvsp[-3].str)); }
#line 2295 "parser.tab.cc"
    break;

  case 114:
#line 315 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = new P_ExprGenericBinaryOp((yyvsp[-5].str),*(yyvsp[-3].expression),*(yyvsp[-1].expression)); free((yyvsp[-5].str)); }
#line 2301 "parser.tab.cc"
    break;

  case 115:
#line 318 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyvsp[-2].expressions)->push_back((yyvsp[0].expression)); (yyval.expressions)=(yyvsp[-2].expressions); }
#line 2307 "parser.tab.cc"
    break;

  case 116:
#line 319 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expressions) = new vector<const P_ExprNode*>(); 
                                                  (yyval.expressions)->push_back((yyvsp[-2].expression)); (yyval.expressions)->push_back((yyvsp[0].expression)); }
#line 2314 "parser.tab.cc"
    break;

  case 117:
#line 323 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyvsp[-2].expressions)->push_back((yyvsp[0].expression)); (yyval.expressions)=(yyvsp[-2].expressions); }
#line 2320 "parser.tab.cc"
    break;

  case 118:
#line 324 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expressions) = new vector<const P_ExprNode*>(); 
                                                  (yyval.expressions)->push_back((yyvsp[-2].expression)); (yyval.expressions)->push_back((yyvsp[0].expression)); }
#line 2327 "parser.tab.cc"
    break;

  case 119:
#line 328 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = index_all(); }
#line 2333 "parser.tab.cc"
    break;

  case 120:
#line 329 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                    { (yyval.expression) = index((yyvsp[0].expression)); }
#line 2339 "parser.tab.cc"
    break;

  case 121:
#line 330 "/home/cyx/proyectos/ibex/ibex-lib/src/parser/parser.yc"
                                                { (yyval.expression) = index_range((yyvsp[-2].expression),(yyvsp[0].expression)); }
#line 2345 "parser.tab.cc"
    break;


#line 2349 "parser.tab.cc"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
