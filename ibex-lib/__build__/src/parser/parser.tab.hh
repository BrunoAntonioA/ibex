/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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


#line 136 "parser.tab.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ibexlval;

int ibexparse (void);

#endif /* !YY_IBEX_PARSER_TAB_HH_INCLUDED  */
