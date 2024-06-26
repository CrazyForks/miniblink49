// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         xpathyyparse
#define yylex           xpathyylex
#define yyerror         xpathyyerror
#define yylval          xpathyylval
#define yychar          xpathyychar
#define yydebug         xpathyydebug
#define yynerrs         xpathyynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 28 "xml\\XPathGrammar.y"


#include "config.h"

#include "core/xml/XPathFunctions.h"
#include "core/xml/XPathNSResolver.h"
#include "core/xml/XPathParser.h"
#include "core/xml/XPathPath.h"
#include "core/xml/XPathPredicate.h"
#include "core/xml/XPathStep.h"
#include "core/xml/XPathVariableReference.h"
#include "wtf/FastMalloc.h"

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYDEBUG 0
#define YYMAXDEPTH 10000

using namespace blink;
using namespace XPath;



/* Line 189 of yacc.c  */
#line 108 "..\\..\\..\\..\\..\\..\\out\\Debug/gen/blink/core\\XPathGrammar.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MULOP = 258,
     RELOP = 259,
     EQOP = 260,
     MINUS = 261,
     PLUS = 262,
     AND = 263,
     OR = 264,
     AXISNAME = 265,
     NODETYPE = 266,
     PI = 267,
     FUNCTIONNAME = 268,
     LITERAL = 269,
     VARIABLEREFERENCE = 270,
     NUMBER = 271,
     DOTDOT = 272,
     SLASHSLASH = 273,
     NAMETEST = 274,
     XPATH_ERROR = 275
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 58 "xml\\XPathGrammar.y"

    blink::XPath::Step::Axis axis;
    blink::XPath::Step::NodeTest* nodeTest;
    blink::XPath::NumericOp::Opcode numop;
    blink::XPath::EqTestOp::Opcode eqop;
    String* str;
    blink::XPath::Expression* expr;
    blink::HeapVector<blink::Member<blink::XPath::Predicate>>* predList;
    blink::HeapVector<blink::Member<blink::XPath::Expression>>* argList;
    blink::XPath::Step* step;
    blink::XPath::LocationPath* locationPath;



/* Line 214 of yacc.c  */
#line 179 "..\\..\\..\\..\\..\\..\\out\\Debug/gen/blink/core\\XPathGrammar.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 71 "xml\\XPathGrammar.y"


static int xpathyylex(YYSTYPE* yylval) { return Parser::current()->lex(yylval); }
static void xpathyyerror(void*, const char*) { }



