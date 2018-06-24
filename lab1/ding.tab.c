/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ding.y" /* yacc.c:339  */

    #include<stdio.h>
    #include<unistd.h>
    #include"GrammarTree.h"
    #include"lex.yy.c"
    void yyerror(const char* fmt, ...);

#line 74 "ding.tab.c" /* yacc.c:339  */

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
   by #include "ding.tab.h".  */
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
#line 12 "ding.y" /* yacc.c:355  */

    GrammarTree grammar_tree;

#line 180 "ding.tab.c" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 209 "ding.tab.c" /* yacc.c:358  */

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
#define YYLAST   575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

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
       0,    51,    51,    67,    85,    86,    89,    90,    91,    94,
      95,    96,    99,   100,   103,   104,   105,   108,   109,   110,
     111,   112,   113,   114,   117,   118,   121,   122,   125,   128,
     129,   132,   133,   134,   137,   138,   141,   142,   143,   146,
     149,   152,   155,   156,   159,   160,   163,   164,   167,   168,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     183,   184,   185,   186,   189,   190,   191,   192,   195,   196,
     199,   200,   203,   204,   207,   208,   211,   212,   215,   218,
     219,   222,   223,   226,   229,   232,   235,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   266,   267,   268,   269,   270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SPSEMICOLON", "SPCOLON", "SPCOMMA",
  "SPDOT", "SPLEFTBRACE", "SPRIGHTBRACE", "SPLEFTPRNT", "SPRIGHTPRNT",
  "SPLEFTBRACKET", "SPRIGHTBRACKET", "OPPLUS", "OPMINUS", "OPMULTIPLY",
  "OPDIVIDE", "OPASSIGN", "OPAND", "OPOR", "OPNOT", "OPEQUAL",
  "OPNOTEQUAL", "OPGREAT", "OPLIGHT", "OPGREATEQ", "OPLIGHTEQ",
  "OPSELFADD", "OPSELFMINUS", "TYPEVOID", "TYPEINTEGER", "TYPEFLOAT",
  "TYPEBOOL", "TYPESTRING", "KEYPUBLIC", "KEYPRIVATE", "KEYPROTECTED",
  "KEYMAIN", "KEYCLASS", "KEYNEW", "KEYEXTENDS", "KEYTHIS",
  "KEYINSTANCEOF", "KEYIF", "KEYELSE", "KEYFOR", "KEYWHILE", "KEYBREAK",
  "KEYCONTINUE", "KEYRETURN", "KEYSTATIC", "KEYPRINT", "KEYREADINTEGER",
  "KEYREADLINE", "KEYREADFLOAT", "CONSTANTNULL", "CONSTANTBOOL",
  "CONSTANTINT", "CONSTANTFLOAT", "CONSTANTSTRING", "IDENTIFIER",
  "LOWER_THAN_ELSE", "$accept", "Program", "ProgramFileds", "ProgramFiled",
  "VariableDef", "CommaIdentifiers", "Variable", "Type", "Variables",
  "Formals", "MainFunction", "FunctionDef", "ClassDef", "PriviligeFields",
  "PriviligeField", "PublicDeclaration", "ProtectedDeclaration",
  "PrivateDeclaration", "Fields", "Field", "StmtBlock", "Stmts", "Stmt",
  "SimpleStmt", "LValue", "SelfLvalue", "Call", "Actuals", "Exprs",
  "ForStmt", "WhileStmt", "IfStmt", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "PrintStmt", "BoolExpr", "Expr", "Constant", YY_NULLPTR
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

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -64

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     394,    87,  -137,  -137,  -137,  -137,  -137,   -47,   527,    21,
     141,  -137,  -137,   102,    -1,  -137,  -137,  -137,  -137,     2,
     -35,     0,  -137,   537,  -137,  -137,  -137,   -25,    74,   113,
      51,    47,   131,    37,  -137,    89,    83,  -137,   115,   123,
    -137,    77,  -137,   527,   134,   136,   139,    11,  -137,   384,
     384,   384,   140,   527,   152,  -137,  -137,  -137,   157,     4,
     173,   170,  -137,  -137,  -137,  -137,  -137,   178,  -137,  -137,
    -137,   384,  -137,  -137,   131,   172,   179,  -137,   527,    84,
    -137,    76,    84,    84,   157,   182,   155,  -137,  -137,  -137,
    -137,  -137,   101,   293,   347,   347,    70,  -137,   183,   186,
     190,   196,  -137,  -137,   347,   208,   210,   211,   212,  -137,
    -137,  -137,  -137,  -137,   216,  -137,  -137,   218,   155,   224,
       3,    19,    23,  -137,  -137,  -137,   231,   233,   234,   246,
     508,  -137,   191,    60,  -137,  -137,   445,   353,   111,   241,
     244,   347,   347,   267,   347,   508,   347,   242,   249,   255,
     347,  -137,  -137,  -137,   347,  -137,  -137,  -137,  -137,  -137,
    -137,   219,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   268,  -137,   270,   324,   424,
     272,   508,    44,   274,   275,   114,   508,  -137,  -137,  -137,
     276,   279,   508,   280,   466,   353,   353,   111,   111,   217,
     529,   277,   277,   277,   277,   277,   277,   347,  -137,   487,
     235,   215,   243,   347,   215,   347,  -137,  -137,   347,  -137,
    -137,  -137,   284,   257,   294,   307,  -137,   508,   301,  -137,
     215,   215,   347,  -137,  -137,  -137,   302,   215,  -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    21,    17,    18,    19,    20,     0,     0,     0,
       0,     4,     6,     0,     0,     7,     8,    11,    33,    22,
       0,     0,     1,     0,     5,     2,     9,     0,     0,     0,
       0,    14,     0,     0,    22,     0,    21,    12,     0,     0,
      10,     0,    23,    26,     0,     0,     0,     0,    34,     0,
       0,     0,     0,    26,     0,    16,    15,    13,    24,     0,
      27,     0,    39,    41,    40,    31,    35,     0,    44,    45,
      36,     0,    37,    38,     0,     0,     0,    14,     0,     0,
      43,     0,     0,     0,    25,     0,     0,    29,    32,    30,
      28,    47,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    83,    84,    81,     0,     0,     0,     0,   117,
     115,   113,   114,   116,    64,    50,    59,     0,     0,     0,
      88,    67,    90,    54,    53,    52,     0,     0,     0,     0,
       0,    87,     0,    88,    67,    90,     0,    96,   105,     0,
       0,     0,     0,    60,     0,    82,     0,     0,     0,     0,
      72,    46,    49,    51,     0,    68,    69,    57,    55,    56,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    74,   106,   107,   108,
       0,    73,    61,    65,     0,    92,    93,    94,    95,   103,
     104,   101,   102,    99,    97,   100,    98,     0,   109,     0,
       0,     0,     0,     0,     0,     0,    85,    70,    72,    66,
     112,   110,     0,    79,     0,     0,    78,    75,     0,   111,
       0,     0,    60,    71,    80,    77,     0,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,   304,    18,  -137,   -37,    43,  -137,   262,
    -137,    17,  -137,   254,   -42,  -137,  -137,  -137,   -27,  -137,
     -45,   198,   -54,  -136,   -86,   -82,   -78,    99,   184,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -130,   -92,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,   115,    29,    13,    59,    60,    61,
      25,    69,    16,    47,    48,    49,    50,    51,    70,    71,
     116,   117,   118,   119,   133,   134,   135,   190,   191,   123,
     124,   125,   126,   127,   128,   129,   180,   130,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   136,   137,   138,   121,    66,    58,   183,   122,    32,
      30,    30,   145,    19,   184,    30,    58,    15,    12,    65,
     154,    22,   -62,    72,    73,    34,   -63,    15,    12,   -62,
     155,   156,   120,   -63,    87,    37,   121,    89,    90,    66,
     122,    84,    33,    14,    80,    44,    45,    46,   212,   179,
     181,    21,   181,    14,   186,    28,    43,   120,   186,    31,
      35,   121,   192,    42,    77,   122,    21,    68,    68,    68,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   225,    88,    85,   209,   155,   156,    68,
      17,    86,    14,    14,    14,    18,   236,    52,    53,     2,
       3,     4,     5,     6,    17,    26,   182,    27,    20,    91,
      44,    45,    46,    28,    14,   220,    40,   161,    41,   215,
      54,   181,   162,   227,   216,   120,   186,    55,   120,   121,
     139,    38,   121,   122,    39,    56,   122,    57,    62,   140,
      63,    -3,     1,    64,   120,   120,   120,    74,   121,   121,
     121,   120,   122,   122,   122,   121,    92,   223,   -60,   122,
     226,    76,    86,   -48,    93,    44,    45,    46,    28,    94,
       2,     3,     4,     5,     6,    95,   234,   235,    78,     7,
      79,    17,    82,   238,     2,     3,     4,     5,     6,    83,
      91,    23,   141,    20,    96,   142,    97,    98,    99,   143,
     100,   101,   102,   103,   104,   144,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    92,   146,   -60,   147,
     148,   149,    86,   161,    93,   150,   151,   153,   162,    94,
     163,   164,   165,   166,   157,    95,   158,   159,   169,   170,
     171,   172,   173,   174,     2,     3,     4,     5,     6,   160,
     177,   175,   187,    20,    96,   178,    97,    98,    99,   188,
     100,   101,   102,   103,   104,   189,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    93,   213,   207,   193,
     208,    94,   211,   161,   215,   214,   217,    95,   162,   218,
     163,   164,   165,   166,   229,   222,     2,     3,     4,     5,
       6,   230,    93,   224,   231,    20,    96,    94,    97,    98,
     232,   233,   237,    95,    24,    75,   152,   228,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    81,     0,
     185,   132,    96,    93,    97,    98,    42,     0,    94,     0,
       0,     0,     0,     0,    95,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,     0,    93,     0,     0,   161,
       0,    94,     0,    96,   162,    97,    98,    95,   165,   166,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    67,    96,     0,    97,    98,
       0,     0,   -42,     0,     0,     1,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,   -42,   -42,
     -42,     0,    20,     2,     3,     4,     5,     6,     0,   210,
     161,     0,     7,     0,     8,   162,     0,   163,   164,   165,
     166,     0,   167,   168,     8,   169,   170,   171,   172,   173,
     174,   161,     0,     0,     0,   176,   162,     0,   163,   164,
     165,   166,     0,   167,   168,     0,   169,   170,   171,   172,
     173,   174,   161,     0,     0,     0,     0,   162,   219,   163,
     164,   165,   166,     0,   167,   168,     0,   169,   170,   171,
     172,   173,   174,   161,     0,     0,     0,     0,   162,   221,
     163,   164,   165,   166,     0,   167,   168,     0,   169,   170,
     171,   172,   173,   174,   161,     0,     0,     0,     0,   162,
       0,   163,   164,   165,   166,     0,   167,   168,     0,   169,
     170,   171,   172,   173,   174,   161,     0,     0,     0,     0,
     162,     0,   163,   164,   165,   166,     0,   167,     0,     0,
     169,   170,   171,   172,   173,   174,     2,     3,     4,     5,
       6,     0,     0,     0,     0,    20,    36,     3,     4,     5,
       6,     0,     0,     0,     0,    20
};

