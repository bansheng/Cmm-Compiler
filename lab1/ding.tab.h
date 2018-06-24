/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_DING_TAB_H_INCLUDED
# define YY_YY_DING_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SPSEMICOLON = 258,
    SPCOLON = 259,
    SPCOMMA = 260,
    SPDOT = 261,
    SPLEFTBRACE = 262,
    SPRIGHTBRACE = 263,
    SPLEFTPRNT = 264,
    SPRIGHTPRNT = 265,
    SPLEFTBRACKET = 266,
    SPRIGHTBRACKET = 267,
    OPPLUS = 268,
    OPMINUS = 269,
    OPMULTIPLY = 270,
    OPDIVIDE = 271,
    OPASSIGN = 272,
    OPAND = 273,
    OPOR = 274,
    OPNOT = 275,
    OPEQUAL = 276,
    OPNOTEQUAL = 277,
    OPGREAT = 278,
    OPLIGHT = 279,
    OPGREATEQ = 280,
    OPLIGHTEQ = 281,
    OPSELFADD = 282,
    OPSELFMINUS = 283,
    TYPEVOID = 284,
    TYPEINTEGER = 285,
    TYPEFLOAT = 286,
    TYPEBOOL = 287,
    TYPESTRING = 288,
    KEYPUBLIC = 289,
    KEYPRIVATE = 290,
    KEYPROTECTED = 291,
    KEYMAIN = 292,
    KEYCLASS = 293,
    KEYNEW = 294,
    KEYEXTENDS = 295,
    KEYTHIS = 296,
    KEYINSTANCEOF = 297,
    KEYIF = 298,
    KEYELSE = 299,
    KEYFOR = 300,
    KEYWHILE = 301,
    KEYBREAK = 302,
    KEYCONTINUE = 303,
    KEYRETURN = 304,
    KEYSTATIC = 305,
    KEYPRINT = 306,
    KEYREADINTEGER = 307,
    KEYREADLINE = 308,
    KEYREADFLOAT = 309,
    CONSTANTNULL = 310,
    CONSTANTBOOL = 311,
    CONSTANTINT = 312,
    CONSTANTFLOAT = 313,
    CONSTANTSTRING = 314,
    IDENTIFIER = 315,
    LOWER_THAN_ELSE = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "ding.y" /* yacc.c:1909  */

    GrammarTree grammar_tree;

#line 120 "ding.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_DING_TAB_H_INCLUDED  */
