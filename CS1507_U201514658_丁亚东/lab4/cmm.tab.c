/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "cmm.y" /* yacc.c:339  */

    #include<stdio.h>
    #include<stdlib.h>
    #include<unistd.h>
    #include"GrammarTree.h"
    #include"IntermediateCode.h"
    #include"ObjectCode.h"
    #include"lex.yy.c"
    void yyerror(const char* fmt, ...);
    FILE* fp;
    int darg = 0;
    int garg = 1;
    int iarg = 1;
    int sarg = 0;
    int marg = 0;
    int oarg  = 0;
    int gmerror = 0;
    int smerror = 0;
    int block = 0;
    ScopeStack scopestk;

#line 88 "cmm.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cmm.tab.h".  */
#ifndef YY_YY_CMM_TAB_H_INCLUDED
# define YY_YY_CMM_TAB_H_INCLUDED
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
    OPLEFTPRNT = 264,
    OPRIGHTPRNT = 265,
    OPLEFTBRACKET = 266,
    OPRIGHTBRACKET = 267,
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
    KEYPUBLIC = 284,
    KEYPRIVATE = 285,
    KEYPROTECTED = 286,
    TYPEVOID = 287,
    TYPEINTEGER = 288,
    TYPEFLOAT = 289,
    TYPEBOOL = 290,
    TYPESTRING = 291,
    KEYCLASS = 292,
    KEYNEW = 293,
    KEYEXTENDS = 294,
    KEYTHIS = 295,
    KEYINSTANCEOF = 296,
    KEYIF = 297,
    KEYELSE = 298,
    KEYFOR = 299,
    KEYWHILE = 300,
    KEYBREAK = 301,
    KEYRETURN = 302,
    KEYCONTINUE = 303,
    KEYSTATIC = 304,
    KEYPRINT = 305,
    KEYREADINTEGER = 306,
    KEYREADLINE = 307,
    CONSTANTNULL = 308,
    CONSTANTBOOL = 309,
    CONSTANTINTD = 310,
    CONSTANTINTH = 311,
    CONSTANTFLOAT = 312,
    CONSTANTFLOATSC = 313,
    CONSTANTSTRING = 314,
    IDENTIFIER = 315,
    LOWER_THAN_ELSE = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "cmm.y" /* yacc.c:355  */

    GrammarTree grammar_tree;

#line 194 "cmm.tab.c" /* yacc.c:355  */
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