static const yytype_int16 yycheck[] =
{
      86,    93,    94,    95,    86,    47,    43,   143,    86,     7,
      11,    11,   104,    60,   144,    11,    53,     0,     0,     8,
      17,     0,     3,    50,    51,    60,     3,    10,    10,    10,
      27,    28,   118,    10,    79,    60,   118,    82,    83,    81,
     118,    78,    40,     0,    71,    34,    35,    36,     4,   141,
     142,     8,   144,    10,   146,    11,     9,   143,   150,    60,
      60,   143,   154,    12,    60,   143,    23,    49,    50,    51,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   213,     8,     1,   178,    27,    28,    71,
       3,     7,    49,    50,    51,     8,   232,    60,     9,    29,
      30,    31,    32,    33,     3,     3,   143,     5,    38,     8,
      34,    35,    36,    11,    71,   207,     3,     6,     5,     5,
      37,   213,    11,   215,    10,   211,   218,    12,   214,   211,
      60,    57,   214,   211,    60,    12,   214,    60,     4,    96,
       4,     0,     1,     4,   230,   231,   232,     7,   230,   231,
     232,   237,   230,   231,   232,   237,     1,   211,     3,   237,
     214,     9,     7,     8,     9,    34,    35,    36,    11,    14,
      29,    30,    31,    32,    33,    20,   230,   231,     5,    38,
      10,     3,    10,   237,    29,    30,    31,    32,    33,    10,
       8,    50,     9,    38,    39,     9,    41,    42,    43,     9,
      45,    46,    47,    48,    49,     9,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     1,     9,     3,     9,
       9,     9,     7,     6,     9,     9,     8,     3,    11,    14,
      13,    14,    15,    16,     3,    20,     3,     3,    21,    22,
      23,    24,    25,    26,    29,    30,    31,    32,    33,     3,
       9,    60,    10,    38,    39,    11,    41,    42,    43,    10,
      45,    46,    47,    48,    49,    10,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     9,     3,    10,    60,
      10,    14,    10,     6,     5,    10,    10,    20,    11,     9,
      13,    14,    15,    16,    10,    60,    29,    30,    31,    32,
      33,    44,     9,    60,    10,    38,    39,    14,    41,    42,
       3,    10,    10,    20,    10,    53,   118,   218,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    74,    -1,
     146,    38,    39,     9,    41,    42,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,     9,    -1,    -1,     6,
      -1,    14,    -1,    39,    11,    41,    42,    20,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     1,    39,    -1,    41,    42,
      -1,    -1,     8,    -1,    -1,     1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    29,    30,    31,    32,    33,    -1,     5,
       6,    -1,    38,    -1,    50,    11,    -1,    13,    14,    15,
      16,    -1,    18,    19,    50,    21,    22,    23,    24,    25,
      26,     6,    -1,    -1,    -1,    10,    11,    -1,    13,    14,
      15,    16,    -1,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,     6,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,     6,    -1,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    16,    -1,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,     6,    -1,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    16,    -1,    18,    -1,    -1,
      21,    22,    23,    24,    25,    26,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    38,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    29,    30,    31,    32,    33,    38,    50,    63,
      64,    65,    66,    68,    69,    73,    74,     3,     8,    60,
      38,    69,     0,    50,    65,    72,     3,     5,    11,    67,
      11,    60,     7,    40,    60,    60,    29,    60,    57,    60,
       3,     5,    12,     9,    34,    35,    36,    75,    76,    77,
      78,    79,    60,     9,    37,    12,    12,    60,    68,    69,
      70,    71,     4,     4,     4,     8,    76,     1,    66,    73,
      80,    81,    80,    80,     7,    71,     9,    60,     5,    10,
      80,    75,    10,    10,    68,     1,     7,    82,     8,    82,
      82,     8,     1,     9,    14,    20,    39,    41,    42,    43,
      45,    46,    47,    48,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    66,    82,    83,    84,    85,
      86,    87,    88,    91,    92,    93,    94,    95,    96,    97,
      99,   100,    38,    86,    87,    88,    99,    99,    99,    60,
      69,     9,     9,     9,     9,    99,     9,     9,     9,     9,
       9,     8,    83,     3,    17,    27,    28,     3,     3,     3,
       3,     6,    11,    13,    14,    15,    16,    18,    19,    21,
      22,    23,    24,    25,    26,    60,    10,     9,    11,    99,
      98,    99,    68,    85,    98,    90,    99,    10,    10,    10,
      89,    90,    99,    60,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    10,    10,    99,
       5,    10,     4,     3,    10,     5,    10,    10,     9,    12,
      99,    12,    60,    84,    60,    98,    84,    99,    89,    10,
      44,    10,     3,    10,    84,    84,    85,    10,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    65,    65,    65,    66,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    71,    71,    72,    73,
      73,    74,    74,    74,    75,    75,    76,    76,    76,    77,
      78,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    86,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    93,
      93,    94,    94,    95,    96,    97,    98,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     1,     1,     1,     2,
       3,     2,     2,     3,     2,     4,     4,     1,     1,     1,
       1,     1,     2,     3,     1,     3,     0,     1,     6,     6,
       7,     5,     7,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     3,     2,     0,     2,
       1,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       0,     3,     1,     1,     1,     3,     4,     1,     2,     2,
       4,     6,     0,     1,     1,     3,     9,     7,     5,     5,
       7,     1,     2,     1,     1,     4,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     4,
       5,     6,     5,     1,     1,     1,     1,     1
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
#line 51 "ding.y" /* yacc.c:1646  */
    { 
       (yyval.grammar_tree) = CreateGrammarTree("Program", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); 
       if (two_tuples_trigger)
       {
           printf("__________________________________________________\n\n");
           printf("The two-tuples of \"Lexical Analyzing\" are printed!\n");
           printf("__________________________________________________\n");
       }
       if (!gmerror) {
           printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
           printf("__________________________________________________\n\n"); 
           TraverseGrammerTree((yyval.grammar_tree), 0);
           printf("__________________________________________________\n\n"); 
           printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
       }
       }
#line 1636 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "ding.y" /* yacc.c:1646  */
    { 
       (yyval.grammar_tree) = CreateGrammarTree("Program", 1, (yyvsp[0].grammar_tree)); 
       if (two_tuples_trigger)
       {
           printf("__________________________________________________\n\n");
           printf("The two-tuples of \"Lexical Analyzing\" are printed!\n");
           printf("__________________________________________________\n");
       }
       if (!gmerror) {
           printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
           printf("__________________________________________________\n\n"); 
           TraverseGrammerTree((yyval.grammar_tree), 0);
           printf("__________________________________________________\n\n"); 
           printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
       }
       }
#line 1657 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProgramFileds", 1, (yyvsp[0].grammar_tree)); }
#line 1663 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 86 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProgramFileds", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1669 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProgramFiled", 1, (yyvsp[0].grammar_tree)); }
#line 1675 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 90 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProgramFiled", 1, (yyvsp[0].grammar_tree)); }
#line 1681 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProgramFiled", 1, (yyvsp[0].grammar_tree)); }
#line 1687 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("VariableDef", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1693 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("VariableDef", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1699 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 96 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("VariableDef", 1, (yyvsp[0].grammar_tree)); gmerror += 1; }
#line 1705 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 99 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("CommaIdentifiers", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1711 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 100 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("CommaIdentifiers", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1717 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Variable", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1723 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 104 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Variable", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1729 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 105 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Variable", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1735 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); }
#line 1741 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 109 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); }
#line 1747 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 110 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); }
#line 1753 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 111 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); }
#line 1759 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 1, (yyvsp[0].grammar_tree)); }
#line 1765 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1771 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Type", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1777 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Variables", 1, (yyvsp[0].grammar_tree)); }
#line 1783 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 118 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Variables", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1789 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Formals", 0, -1); }
#line 1795 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Formals", 1, (yyvsp[0].grammar_tree)); }
#line 1801 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 125 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("FunctionDef", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1807 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 128 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("FunctionDef", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1813 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("FunctionDef", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1819 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ClassDef", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1825 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 133 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ClassDef", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1831 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 134 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ClassDef", 1, (yyvsp[0].grammar_tree)); gmerror += 1; }
#line 1837 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PriviligeFields", 1, (yyvsp[0].grammar_tree)); }
#line 1843 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PriviligeFields", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1849 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 141 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PriviligeField", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1855 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 142 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PriviligeField", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1861 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 143 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PriviligeField", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1867 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 146 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PublicDeclaration", 1, (yyvsp[-1].grammar_tree)); }
#line 1873 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 149 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ProtectedDeclaration", 1, (yyvsp[-1].grammar_tree)); }
#line 1879 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 152 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PrivateDeclaration", 1, (yyvsp[-1].grammar_tree)); }
#line 1885 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 155 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Fields", 0, -1); }
#line 1891 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 156 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Fields", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1897 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 159 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Field", 1, (yyvsp[0].grammar_tree)); }
#line 1903 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 160 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Field", 1, (yyvsp[0].grammar_tree)); }
#line 1909 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 163 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("StmtBlock", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1915 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 164 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("StmtBlock", 1, (yyvsp[0].grammar_tree)); gmerror += 1; }
#line 1921 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 167 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmts", 0, -1); }
#line 1927 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmts", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1933 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 171 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); }
#line 1939 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 172 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1945 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 173 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); }
#line 1951 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 174 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); }
#line 1957 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 175 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); }
#line 1963 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 176 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1969 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 177 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1975 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 178 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1981 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 179 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 1987 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Stmt", 1, (yyvsp[0].grammar_tree)); }
#line 1993 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 183 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 0, -1); }
#line 1999 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 184 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2005 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 185 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2011 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 186 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SimpleStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2017 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 1, (yyvsp[0].grammar_tree)); }
#line 2023 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 190 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2029 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2035 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 192 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("LValue", 1, (yyvsp[0].grammar_tree)); }
#line 2041 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 195 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SelfLvalue", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2047 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 196 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("SelfLvalue", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2053 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 199 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Call", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2059 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 200 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Call", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2065 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 203 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Actuals", 0, -1); }
#line 2071 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 204 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Actuals", 1, (yyvsp[0].grammar_tree)); }
#line 2077 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 207 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Exprs", 1, (yyvsp[0].grammar_tree)); }
#line 2083 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 208 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Exprs", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2089 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 211 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ForStmt", 9, (yyvsp[-8].grammar_tree), (yyvsp[-7].grammar_tree), (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2095 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 212 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ForStmt", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2101 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 215 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("WhileStmt", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2107 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 218 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("IfStmt", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2113 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 219 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("IfStmt", 7, (yyvsp[-6].grammar_tree), (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2119 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 222 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ReturnStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2125 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 223 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ReturnStmt", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2131 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 226 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("BreakStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2137 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 229 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("ContinueStmt", 1, (yyvsp[0].grammar_tree)); }
#line 2143 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 232 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("PrintStmt", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2149 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 235 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("BoolExpr", 1, (yyvsp[0].grammar_tree)); }
#line 2155 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 238 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2161 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 239 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2167 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 240 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2173 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 241 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 1, (yyvsp[0].grammar_tree)); }
#line 2179 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 242 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2185 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 243 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2191 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 244 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2197 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 245 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2203 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 246 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2209 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 247 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2215 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 248 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2221 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 249 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2227 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 250 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2233 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 251 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2239 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 252 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2245 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 253 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2251 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 254 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2257 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 255 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2263 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 256 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2269 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 257 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2275 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 258 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2281 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 259 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2287 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 260 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 4, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2293 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 261 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2299 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 262 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 6, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2305 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 263 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Expr", 5, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree)); }
#line 2311 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 266 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2317 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 267 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2323 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 268 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2329 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 269 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2335 "ding.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 270 "ding.y" /* yacc.c:1646  */
    { (yyval.grammar_tree) = CreateGrammarTree("Constant", 1, (yyvsp[0].grammar_tree)); }
#line 2341 "ding.tab.c" /* yacc.c:1646  */
    break;


#line 2345 "ding.tab.c" /* yacc.c:1646  */
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
#line 273 "ding.y" /* yacc.c:1906  */


#include<stdarg.h>

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Error type B at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

