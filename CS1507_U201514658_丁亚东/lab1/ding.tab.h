/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
    SPCOMMA = 259,
    SPDOT = 260,
    SPLEFTBRACE = 261,
    SPRIGHTBRACE = 262,
    SPLEFTPRNT = 263,
    SPRIGHTPRNT = 264,
    SPLEFTBRACKET = 265,
    SPRIGHTBRACKET = 266,
    OPPLUS = 267,
    OPMINUS = 268,
    OPMULTIPLY = 269,
    OPDIVIDE = 270,
    OPASSIGN = 271,
    OPAND = 272,
    OPOR = 273,
    OPNOT = 274,
    OPEQUAL = 275,
    OPNOTEQUAL = 276,
    OPGREAT = 277,
    OPLIGHT = 278,
    OPGREATEQ = 279,
    OPLIGHTEQ = 280,
    OPSELFADD = 281,
    OPSELFMINUS = 282,
    TYPEVOID = 283,
    TYPEINTEGER = 284,
    TYPEFLOAT = 285,
    TYPEBOOL = 286,
    TYPESTRING = 287,
    KEYMAIN = 288,
    KEYCLASS = 289,
    KEYNEW = 290,
    KEYEXTENDS = 291,
    KEYTHIS = 292,
    KEYINSTANCEOF = 293,
    KEYIF = 294,
    KEYELSE = 295,
    KEYFOR = 296,
    KEYWHILE = 297,
    KEYBREAK = 298,
    KEYCONTINUE = 299,
    KEYRETURN = 300,
    KEYSTATIC = 301,
    KEYPRINT = 302,
    KEYREADINTEGER = 303,
    KEYREADLINE = 304,
    KEYREADFLOAT = 305,
    CONSTANTNULL = 306,
    CONSTANTBOOL = 307,
    CONSTANTINT = 308,
    CONSTANTFLOAT = 309,
    CONSTANTSTRING = 310,
    IDENTIFIER = 311,
    LOWER_THAN_ELSE = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "ding.y" /* yacc.c:1909  */

    GrammarTree grammar_tree;

#line 116 "ding.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
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
