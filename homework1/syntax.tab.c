/* A Bison parser, made by GNU Bison 3.7.91.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30791

/* Bison version string.  */
#define YYBISON_VERSION "3.7.91"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./src/syntax.y"

    #include <stdio.h>
    #include "src/lex.c"
    #include "./src/tree/node.h"
    node_ptr root;
    extern int SynError;
    #define YYERROR_VERBOSE 1

#line 80 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_SEMI = 6,                       /* SEMI  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_ASSIGN = 8,                     /* ASSIGN  */
  YYSYMBOL_RELOP = 9,                      /* RELOP  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_STAR = 12,                      /* STAR  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_NOT = 16,                       /* NOT  */
  YYSYMBOL_DOT = 17,                       /* DOT  */
  YYSYMBOL_TYPE = 18,                      /* TYPE  */
  YYSYMBOL_LP = 19,                        /* LP  */
  YYSYMBOL_RP = 20,                        /* RP  */
  YYSYMBOL_LB = 21,                        /* LB  */
  YYSYMBOL_RB = 22,                        /* RB  */
  YYSYMBOL_LC = 23,                        /* LC  */
  YYSYMBOL_RC = 24,                        /* RC  */
  YYSYMBOL_STRUCT = 25,                    /* STRUCT  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_OCTAL = 30,                     /* OCTAL  */
  YYSYMBOL_HEXNUM = 31,                    /* HEXNUM  */
  YYSYMBOL_LOWER_THAN_ELSE = 32,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_Program = 34,                   /* Program  */
  YYSYMBOL_ExtDefList = 35,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 36,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 37,                /* ExtDecList  */
  YYSYMBOL_Specifier = 38,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 39,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 40,                    /* OptTag  */
  YYSYMBOL_Tag = 41,                       /* Tag  */
  YYSYMBOL_VarDec = 42,                    /* VarDec  */
  YYSYMBOL_FunDec = 43,                    /* FunDec  */
  YYSYMBOL_VarList = 44,                   /* VarList  */
  YYSYMBOL_ParamDec = 45,                  /* ParamDec  */
  YYSYMBOL_CompSt = 46,                    /* CompSt  */
  YYSYMBOL_StmtList = 47,                  /* StmtList  */
  YYSYMBOL_Stmt = 48,                      /* Stmt  */
  YYSYMBOL_DefList = 49,                   /* DefList  */
  YYSYMBOL_Def = 50,                       /* Def  */
  YYSYMBOL_DecList = 51,                   /* DecList  */
  YYSYMBOL_Dec = 52,                       /* Dec  */
  YYSYMBOL_Exp = 53,                       /* Exp  */
  YYSYMBOL_Args = 54                       /* Args  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  119

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    84,    84,    86,    87,    89,    90,    91,    93,    94,
      98,    99,   101,   102,   104,   105,   107,   111,   112,   113,
     115,   116,   118,   119,   121,   125,   127,   128,   130,   131,
     132,   133,   134,   135,   136,   140,   141,   143,   145,   146,
     148,   149,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   175,   176
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "ID",
  "SEMI", "COMMA", "ASSIGN", "RELOP", "PLUS", "MINUS", "STAR", "DIV",
  "AND", "OR", "NOT", "DOT", "TYPE", "LP", "RP", "LB", "RB", "LC", "RC",
  "STRUCT", "RETURN", "IF", "ELSE", "WHILE", "OCTAL", "HEXNUM",
  "LOWER_THAN_ELSE", "$accept", "Program", "ExtDefList", "ExtDef",
  "ExtDecList", "Specifier", "StructSpecifier", "OptTag", "Tag", "VarDec",
  "FunDec", "VarList", "ParamDec", "CompSt", "StmtList", "Stmt", "DefList",
  "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-28)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,   -97,    -4,     3,   -97,   -14,    42,   -97,    -8,    17,
     -97,   -97,   -97,     7,    31,   -97,    50,    -5,    43,   -14,
     -97,     6,   -97,    48,    66,   -14,   -97,    48,    58,   -14,
     -97,    48,    54,    77,   -97,   -97,    64,    41,     2,    81,
      90,   -97,   -97,    75,   -97,   -14,   -97,   -97,   -97,    85,
     110,   110,   110,   110,    87,    88,   -97,   -97,    75,   -97,
      86,    41,   143,   110,   -97,    48,   -97,    89,   271,    34,
     201,   157,   110,   110,   -97,   -97,   -97,   110,   110,   110,
     110,   110,   110,   110,   110,   107,   110,   243,   -97,   -97,
     172,    96,   -97,   -97,   215,   229,   243,    68,   271,   271,
      34,    34,   269,   256,   -97,   186,   110,   -97,    72,    72,
     -97,   -97,    94,   122,   -97,    72,    72,   -97,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    10,    15,     0,     2,     4,     0,    11,    16,     0,
      13,     1,     3,     0,    17,     6,     0,     8,     0,    36,
      19,     0,     5,     0,     0,    36,     7,     0,     0,    36,
      21,     0,     0,    23,    17,     9,     0,     0,    40,     0,
      38,    12,    35,    24,    20,     0,    18,    59,    60,    17,
       0,     0,     0,     0,     0,     0,    61,    62,    58,    29,
       0,     0,     0,     0,    37,     0,    22,     0,    51,    52,
       0,     0,     0,     0,    25,    26,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    39,    54,
      64,     0,    50,    30,     0,     0,    42,    45,    46,    47,
      48,    49,    43,    44,    56,     0,     0,    53,     0,     0,
      55,    63,    32,     0,    34,     0,     0,    33,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   112,   -97,    95,     9,   -97,   -97,   -97,    -6,
     -97,    78,   -97,   106,    83,   -96,    33,   -97,    60,   -97,
     -45,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    16,    27,     7,     9,    10,    58,
      18,    32,    33,    59,    60,    61,    28,    29,    39,    40,
      62,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      17,     8,    23,    11,     1,    68,    69,    70,    71,     6,
      63,     2,   112,   114,     6,   -14,    24,    17,    87,   117,
     118,    38,    90,    24,     1,    43,    30,    94,    95,    20,
      31,     2,    96,    97,    98,    99,   100,   101,   102,   103,
      19,   105,    13,    13,    47,    48,    49,    14,    15,    13,
      21,    85,    50,    34,    31,    86,    22,    51,    37,    38,
      52,    90,    42,   113,    25,   -27,    25,    53,    54,    36,
      55,    56,    57,    13,    44,    47,    48,    49,    79,    80,
      81,    82,    41,    50,    45,    85,    46,    64,    51,    86,
      13,    52,    47,    48,    49,    25,    24,    65,    53,    54,
      50,    55,    56,    57,    67,    51,    72,    73,    52,    89,
      74,    13,   104,    47,    48,    49,   107,    12,    35,    56,
      57,    50,   115,    66,    26,    88,    51,   111,    76,    52,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
      56,    57,     0,    86,    75,     0,     0,     0,     0,    76,
     116,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,     0,     0,    93,    86,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    85,     0,     0,     0,    86,   106,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
       0,     0,     0,    86,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    85,     0,     0,     0,    86,   110,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,     0,
       0,    92,    86,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,     0,     0,   108,    86,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    85,     0,     0,   109,
      86,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,     0,     0,     0,    86,    78,    79,    80,    81,    82,
      83,     0,     0,    85,     0,     0,     0,    86,    78,    79,
      80,    81,    82,    81,    82,     0,    85,     0,    85,     0,
      86,     0,    86
};

static const yytype_int8 yycheck[] =
{
       6,     5,     7,     0,    18,    50,    51,    52,    53,     0,
       8,    25,   108,   109,     5,    23,    21,    23,    63,   115,
     116,    27,    67,    21,    18,    31,    20,    72,    73,    22,
      21,    25,    77,    78,    79,    80,    81,    82,    83,    84,
      23,    86,     1,     1,     3,     4,     5,     5,     6,     1,
      19,    17,    11,     5,    45,    21,     6,    16,    25,    65,
      19,   106,    29,   108,    23,    24,    23,    26,    27,     3,
      29,    30,    31,     1,    20,     3,     4,     5,    10,    11,
      12,    13,    24,    11,     7,    17,    22,     6,    16,    21,
       1,    19,     3,     4,     5,    23,    21,     7,    26,    27,
      11,    29,    30,    31,    19,    16,    19,    19,    19,    20,
      24,     1,     5,     3,     4,     5,    20,     5,    23,    30,
      31,    11,    28,    45,    18,    65,    16,   106,     6,    19,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      30,    31,    -1,    21,    61,    -1,    -1,    -1,    -1,     6,
      28,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,     6,    21,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    21,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    21,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    21,    22,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    21,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    21,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      21,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    21,     9,    10,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,     9,    10,
      11,    12,    13,    12,    13,    -1,    17,    -1,    17,    -1,
      21,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    25,    34,    35,    36,    38,    39,     5,    40,
      41,     0,    35,     1,     5,     6,    37,    42,    43,    23,
      22,    19,     6,     7,    21,    23,    46,    38,    49,    50,
      20,    38,    44,    45,     5,    37,     3,    49,    42,    51,
      52,    24,    49,    42,    20,     7,    22,     3,     4,     5,
      11,    16,    19,    26,    27,    29,    30,    31,    42,    46,
      47,    48,    53,     8,     6,     7,    44,    19,    53,    53,
      53,    53,    19,    19,    24,    47,     6,     8,     9,    10,
      11,    12,    13,    14,    15,    17,    21,    53,    51,    20,
      53,    54,    20,     6,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,     5,    53,     7,    20,    20,    20,
      22,    54,    48,    53,    48,    28,    28,    48,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    37,    37,
      38,    38,    39,    39,    40,    40,    41,    42,    42,    42,
      43,    43,    44,    44,    45,    46,    47,    47,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    50,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     1,     3,
       1,     1,     5,     2,     1,     0,     1,     1,     4,     2,
       4,     3,     3,     1,     2,     4,     2,     0,     2,     1,
       3,     7,     5,     7,     5,     2,     0,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     4,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ExtDefList  */