/* Line 264 of yacc.c  */
#line 199 "..\\..\\..\\..\\..\\..\\out\\Debug/gen/blink/core\\XPathGrammar.cpp"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  94

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      23,    24,     2,     2,    28,     2,    27,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    29,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    14,    17,    19,
      23,    27,    30,    33,    37,    41,    43,    45,    47,    51,
      55,    60,    61,    63,    65,    68,    72,    74,    76,    78,
      80,    84,    86,    88,    90,    94,    99,   101,   105,   107,
     109,   113,   115,   117,   121,   125,   127,   130,   132,   136,
     138,   142,   144,   148,   150,   154,   156,   160,   164,   166,
     170,   172
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    50,    -1,    34,    -1,    33,    -1,    21,
      -1,    21,    34,    -1,    41,    34,    -1,    35,    -1,    34,
      21,    35,    -1,    34,    41,    35,    -1,    37,    38,    -1,
      19,    38,    -1,    36,    37,    38,    -1,    36,    19,    38,
      -1,    42,    -1,    10,    -1,    22,    -1,    11,    23,    24,
      -1,    12,    23,    24,    -1,    12,    23,    14,    24,    -1,
      -1,    39,    -1,    40,    -1,    39,    40,    -1,    25,    31,
      26,    -1,    18,    -1,    27,    -1,    17,    -1,    15,    -1,
      23,    31,    24,    -1,    14,    -1,    16,    -1,    44,    -1,
      13,    23,    24,    -1,    13,    23,    45,    24,    -1,    46,
      -1,    45,    28,    46,    -1,    31,    -1,    48,    -1,    47,
      29,    48,    -1,    32,    -1,    49,    -1,    49,    21,    34,
      -1,    49,    41,    34,    -1,    43,    -1,    43,    39,    -1,
      51,    -1,    50,     9,    51,    -1,    52,    -1,    51,     8,
      52,    -1,    53,    -1,    52,     5,    53,    -1,    54,    -1,
      53,     4,    54,    -1,    55,    -1,    54,     7,    55,    -1,
      54,     6,    55,    -1,    56,    -1,    55,     3,    56,    -1,
      47,    -1,     6,    56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   126,   131,   138,   143,   148,   156,   162,
     167,   175,   183,   199,   207,   223,   227,   229,   236,   248,
     254,   264,   268,   272,   278,   285,   292,   299,   304,   311,
     317,   322,   328,   334,   338,   346,   356,   362,   369,   373,
     375,   384,   389,   391,   397,   406,   408,   415,   417,   424,
     426,   433,   435,   442,   444,   451,   453,   458,   465,   467,
     474,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MULOP", "RELOP", "EQOP", "MINUS",
  "PLUS", "AND", "OR", "AXISNAME", "NODETYPE", "PI", "FUNCTIONNAME",
  "LITERAL", "VARIABLEREFERENCE", "NUMBER", "DOTDOT", "SLASHSLASH",
  "NAMETEST", "XPATH_ERROR", "'/'", "'@'", "'('", "')'", "'['", "']'",
  "'.'", "','", "'|'", "$accept", "Expr", "LocationPath",
  "AbsoluteLocationPath", "RelativeLocationPath", "Step", "AxisSpecifier",
  "NodeTest", "OptionalPredicateList", "PredicateList", "Predicate",
  "DescendantOrSelf", "AbbreviatedStep", "PrimaryExpr", "FunctionCall",
  "ArgumentList", "Argument", "UnionExpr", "PathExpr", "FilterExpr",
  "OrExpr", "AndExpr", "EqualityExpr", "RelationalExpr", "AdditiveExpr",
  "MultiplicativeExpr", "UnaryExpr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    47,    64,    40,    41,    91,    93,    46,    44,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    33,    34,    34,
      34,    35,    35,    35,    35,    35,    36,    36,    37,    37,
      37,    38,    38,    39,    39,    40,    41,    42,    42,    43,
      43,    43,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    48,    48,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    53,    53,    54,    54,    54,    55,    55,
      56,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     3,
       3,     2,     2,     3,     3,     1,     1,     1,     3,     3,
       4,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     4,     1,     3,     1,     1,
       3,     1,     1,     3,     3,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    16,     0,     0,     0,    31,    29,    32,    28,
      26,    21,     5,    17,     0,    27,     0,    41,     4,     3,
       8,     0,    21,     0,    15,    45,    33,    60,    39,    42,
       2,    47,    49,    51,    53,    55,    58,    61,     0,     0,
       0,     0,    12,    22,    23,     6,     0,     1,     0,     0,
      21,    21,    11,     7,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,    19,    34,    38,
       0,    36,     0,    24,    30,     9,    10,    14,    13,    40,
      43,    44,    48,    50,    52,    54,    57,    56,    59,    20,
      35,     0,    25,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    69,    17,    18,    19,    20,    21,    22,    42,    43,
      44,    23,    24,    25,    26,    70,    71,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int8 yypact[] =
{
      75,    75,   -44,    -9,    -4,    18,   -44,   -44,   -44,   -44,
     -44,    19,    -2,   -44,    75,   -44,    36,   -44,   -44,    13,
     -44,    11,    19,    -2,   -44,    19,   -44,    21,   -44,    17,
      33,    39,    43,    45,    20,    48,   -44,   -44,    28,    -3,
      56,    75,   -44,    19,   -44,    13,    29,   -44,    -2,    -2,
      19,    19,   -44,    13,    19,    93,    -2,    -2,    75,    75,
      75,    75,    75,    75,    75,   -44,    30,   -44,   -44,   -44,
       0,   -44,    31,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
      13,    13,    39,    43,    45,    20,    48,    48,   -44,   -44,
     -44,    75,   -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,     2,   -44,   -44,   -11,   -43,   -44,    34,   -18,    35,
     -36,   -16,   -44,   -44,   -44,   -44,   -35,   -44,     3,   -44,
     -44,     1,    23,    16,    38,   -23,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      37,    45,    16,    49,    52,    75,    76,    73,     2,     3,
       4,    66,    53,    57,    38,     9,    46,    11,    73,    39,
      13,    67,     3,     4,    90,    15,    62,    63,    91,    49,
      50,    10,    77,    78,    48,    10,    47,    49,    56,    86,
      87,    40,    58,    72,    41,    80,    81,    59,    60,    61,
      55,    64,    65,    74,    89,    51,    93,    92,    79,    82,
      54,     0,     1,    88,    49,    49,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    84,    12,    13,    14,
      68,     1,    83,    15,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,    12,    13,    14,    85,
       0,     0,    15,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,     0,     0,     0,
      15
};