#endif /* !YY_YY_CMM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "cmm.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,   111,   115,   121,   125,   131,   136,   140,
     144,   147,   148,   149,   150,   151,   152,   159,   168,   172,
     178,   179,   186,   194,   203,   209,   216,   219,   220,   226,
     231,   237,   238,   241,   242,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   265,   266,   267,   268,   271,
     272,   273,   274,   277,   278,   281,   282,   285,   286,   289,
     290,   293,   299,   305,   309,   315,   316,   319,   322,   325,
     328,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   358,   359,   360,   361,
     362,   363,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SPSEMICOLON", "SPCOLON", "SPCOMMA",
  "SPDOT", "SPLEFTBRACE", "SPRIGHTBRACE", "OPLEFTPRNT", "OPRIGHTPRNT",
  "OPLEFTBRACKET", "OPRIGHTBRACKET", "OPPLUS", "OPMINUS", "OPMULTIPLY",
  "OPDIVIDE", "OPASSIGN", "OPAND", "OPOR", "OPNOT", "OPEQUAL",
  "OPNOTEQUAL", "OPGREAT", "OPLIGHT", "OPGREATEQ", "OPLIGHTEQ",
  "OPSELFADD", "OPSELFMINUS", "KEYPUBLIC", "KEYPRIVATE", "KEYPROTECTED",
  "TYPEVOID", "TYPEINTEGER", "TYPEFLOAT", "TYPEBOOL", "TYPESTRING",
  "KEYCLASS", "KEYNEW", "KEYEXTENDS", "KEYTHIS", "KEYINSTANCEOF", "KEYIF",
  "KEYELSE", "KEYFOR", "KEYWHILE", "KEYBREAK", "KEYRETURN", "KEYCONTINUE",
  "KEYSTATIC", "KEYPRINT", "KEYREADINTEGER", "KEYREADLINE", "CONSTANTNULL",
  "CONSTANTBOOL", "CONSTANTINTD", "CONSTANTINTH", "CONSTANTFLOAT",
  "CONSTANTFLOATSC", "CONSTANTSTRING", "IDENTIFIER", "LOWER_THAN_ELSE",
  "$accept", "Program", "ProgramFileds", "ProgramFiled", "VariableDef",
  "Variable", "Type", "Variables", "Formals", "FunctionDef", "ClassDef",
  "Fields", "Field", "StmtBlock", "Stmts", "Stmt", "SimpleStmt", "LValue",
  "SelfLvalue", "Call", "Actuals", "Exprs", "ForStmt", "WhileStmt",
  "IfStmt", "ReturnStmt", "BreakStmt", "ContinueStmt", "PrintStmt",
  "BoolExpr", "Expr", "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,    51,  -169,  -169,  -169,  -169,  -169,   -44,   202,    28,
      13,  -169,  -169,    33,    -9,  -169,  -169,  -169,  -169,     1,
     -21,    -7,  -169,  -169,  -169,    46,    65,    74,    26,  -169,
      68,  -169,   202,    98,  -169,  -169,    94,    74,    96,   202,
    -169,    -4,   100,   108,  -169,  -169,    74,   109,  -169,   202,
      17,   112,    17,  -169,   124,   148,  -169,  -169,  -169,  -169,
      64,   260,   313,   313,   249,  -169,   125,   126,   128,   139,
    -169,   313,  -169,   143,   144,   145,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,   149,  -169,  -169,   151,   148,   130,    16,
      27,    31,  -169,  -169,  -169,   157,   160,   162,   163,   453,
    -169,   101,    38,  -169,  -169,   390,   210,    72,   161,   156,
     313,   313,   313,   313,   453,   313,   165,   166,   313,  -169,
    -169,  -169,   313,  -169,  -169,  -169,  -169,  -169,  -169,   117,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   168,  -169,   169,   290,   369,   181,   453,
     207,   203,   116,   453,  -169,  -169,   209,   213,   453,   211,
     411,   210,   210,    72,    72,   495,   474,   158,   158,   158,
     158,   158,   158,   313,  -169,   432,   152,   208,   313,   208,
     313,  -169,  -169,   313,  -169,  -169,  -169,   217,   180,   226,
    -169,   453,   220,  -169,   208,   313,  -169,  -169,   221,   208,
    -169
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    15,    11,    12,    13,    14,     0,     0,     0,
       0,     3,     5,     0,     0,     6,     7,     9,    26,    16,
       0,     0,     1,     4,     8,     0,    10,     0,     0,    16,
       0,    17,    20,     0,    29,    30,     0,     0,     0,    20,
      18,     0,    21,     0,    24,    28,     0,     0,    10,     0,
       0,     0,     0,    19,     0,     0,    22,    25,    23,    32,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
      67,    65,    68,     0,     0,     0,   102,   100,    96,    97,
      98,    99,   101,    49,    35,    44,     0,     0,     0,    72,
      52,    74,    39,    38,    37,     0,     0,     0,     0,     0,
      71,     0,    72,    52,    74,     0,    80,    89,     0,     0,
       0,     0,    45,     0,    66,     0,     0,     0,    57,    31,
      34,    36,     0,    53,    54,    42,    40,    41,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,    70,
       0,     0,     0,    59,    90,    91,     0,    58,    46,    50,
       0,    76,    77,    78,    79,    87,    88,    85,    86,    83,
      81,    84,    82,     0,    92,     0,     0,     0,     0,     0,
       0,    69,    55,    57,    51,    95,    93,     0,    63,     0,
      62,    60,     0,    94,     0,    45,    56,    64,     0,     0,
      61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,   222,   187,   -22,    15,  -169,   212,    12,
    -169,    18,  -169,    35,   170,  -168,  -111,   -55,   -52,   -49,
      87,   132,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -108,
     -42,  -169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    84,    13,    41,    42,    43,    35,
      16,    36,    37,    85,    86,    87,    88,   102,   103,   104,
     156,   157,    92,    93,    94,    95,    96,    97,    98,   148,
      99,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   150,    25,    90,    25,   151,    91,    25,    27,   188,
      40,   190,    15,    -2,     1,    14,    19,    40,    54,   105,
     106,   107,    15,    21,    55,    14,   197,    53,    22,   114,
     -47,   200,    89,   122,   -48,    90,    24,   -47,    91,    29,
      28,   -48,    14,   123,   124,     2,     3,     4,     5,     6,
       7,    26,    14,    30,    17,    45,    48,    89,    31,    18,
      90,    14,     8,    91,    51,   123,   124,    17,   147,   149,
     189,   149,    59,   153,    32,    33,   153,    39,   129,   109,
     158,     1,   -27,   130,   198,    56,    38,    58,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    17,    44,    46,   175,    49,     2,     3,     4,     5,
       6,    20,     2,     3,     4,     5,     6,     7,    50,    52,
      57,   180,    89,     8,    89,    90,   181,    90,    91,     8,
      91,   185,    59,   121,   110,   111,   149,   112,   191,    89,
      89,   153,    90,    90,    89,    91,    91,    90,   113,    60,
      91,   -45,   115,   116,   117,    55,   -33,    61,   118,   119,
     125,   143,    62,   126,   129,   127,   128,   146,    63,   130,
     145,   131,   132,   133,   134,   154,   155,   159,   173,   174,
       2,     3,     4,     5,     6,    20,    64,    12,    65,    66,
      67,   177,    68,    69,    70,    71,    72,    12,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    60,
     178,   -45,   187,   179,    34,    55,   129,    61,   180,   182,
     183,   130,    62,   194,    34,   133,   134,   193,    63,   195,
     196,   199,    23,    34,     2,     3,     4,     5,     6,    20,
       2,     3,     4,     5,     6,    20,    64,   152,    65,    66,
      67,    47,    68,    69,    70,    71,    72,   120,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    61,
     192,     0,     0,     0,    62,     0,     0,     0,     0,     0,
      63,     2,     3,     4,     5,     6,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,    64,    61,
      65,    66,    31,     0,    62,     0,     0,     0,     0,   108,
      63,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     0,    61,     0,     0,     0,     0,    62,    64,     0,
      65,    66,     0,    63,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    64,     0,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   176,   129,     0,     0,     0,     0,
     130,     0,   131,   132,   133,   134,     0,   135,   136,     0,
     137,   138,   139,   140,   141,   142,   129,     0,     0,     0,
     144,   130,     0,   131,   132,   133,   134,     0,   135,   136,
       0,   137,   138,   139,   140,   141,   142,   129,     0,     0,
       0,     0,   130,   184,   131,   132,   133,   134,     0,   135,
     136,     0,   137,   138,   139,   140,   141,   142,   129,     0,
       0,     0,     0,   130,   186,   131,   132,   133,   134,     0,
     135,   136,     0,   137,   138,   139,   140,   141,   142,   129,
       0,     0,     0,     0,   130,     0,   131,   132,   133,   134,
       0,   135,   136,     0,   137,   138,   139,   140,   141,   142,
     129,     0,     0,     0,     0,   130,     0,   131,   132,   133,
     134,     0,   135,     0,     0,   137,   138,   139,   140,   141,
     142,   129,     0,     0,     0,     0,   130,     0,   131,   132,
     133,   134,     0,     0,     0,     0,   137,   138,   139,   140,
     141,   142
};