#line 84 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Program",1,(yyvsp[0].pnode));root=(yyval.pnode);}
#line 1345 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: ExtDef ExtDefList  */
#line 86 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDefList",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1351 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: %empty  */
#line 87 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1357 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 89 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDef",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1363 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 90 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDef",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1369 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 91 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDef",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1375 "syntax.tab.c"
    break;

  case 8: /* ExtDecList: VarDec  */
#line 93 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDecList",1,(yyvsp[0].pnode));}
#line 1381 "syntax.tab.c"
    break;

  case 9: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 94 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDecList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1387 "syntax.tab.c"
    break;

  case 10: /* Specifier: TYPE  */
#line 98 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Specifier",1,(yyvsp[0].pnode));}
#line 1393 "syntax.tab.c"
    break;

  case 11: /* Specifier: StructSpecifier  */
#line 99 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Specifier",1,(yyvsp[0].pnode));}
#line 1399 "syntax.tab.c"
    break;

  case 12: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 101 "./src/syntax.y"
                                             {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StructSpecifier",5,(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1405 "syntax.tab.c"
    break;

  case 13: /* StructSpecifier: STRUCT Tag  */
#line 102 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StructSpecifier",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1411 "syntax.tab.c"
    break;

  case 14: /* OptTag: ID  */
#line 104 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"OptTag",1,(yyvsp[0].pnode));}
#line 1417 "syntax.tab.c"
    break;

  case 15: /* OptTag: %empty  */
#line 105 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1423 "syntax.tab.c"
    break;

  case 16: /* Tag: ID  */
#line 107 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Tag",1,(yyvsp[0].pnode));}
#line 1429 "syntax.tab.c"
    break;

  case 17: /* VarDec: ID  */
#line 111 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarDec",1,(yyvsp[0].pnode));}
#line 1435 "syntax.tab.c"
    break;

  case 18: /* VarDec: VarDec LB INT RB  */
#line 112 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarDec",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1441 "syntax.tab.c"
    break;

  case 19: /* VarDec: error RB  */
#line 113 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \"]\".\n", yylineno);}
#line 1447 "syntax.tab.c"
    break;

  case 20: /* FunDec: ID LP VarList RP  */
#line 115 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"FunDec",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1453 "syntax.tab.c"
    break;

  case 21: /* FunDec: ID LP RP  */
#line 116 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"FunDec",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1459 "syntax.tab.c"
    break;

  case 22: /* VarList: ParamDec COMMA VarList  */
#line 118 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1465 "syntax.tab.c"
    break;

  case 23: /* VarList: ParamDec  */
#line 119 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarList",1,(yyvsp[0].pnode));}
#line 1471 "syntax.tab.c"
    break;

  case 24: /* ParamDec: Specifier VarDec  */
#line 121 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ParamDec",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1477 "syntax.tab.c"
    break;

  case 25: /* CompSt: LC DefList StmtList RC  */
#line 125 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"CompSt",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1483 "syntax.tab.c"
    break;

  case 26: /* StmtList: Stmt StmtList  */
#line 127 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StmtList",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1489 "syntax.tab.c"
    break;

  case 27: /* StmtList: %empty  */
#line 128 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1495 "syntax.tab.c"
    break;

  case 28: /* Stmt: Exp SEMI  */
#line 130 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1501 "syntax.tab.c"
    break;

  case 29: /* Stmt: CompSt  */
#line 131 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",1,(yyvsp[0].pnode));}
#line 1507 "syntax.tab.c"
    break;

  case 30: /* Stmt: RETURN Exp SEMI  */
#line 132 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1513 "syntax.tab.c"
    break;

  case 31: /* Stmt: IF LP Exp RP Exp ELSE Stmt  */
#line 133 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \";\"\n", yylineno);}
#line 1519 "syntax.tab.c"
    break;

  case 32: /* Stmt: IF LP Exp RP Stmt  */
#line 134 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",5,(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1525 "syntax.tab.c"
    break;

  case 33: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 135 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",7,(yyvsp[-6].pnode),(yyvsp[-5].pnode),(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1531 "syntax.tab.c"
    break;

  case 34: /* Stmt: WHILE LP Exp RP Stmt  */
#line 136 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",5,(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1537 "syntax.tab.c"
    break;

  case 35: /* DefList: Def DefList  */
#line 140 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"DefList",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1543 "syntax.tab.c"
    break;

  case 36: /* DefList: %empty  */
#line 141 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1549 "syntax.tab.c"
    break;

  case 37: /* Def: Specifier DecList SEMI  */
#line 143 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Def",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1555 "syntax.tab.c"
    break;

  case 38: /* DecList: Dec  */
#line 145 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"DecList",1,(yyvsp[0].pnode));}
#line 1561 "syntax.tab.c"
    break;

  case 39: /* DecList: Dec COMMA DecList  */
#line 146 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"DecList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1567 "syntax.tab.c"
    break;

  case 40: /* Dec: VarDec  */
#line 148 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Dec",1,(yyvsp[0].pnode));}
#line 1573 "syntax.tab.c"
    break;

  case 41: /* Dec: VarDec ASSIGN Exp  */
#line 149 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Dec",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1579 "syntax.tab.c"
    break;

  case 42: /* Exp: Exp ASSIGN Exp  */
#line 153 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1585 "syntax.tab.c"
    break;

  case 43: /* Exp: Exp AND Exp  */
#line 154 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1591 "syntax.tab.c"
    break;

  case 44: /* Exp: Exp OR Exp  */
#line 155 "./src/syntax.y"
                                   {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1597 "syntax.tab.c"
    break;

  case 45: /* Exp: Exp RELOP Exp  */
#line 156 "./src/syntax.y"
                                      {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1603 "syntax.tab.c"
    break;

  case 46: /* Exp: Exp PLUS Exp  */
#line 157 "./src/syntax.y"
                                     {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1609 "syntax.tab.c"
    break;

  case 47: /* Exp: Exp MINUS Exp  */
#line 158 "./src/syntax.y"
                                      {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1615 "syntax.tab.c"
    break;

  case 48: /* Exp: Exp STAR Exp  */
#line 159 "./src/syntax.y"
                                     {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1621 "syntax.tab.c"
    break;

  case 49: /* Exp: Exp DIV Exp  */
#line 160 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1627 "syntax.tab.c"
    break;

  case 50: /* Exp: LP Exp RP  */
#line 161 "./src/syntax.y"
                                  {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1633 "syntax.tab.c"
    break;

  case 51: /* Exp: MINUS Exp  */
#line 162 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1639 "syntax.tab.c"
    break;

  case 52: /* Exp: NOT Exp  */
#line 163 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1645 "syntax.tab.c"
    break;

  case 53: /* Exp: ID LP Args RP  */
#line 164 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1651 "syntax.tab.c"
    break;

  case 54: /* Exp: ID LP RP  */
#line 165 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1657 "syntax.tab.c"
    break;

  case 55: /* Exp: Exp LB Exp RB  */
#line 166 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1663 "syntax.tab.c"
    break;

  case 56: /* Exp: Exp DOT ID  */
#line 167 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1669 "syntax.tab.c"
    break;

  case 57: /* Exp: ID  */
#line 168 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1675 "syntax.tab.c"
    break;

  case 58: /* Exp: VarDec  */
#line 169 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1681 "syntax.tab.c"
    break;

  case 59: /* Exp: INT  */
#line 170 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1687 "syntax.tab.c"
    break;

  case 60: /* Exp: FLOAT  */
#line 171 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1693 "syntax.tab.c"
    break;

  case 61: /* Exp: OCTAL  */
#line 172 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1699 "syntax.tab.c"
    break;

  case 62: /* Exp: HEXNUM  */
#line 173 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1705 "syntax.tab.c"
    break;

  case 63: /* Args: Exp COMMA Args  */
#line 175 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Args",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1711 "syntax.tab.c"
    break;

  case 64: /* Args: Exp  */
#line 176 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Args",1,(yyvsp[0].pnode));}
#line 1717 "syntax.tab.c"
    break;


#line 1721 "syntax.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 179 "./src/syntax.y"

// print the syntax type error
yyerror(char* msg){
    //  fprintf(stderr,"Error type B at line %d: %s.\n", yylineno, msg);
}