static const yytype_int8 yycheck[] =
{
       1,    12,     0,    19,    22,    48,    49,    43,    10,    11,
      12,    14,    23,    29,    23,    17,    14,    19,    54,    23,
      22,    24,    11,    12,    24,    27,     6,     7,    28,    45,
      19,    18,    50,    51,    21,    18,     0,    53,    21,    62,
      63,    23,     9,    41,    25,    56,    57,     8,     5,     4,
      29,     3,    24,    24,    24,    21,    91,    26,    55,    58,
      25,    -1,     6,    64,    80,    81,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    60,    21,    22,    23,
      24,     6,    59,    27,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    61,
      -1,    -1,    27,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    21,    22,    23,    27,    31,    32,    33,    34,
      35,    36,    37,    41,    42,    43,    44,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    56,    23,    23,
      23,    25,    38,    39,    40,    34,    31,     0,    21,    41,
      19,    37,    38,    34,    39,    29,    21,    41,     9,     8,
       5,     4,     6,     7,     3,    24,    14,    24,    24,    31,
      45,    46,    31,    40,    24,    35,    35,    38,    38,    48,
      34,    34,    51,    52,    53,    54,    55,    55,    56,    24,
      24,    28,    26,    46
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
      yyerror (parser, YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
		  Type, Value, parser); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, blink::XPath::Parser* parser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    blink::XPath::Parser* parser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, blink::XPath::Parser* parser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    blink::XPath::Parser* parser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, blink::XPath::Parser* parser)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser)
    YYSTYPE *yyvsp;
    int yyrule;
    blink::XPath::Parser* parser;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, blink::XPath::Parser* parser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    blink::XPath::Parser* parser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser);

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
int yyparse (blink::XPath::Parser* parser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (blink::XPath::Parser* parser)
#else
int
yyparse (parser)
    blink::XPath::Parser* parser;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 120 "xml\\XPathGrammar.y"
    {
        parser->m_topExpr = (yyvsp[(1) - (1)].expr);
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 127 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath)->setAbsolute(false);
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 132 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath)->setAbsolute(true);
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 139 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath) = new LocationPath;
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 144 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath) = (yyvsp[(2) - (2)].locationPath);
    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 149 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath) = (yyvsp[(2) - (2)].locationPath);
        (yyval.locationPath)->insertFirstStep((yyvsp[(1) - (2)].step));
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 157 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath) = new LocationPath;
        (yyval.locationPath)->appendStep((yyvsp[(1) - (1)].step));
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 163 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath)->appendStep((yyvsp[(3) - (3)].step));
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 168 "xml\\XPathGrammar.y"
    {
        (yyval.locationPath)->appendStep((yyvsp[(2) - (3)].step));
        (yyval.locationPath)->appendStep((yyvsp[(3) - (3)].step));
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 176 "xml\\XPathGrammar.y"
    {
        if ((yyvsp[(2) - (2)].predList))
            (yyval.step) = new Step(Step::ChildAxis, *(yyvsp[(1) - (2)].nodeTest), *(yyvsp[(2) - (2)].predList));
        else
            (yyval.step) = new Step(Step::ChildAxis, *(yyvsp[(1) - (2)].nodeTest));
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 184 "xml\\XPathGrammar.y"
    {
        AtomicString localName;
        AtomicString namespaceURI;
        if (!parser->expandQName(*(yyvsp[(1) - (2)].str), localName, namespaceURI)) {
            parser->m_gotNamespaceError = true;
            YYABORT;
        }

        if ((yyvsp[(2) - (2)].predList))
            (yyval.step) = new Step(Step::ChildAxis, Step::NodeTest(Step::NodeTest::NameTest, localName, namespaceURI), *(yyvsp[(2) - (2)].predList));
        else
            (yyval.step) = new Step(Step::ChildAxis, Step::NodeTest(Step::NodeTest::NameTest, localName, namespaceURI));
        parser->deleteString((yyvsp[(1) - (2)].str));
    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 200 "xml\\XPathGrammar.y"
    {
        if ((yyvsp[(3) - (3)].predList))
            (yyval.step) = new Step((yyvsp[(1) - (3)].axis), *(yyvsp[(2) - (3)].nodeTest), *(yyvsp[(3) - (3)].predList));
        else
            (yyval.step) = new Step((yyvsp[(1) - (3)].axis), *(yyvsp[(2) - (3)].nodeTest));
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 208 "xml\\XPathGrammar.y"
    {
        AtomicString localName;
        AtomicString namespaceURI;
        if (!parser->expandQName(*(yyvsp[(2) - (3)].str), localName, namespaceURI)) {
            parser->m_gotNamespaceError = true;
            YYABORT;
        }

        if ((yyvsp[(3) - (3)].predList))
            (yyval.step) = new Step((yyvsp[(1) - (3)].axis), Step::NodeTest(Step::NodeTest::NameTest, localName, namespaceURI), *(yyvsp[(3) - (3)].predList));
        else
            (yyval.step) = new Step((yyvsp[(1) - (3)].axis), Step::NodeTest(Step::NodeTest::NameTest, localName, namespaceURI));
        parser->deleteString((yyvsp[(2) - (3)].str));
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 230 "xml\\XPathGrammar.y"
    {
        (yyval.axis) = Step::AttributeAxis;
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 237 "xml\\XPathGrammar.y"
    {
        if (*(yyvsp[(1) - (3)].str) == "node")
            (yyval.nodeTest) = new Step::NodeTest(Step::NodeTest::AnyNodeTest);
        else if (*(yyvsp[(1) - (3)].str) == "text")
            (yyval.nodeTest) = new Step::NodeTest(Step::NodeTest::TextNodeTest);
        else if (*(yyvsp[(1) - (3)].str) == "comment")
            (yyval.nodeTest) = new Step::NodeTest(Step::NodeTest::CommentNodeTest);

        parser->deleteString((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 249 "xml\\XPathGrammar.y"
    {
        (yyval.nodeTest) = new Step::NodeTest(Step::NodeTest::ProcessingInstructionNodeTest);
        parser->deleteString((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 255 "xml\\XPathGrammar.y"
    {
        (yyval.nodeTest) = new Step::NodeTest(Step::NodeTest::ProcessingInstructionNodeTest, (yyvsp[(3) - (4)].str)->stripWhiteSpace());
        parser->deleteString((yyvsp[(1) - (4)].str));
        parser->deleteString((yyvsp[(3) - (4)].str));
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 264 "xml\\XPathGrammar.y"
    {
        (yyval.predList) = 0;
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 273 "xml\\XPathGrammar.y"
    {
        (yyval.predList) = new blink::HeapVector<blink::Member<Predicate>>;
        (yyval.predList)->append(new Predicate((yyvsp[(1) - (1)].expr)));
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 279 "xml\\XPathGrammar.y"
    {
        (yyval.predList)->append(new Predicate((yyvsp[(2) - (2)].expr)));
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 286 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = (yyvsp[(2) - (3)].expr);
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 293 "xml\\XPathGrammar.y"
    {
        (yyval.step) = new Step(Step::DescendantOrSelfAxis, Step::NodeTest(Step::NodeTest::AnyNodeTest));
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 300 "xml\\XPathGrammar.y"
    {
        (yyval.step) = new Step(Step::SelfAxis, Step::NodeTest(Step::NodeTest::AnyNodeTest));
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 305 "xml\\XPathGrammar.y"
    {
        (yyval.step) = new Step(Step::ParentAxis, Step::NodeTest(Step::NodeTest::AnyNodeTest));
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 312 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new VariableReference(*(yyvsp[(1) - (1)].str));
        parser->deleteString((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 318 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = (yyvsp[(2) - (3)].expr);
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 323 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new StringExpression(*(yyvsp[(1) - (1)].str));
        parser->deleteString((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 329 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new Number((yyvsp[(1) - (1)].str)->toDouble());
        parser->deleteString((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 339 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = createFunction(*(yyvsp[(1) - (3)].str));
        if (!(yyval.expr))
            YYABORT;
        parser->deleteString((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 347 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = createFunction(*(yyvsp[(1) - (4)].str), *(yyvsp[(3) - (4)].argList));
        if (!(yyval.expr))
            YYABORT;
        parser->deleteString((yyvsp[(1) - (4)].str));
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 357 "xml\\XPathGrammar.y"
    {
        (yyval.argList) = new blink::HeapVector<blink::Member<Expression>>;
        (yyval.argList)->append((yyvsp[(1) - (1)].expr));
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 363 "xml\\XPathGrammar.y"
    {
        (yyval.argList)->append((yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 376 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new Union;
        (yyval.expr)->addSubExpression((yyvsp[(1) - (3)].expr));
        (yyval.expr)->addSubExpression((yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 385 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = (yyvsp[(1) - (1)].locationPath);
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 392 "xml\\XPathGrammar.y"
    {
        (yyvsp[(3) - (3)].locationPath)->setAbsolute(true);
        (yyval.expr) = new Path((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].locationPath));
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 398 "xml\\XPathGrammar.y"
    {
        (yyvsp[(3) - (3)].locationPath)->insertFirstStep((yyvsp[(2) - (3)].step));
        (yyvsp[(3) - (3)].locationPath)->setAbsolute(true);
        (yyval.expr) = new Path((yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].locationPath));
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 409 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new Filter((yyvsp[(1) - (2)].expr), *(yyvsp[(2) - (2)].predList));
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 418 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new LogicalOp(LogicalOp::OP_Or, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 427 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new LogicalOp(LogicalOp::OP_And, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 436 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new EqTestOp((yyvsp[(2) - (3)].eqop), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 445 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new EqTestOp((yyvsp[(2) - (3)].eqop), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 454 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new NumericOp(NumericOp::OP_Add, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 459 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new NumericOp(NumericOp::OP_Sub, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 468 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new NumericOp((yyvsp[(2) - (3)].numop), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 477 "xml\\XPathGrammar.y"
    {
        (yyval.expr) = new Negative;
        (yyval.expr)->addSubExpression((yyvsp[(2) - (2)].expr));
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 1953 "..\\..\\..\\..\\..\\..\\out\\Debug/gen/blink/core\\XPathGrammar.cpp"
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
      yyerror (parser, YY_("syntax error"));
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
	    yyerror (parser, yymsg);
	  }
	else
	  {
	    yyerror (parser, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval, parser);
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
		  yystos[yystate], yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser);
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



/* Line 1675 of yacc.c  */
#line 483 "xml\\XPathGrammar.y"