static const yytype_int16 yycheck[] =
{
      55,   112,    11,    55,    11,   113,    55,    11,     7,   177,
      32,   179,     0,     0,     1,     0,    60,    39,     1,    61,
      62,    63,    10,     8,     7,    10,   194,    49,     0,    71,
       3,   199,    87,    17,     3,    87,     3,    10,    87,    60,
      39,    10,    27,    27,    28,    32,    33,    34,    35,    36,
      37,    60,    37,    60,     3,    37,    60,   112,    12,     8,
     112,    46,    49,   112,    46,    27,    28,     3,   110,   111,
     178,   113,     8,   115,     9,     1,   118,     9,     6,    64,
     122,     1,     8,    11,   195,    50,    60,    52,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     3,     8,     7,   146,     5,    32,    33,    34,    35,
      36,    37,    32,    33,    34,    35,    36,    37,    10,    10,
       8,     5,   177,    49,   179,   177,    10,   179,   177,    49,
     179,   173,     8,     3,     9,     9,   178,     9,   180,   194,
     195,   183,   194,   195,   199,   194,   195,   199,     9,     1,
     199,     3,     9,     9,     9,     7,     8,     9,     9,     8,
       3,    60,    14,     3,     6,     3,     3,    11,    20,    11,
       9,    13,    14,    15,    16,    10,    10,    60,    10,    10,
      32,    33,    34,    35,    36,    37,    38,     0,    40,    41,
      42,    10,    44,    45,    46,    47,    48,    10,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     1,
       3,     3,    60,    10,    27,     7,     6,     9,     5,    10,
       9,    11,    14,    43,    37,    15,    16,    10,    20,     3,
      10,    10,    10,    46,    32,    33,    34,    35,    36,    37,
      32,    33,    34,    35,    36,    37,    38,   115,    40,    41,
      42,    39,    44,    45,    46,    47,    48,    87,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     9,
     183,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      20,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,     9,
      40,    41,    12,    -1,    14,    -1,    -1,    -1,    -1,    60,
      20,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,     9,    -1,    -1,    -1,    -1,    14,    38,    -1,
      40,    41,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     5,     6,    -1,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    16,    -1,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,     6,    -1,    -1,    -1,
      10,    11,    -1,    13,    14,    15,    16,    -1,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,     6,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,     6,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,     6,
      -1,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    16,
      -1,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
       6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      16,    -1,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    32,    33,    34,    35,    36,    37,    49,    63,
      64,    65,    66,    67,    68,    71,    72,     3,     8,    60,
      37,    68,     0,    65,     3,    11,    60,     7,    39,    60,
      60,    12,     9,     1,    66,    71,    73,    74,    60,     9,
      67,    68,    69,    70,     8,    73,     7,    70,    60,     5,
      10,    73,    10,    67,     1,     7,    75,     8,    75,     8,
       1,     9,    14,    20,    38,    40,    41,    42,    44,    45,
      46,    47,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    66,    75,    76,    77,    78,    79,
      80,    81,    84,    85,    86,    87,    88,    89,    90,    92,
      93,    37,    79,    80,    81,    92,    92,    92,    60,    68,
       9,     9,     9,     9,    92,     9,     9,     9,     9,     8,
      76,     3,    17,    27,    28,     3,     3,     3,     3,     6,
      11,    13,    14,    15,    16,    18,    19,    21,    22,    23,
      24,    25,    26,    60,    10,     9,    11,    92,    91,    92,
      78,    91,    83,    92,    10,    10,    82,    83,    92,    60,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    10,    10,    92,     5,    10,     3,    10,
       5,    10,    10,     9,    12,    92,    12,    60,    77,    91,
      77,    92,    82,    10,    43,     3,    10,    77,    78,    10,
      77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    65,    66,    66,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    85,    86,    86,    87,    87,    88,    89,    90,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     3,     1,     3,
       0,     1,     6,     7,     5,     7,     2,     0,     2,     1,
       1,     3,     2,     0,     2,     1,     2,     1,     1,     1,
       2,     2,     2,     2,     1,     0,     3,     1,     1,     1,
       3,     4,     1,     2,     2,     4,     6,     0,     1,     1,
       3,     9,     5,     5,     7,     1,     2,     1,     1,     4,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     4,     5,     6,     5,     1,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 66 "cmm.y" /* yacc.c:1646  */
    { 
       (yyval.grammar_tree) = CreateGrammarTree("Program", 1, (yyvsp[0].grammar_tree)); 
       AddClassParent((yyvsp[0].grammar_tree)->globalscope);
       (yyval.grammar_tree)->globalscope = (yyvsp[0].grammar_tree)->globalscope;
       if (!garg) {
           printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
           printf("__________________________________________________\n\n"); 
           TraverseGrammerTree((yyval.grammar_tree), 0);
           printf("__________________________________________________\n\n"); 
           printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
       }
       InitScopeStack(&scopestk);
       
       Scope scope;
       scope.type = ScopeGlobal;
       scope.globalscope = (yyval.grammar_tree)->globalscope;
       
       ScopeTrial((yyval.grammar_tree), scope, &scopestk);
       TACCode* entrance = GenerateInterCode((yyval.grammar_tree), scope, &scopestk);
       if (smerror)
           goto end;
       else if (sarg)
       {
           printf("\nNow print the symbol tables of \"Semantic Analyzing\":\n");
           printf("__________________________________________________\n\n"); 
           DisplayGlobalScope((yyvsp[0].grammar_tree)->globalscope, "Program");
           printf("__________________________________________________\n\n"); 
           printf("The symbol tables of \"Semantic Analyzing\" is printed!\n\n"); 
       }
       if (iarg)
       {
           printf("\nNow print the intermediate code of \"InterCodeGenerate\":\n");
           printf("__________________________________________________\n\n"); 
           DisplayTACCode(entrance);
           printf("__________________________________________________\n\n"); 
           printf("The intermediate code of \"InterCodeGenerate\" is printed!\n\n"); 
       }
       if (oarg == 0)
           fp = fopen("result.asm", "w");
       GenerateObjectCode(fp, entrance);
       fclose(fp);
       end:;
       }
#line 1655 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "cmm.y" /* yacc.c:1646  */
    { 
			 (yyval.grammar_tree) = CreateGrammarTree("ProgramFileds", 1, (yyvsp[0].grammar_tree)); 
			 (yyval.grammar_tree)->globalscope = (yyvsp[0].grammar_tree)->globalscope;
			 }
#line 1664 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "cmm.y" /* yacc.c:1646  */
    { 
			 (yyval.grammar_tree) = CreateGrammarTree("ProgramFileds", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
			 (yyval.grammar_tree)->globalscope = MergeGlobalScope((yyvsp[-1].grammar_tree)->globalscope, (yyvsp[0].grammar_tree)->globalscope);
			 }
#line 1673 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "cmm.y" /* yacc.c:1646  */
    { ChangeVariableName((yyvsp[0].grammar_tree));
			(yyval.grammar_tree) = CreateGrammarTree("ProgramFiled", 1, (yyvsp[0].grammar_tree)); 
			(yyval.grammar_tree)->globalscope = 
			AddIntoGlobal((yyval.grammar_tree)->globalscope, (yyvsp[0].grammar_tree)->localscope->name, Variable, (yyvsp[0].grammar_tree)->localscope->type, 0);/* 变量没有描述器 */ }
#line 1682 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 125 "cmm.y" /* yacc.c:1646  */
    { ChangeFunctionName((yyvsp[0].grammar_tree)); 
			(yyval.grammar_tree) = CreateGrammarTree("ProgramFiled", 1, (yyvsp[0].grammar_tree)); 
			
			Changethis((yyvsp[0].grammar_tree)->depictor);
			(yyval.grammar_tree)->globalscope = 
			AddIntoGlobal((yyval.grammar_tree)->globalscope, (yyvsp[0].grammar_tree)->localscope->name, Function, (yyvsp[0].grammar_tree)->classscope->type, 1, (yyvsp[0].grammar_tree)->depictor.classdsp);}
#line 1693 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 131 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProgramFiled", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->globalscope = 
			AddIntoGlobal((yyval.grammar_tree)->globalscope, (yyvsp[0].grammar_tree)->lchild->rchild->string_value, Class, "class", 1, (yyvsp[0].grammar_tree)->depictor.classdsp);
			}
#line 1701 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 136 "cmm.y" /* yacc.c:1646  */
    { 
           (yyval.grammar_tree) = CreateGrammarTree("VariableDef", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
           (yyval.grammar_tree)->localscope = AddIntoLocal((yyval.grammar_tree)->localscope, (yyvsp[-1].grammar_tree)->lchild->rchild->string_value, Variable, (yyvsp[-1].grammar_tree)->lchild->string_value, NULL);
           }
#line 1710 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 140 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("VariableDef", 1, (yyvsp[0].grammar_tree)); gmerror += 1; }
#line 1716 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Variable", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1722 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 147 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->string_value = (yyvsp[0].grammar_tree)->string_value; }
#line 1728 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 148 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->string_value = (yyvsp[0].grammar_tree)->string_value; }
#line 1734 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 149 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->string_value = (yyvsp[0].grammar_tree)->string_value; }
#line 1740 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->string_value = (yyvsp[0].grammar_tree)->string_value; }
#line 1746 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 151 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->string_value = (yyvsp[0].grammar_tree)->string_value; }
#line 1752 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "cmm.y" /* yacc.c:1646  */
    { 
    (yyval.grammar_tree) = CreateGrammarTree("Type", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
    char* cache = (char*)malloc(sizeof(char) * (6 + strlen((yyvsp[0].grammar_tree)->string_value)));
    strcpy(cache, "class:");
    strcat(cache, (yyvsp[0].grammar_tree)->string_value);
    (yyval.grammar_tree)->string_value = cache;
    }
#line 1764 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 159 "cmm.y" /* yacc.c:1646  */
    { 
    (yyval.grammar_tree) = CreateGrammarTree("Type", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
    char* cache = (char*)malloc(sizeof(char) * (strlen((yyvsp[-2].grammar_tree)->string_value) + 2));
    strcpy(cache, (yyvsp[-2].grammar_tree)->string_value);
    strcat(cache, "[]");
    (yyval.grammar_tree)->string_value = cache;
    }
#line 1776 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 168 "cmm.y" /* yacc.c:1646  */
    { 
         (yyval.grammar_tree) = CreateGrammarTree("Variables", 1, (yyvsp[0].grammar_tree)); 
         (yyval.grammar_tree)->formalscope = AddIntoFormal((yyval.grammar_tree)->formalscope, (yyvsp[0].grammar_tree)->lchild->rchild->string_value, (yyvsp[0].grammar_tree)->lchild->string_value, NULL);
         }
#line 1785 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 172 "cmm.y" /* yacc.c:1646  */
    { 
         (yyval.grammar_tree) = CreateGrammarTree("Variables", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
         (yyval.grammar_tree)->formalscope = AddIntoFormal((yyvsp[-2].grammar_tree)->formalscope, (yyvsp[0].grammar_tree)->lchild->rchild->string_value, (yyvsp[0].grammar_tree)->lchild->string_value, NULL);
         }
#line 1794 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 178 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Formals", 0, -1); (yyval.grammar_tree)->formalscope = NULL; }
#line 1800 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 179 "cmm.y" /* yacc.c:1646  */
    { 
       (yyval.grammar_tree) = CreateGrammarTree("Formals", 1, (yyvsp[0].grammar_tree)); 
       (yyval.grammar_tree)->formalscope = (yyvsp[0].grammar_tree)->formalscope;
       }
#line 1809 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 186 "cmm.y" /* yacc.c:1646  */
    { 
			
           (yyval.grammar_tree) = CreateGrammarTree("FunctionDef", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
           (yyvsp[-2].grammar_tree)->formalscope = AddIntoFormal((yyvsp[-2].grammar_tree)->formalscope, "this", "class:", NULL);
           AddLocalIntoFormal((yyvsp[-2].grammar_tree)->formalscope, (yyvsp[0].grammar_tree)->localscope);
           (yyval.grammar_tree)->depictor = CreateFunctionDepictor(0, (yyvsp[-4].grammar_tree)->string_value, (yyvsp[-2].grammar_tree)->formalscope);
           (yyval.grammar_tree)->classscope = AddIntoClass((yyval.grammar_tree)->classscope, (yyvsp[-4].grammar_tree)->string_value, Function, (yyvsp[-5].grammar_tree)->string_value, (yyval.grammar_tree)->depictor); 
           }
#line 1822 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 194 "cmm.y" /* yacc.c:1646  */
    { 
           (yyval.grammar_tree) = CreateGrammarTree("FunctionDef", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
           (yyvsp[-2].grammar_tree)->formalscope = AddIntoFormal((yyvsp[-2].grammar_tree)->formalscope, "Nil", "Nil", NULL);
           AddLocalIntoFormal((yyvsp[-2].grammar_tree)->formalscope, (yyvsp[0].grammar_tree)->localscope);
           (yyval.grammar_tree)->depictor = CreateFunctionDepictor(1, (yyvsp[-4].grammar_tree)->string_value, (yyvsp[-2].grammar_tree)->formalscope);
           (yyval.grammar_tree)->classscope = AddIntoClass((yyval.grammar_tree)->classscope, (yyvsp[-4].grammar_tree)->string_value, Function, (yyvsp[-5].grammar_tree)->string_value, (yyval.grammar_tree)->depictor);
           }
#line 1834 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 203 "cmm.y" /* yacc.c:1646  */
    { 
        (yyval.grammar_tree) = CreateGrammarTree("ClassDef", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
        AddThisType((yyvsp[-1].grammar_tree)->classscope, (yyvsp[-3].grammar_tree)->string_value);
        (yyval.grammar_tree)->depictor = CreateClassDepictor(NULL, (yyvsp[-1].grammar_tree)->classscope);
        
        }
#line 1845 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 209 "cmm.y" /* yacc.c:1646  */
    { 
        (yyval.grammar_tree) = CreateGrammarTree("ClassDef", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
        AddThisType((yyvsp[-1].grammar_tree)->classscope, (yyvsp[-5].grammar_tree)->string_value);
        
        (yyval.grammar_tree)->depictor = CreateClassDepictor((yyvsp[-3].grammar_tree)->string_value, (yyvsp[-1].grammar_tree)->classscope);
        
        }
#line 1857 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 216 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ClassDef", 1, (yyvsp[0].grammar_tree)); gmerror += 1; }
#line 1863 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 219 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Fields", 0, -1); (yyval.grammar_tree)->classscope = NULL; }
#line 1869 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 220 "cmm.y" /* yacc.c:1646  */
    { 
      (yyval.grammar_tree) = CreateGrammarTree("Fields", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
      (yyval.grammar_tree)->classscope = MergeClassScope((yyvsp[-1].grammar_tree)->classscope, (yyvsp[0].grammar_tree)->classscope);
      }
#line 1878 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 226 "cmm.y" /* yacc.c:1646  */
    { 
     (yyval.grammar_tree) = CreateGrammarTree("Field", 1, (yyvsp[0].grammar_tree)); 
     Depictor depictor;
     (yyval.grammar_tree)->classscope = AddIntoClass((yyval.grammar_tree)->classscope, (yyvsp[0].grammar_tree)->lchild->lchild->rchild->string_value, Variable, (yyvsp[0].grammar_tree)->lchild->lchild->string_value, depictor);
     }
#line 1888 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 231 "cmm.y" /* yacc.c:1646  */
    { 
     (yyval.grammar_tree) = CreateGrammarTree("Field", 1, (yyvsp[0].grammar_tree)); 
     (yyval.grammar_tree)->classscope = (yyvsp[0].grammar_tree)->classscope;
     }
#line 1897 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 237 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("StmtBlock", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->localscope = (yyvsp[-1].grammar_tree)->localscope; }
#line 1903 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 238 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("StmtBlock", 1, (yyvsp[0].grammar_tree)); gmerror += 1; }
#line 1909 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 241 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmts", 0, -1); (yyval.grammar_tree)->localscope = NULL; }
#line 1915 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 242 "cmm.y" /* yacc.c:1646  */
    { 
     (yyval.grammar_tree) = CreateGrammarTree("Stmts", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
     (yyval.grammar_tree)->localscope = MergeLocalScope((yyvsp[0].grammar_tree)->localscope, (yyvsp[-1].grammar_tree)->localscope);
     }
#line 1924 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 248 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope; }
#line 1930 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 249 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1936 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 250 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope; }
#line 1942 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 251 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope; }
#line 1948 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 252 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope; }
#line 1954 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 253 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1960 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 254 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1966 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 255 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1972 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 256 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1978 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 257 "cmm.y" /* yacc.c:1646  */
    { 
    (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); 
    char cache[5];
    sprintf(cache, "%d", block++);
    (yyval.grammar_tree)->localscope = AddIntoLocal((yyval.grammar_tree)->localscope, cache, Block, "Block", (yyvsp[0].grammar_tree)->localscope); 
    }
#line 1989 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 265 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 0, -1); }
#line 1995 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 266 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2001 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 267 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2007 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 268 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2013 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 271 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 1, (yyvsp[0].grammar_tree)); }
#line 2019 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 272 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2025 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 273 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2031 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 274 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 1, (yyvsp[0].grammar_tree)); }
#line 2037 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 277 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SelfLvalue", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2043 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 278 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SelfLvalue", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2049 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 281 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Call", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); printf("普通函数调用0\n");}
#line 2055 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 282 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Call", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2061 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 285 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Actuals", 0, -1); }
#line 2067 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 286 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Actuals", 1, (yyvsp[0].grammar_tree)); }
#line 2073 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 289 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Exprs", 1, (yyvsp[0].grammar_tree)); }
#line 2079 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 290 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Exprs", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2085 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 293 "cmm.y" /* yacc.c:1646  */
    { 
       (yyval.grammar_tree) = CreateGrammarTree("ForStmt", 9, (yyvsp[-8].grammar_tree), (yyvsp[-7].grammar_tree), (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
       (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope;
       }
#line 2094 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 299 "cmm.y" /* yacc.c:1646  */
    { 
         (yyval.grammar_tree) = CreateGrammarTree("WhileStmt", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
         (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope;
         }
#line 2103 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 305 "cmm.y" /* yacc.c:1646  */
    { 
      (yyval.grammar_tree) = CreateGrammarTree("IfStmt", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
      (yyval.grammar_tree)->localscope = (yyvsp[0].grammar_tree)->localscope;
      }
#line 2112 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 309 "cmm.y" /* yacc.c:1646  */
    { 
      (yyval.grammar_tree) = CreateGrammarTree("IfStmt", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
      (yyval.grammar_tree)->localscope = MergeLocalScope((yyvsp[-2].grammar_tree)->localscope, (yyvsp[0].grammar_tree)->localscope);
      }
#line 2121 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 315 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ReturnStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2127 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 316 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ReturnStmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2133 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 319 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("BreakStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2139 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 322 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ContinueStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2145 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 325 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PrintStmt", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2151 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 328 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("BoolExpr", 1, (yyvsp[0].grammar_tree)); }
#line 2157 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 331 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2163 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 332 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2169 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 333 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2175 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 334 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2181 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 335 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2187 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 336 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2193 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 337 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2199 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 338 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2205 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 339 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2211 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 340 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2217 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 341 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2223 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 342 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2229 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 343 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2235 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 344 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2241 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 345 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2247 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 346 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2253 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 347 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2259 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 348 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2265 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 349 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2271 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 350 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2277 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 351 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2283 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 352 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2289 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 353 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2295 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 354 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2301 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 355 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2307 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 358 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2313 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 359 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2319 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 360 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2325 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 361 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2331 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 362 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2337 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 363 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2343 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 364 "cmm.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2349 "cmm.tab.c" /* yacc.c:1646  */
    break;


#line 2353 "cmm.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 367 "cmm.y" /* yacc.c:1906  */


#include<stdarg.h>

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

