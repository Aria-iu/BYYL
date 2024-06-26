/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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
  YYSYMBOL_MIUASIGN = 12,                  /* MIUASIGN  */
  YYSYMBOL_STAR = 13,                      /* STAR  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_PERCENT = 15,                   /* PERCENT  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_NOT = 18,                       /* NOT  */
  YYSYMBOL_DOT = 19,                       /* DOT  */
  YYSYMBOL_TYPE = 20,                      /* TYPE  */
  YYSYMBOL_LP = 21,                        /* LP  */
  YYSYMBOL_RP = 22,                        /* RP  */
  YYSYMBOL_LB = 23,                        /* LB  */
  YYSYMBOL_RB = 24,                        /* RB  */
  YYSYMBOL_LC = 25,                        /* LC  */
  YYSYMBOL_RC = 26,                        /* RC  */
  YYSYMBOL_STRUCT = 27,                    /* STRUCT  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_WHILE = 31,                     /* WHILE  */
  YYSYMBOL_OCTAL = 32,                     /* OCTAL  */
  YYSYMBOL_HEXNUM = 33,                    /* HEXNUM  */
  YYSYMBOL_JINGHAO = 34,                   /* JINGHAO  */
  YYSYMBOL_INCLUDE = 35,                   /* INCLUDE  */
  YYSYMBOL_INCFILE = 36,                   /* INCFILE  */
  YYSYMBOL_INCADD = 37,                    /* INCADD  */
  YYSYMBOL_POINTER = 38,                   /* POINTER  */
  YYSYMBOL_STRUCTDOTOP = 39,               /* STRUCTDOTOP  */
  YYSYMBOL_LOWER_THAN_ELSE = 40,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Program = 42,                   /* Program  */
  YYSYMBOL_ExtDefList = 43,                /* ExtDefList  */
  YYSYMBOL_GLOBALINIT = 44,                /* GLOBALINIT  */
  YYSYMBOL_INCEXPR = 45,                   /* INCEXPR  */
  YYSYMBOL_ExtDef = 46,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 47,                /* ExtDecList  */
  YYSYMBOL_Specifier = 48,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 49,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 50,                    /* OptTag  */
  YYSYMBOL_Tag = 51,                       /* Tag  */
  YYSYMBOL_VarDec = 52,                    /* VarDec  */
  YYSYMBOL_FunDec = 53,                    /* FunDec  */
  YYSYMBOL_VarList = 54,                   /* VarList  */
  YYSYMBOL_ParamDec = 55,                  /* ParamDec  */
  YYSYMBOL_CompSt = 56,                    /* CompSt  */
  YYSYMBOL_StmtList = 57,                  /* StmtList  */
  YYSYMBOL_Stmt = 58,                      /* Stmt  */
  YYSYMBOL_DefList = 59,                   /* DefList  */
  YYSYMBOL_Def = 60,                       /* Def  */
  YYSYMBOL_DecList = 61,                   /* DecList  */
  YYSYMBOL_Dec = 62,                       /* Dec  */
  YYSYMBOL_Exp = 63,                       /* Exp  */
  YYSYMBOL_FuncUse = 64,                   /* FuncUse  */
  YYSYMBOL_Args = 65                       /* Args  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    95,    95,    97,    98,    99,   100,   101,   102,   105,
     106,   109,   110,   112,   113,   114,   116,   117,   121,   122,
     124,   125,   127,   128,   130,   134,   135,   136,   137,   139,
     140,   142,   143,   144,   146,   150,   151,   153,   154,   155,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     170,   171,   173,   175,   176,   178,   179,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   210,   211,   212,   215,   216
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
  "SEMI", "COMMA", "ASSIGN", "RELOP", "PLUS", "MINUS", "MIUASIGN", "STAR",
  "DIV", "PERCENT", "AND", "OR", "NOT", "DOT", "TYPE", "LP", "RP", "LB",
  "RB", "LC", "RC", "STRUCT", "RETURN", "IF", "ELSE", "WHILE", "OCTAL",
  "HEXNUM", "JINGHAO", "INCLUDE", "INCFILE", "INCADD", "POINTER",
  "STRUCTDOTOP", "LOWER_THAN_ELSE", "$accept", "Program", "ExtDefList",
  "GLOBALINIT", "INCEXPR", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "OptTag", "Tag", "VarDec", "FunDec", "VarList",
  "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "FuncUse", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-40)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,  -111,    21,    -6,    37,  -111,    14,    14,    12,   315,
    -111,    17,    43,  -111,    51,  -111,    12,    88,    14,    12,
    -111,   102,  -111,  -111,   -15,  -111,   348,   348,   348,  -111,
    -111,    84,    -2,    79,   195,  -111,    14,  -111,  -111,    91,
       0,    12,  -111,  -111,   290,  -111,   -13,    86,   101,   491,
     383,  -111,    42,   357,    14,  -111,  -111,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   112,   348,   348,
     348,    42,    92,    14,    11,  -111,    96,    42,   100,   122,
     248,     3,   324,  -111,  -111,  -111,   106,   400,   131,   452,
      87,   101,   101,   452,   491,   491,   452,   486,   469,  -111,
     417,   452,   452,     4,   132,   130,  -111,  -111,  -111,    86,
    -111,    14,   348,  -111,  -111,  -111,  -111,  -111,    10,   127,
     348,   124,   125,  -111,   117,   166,   213,  -111,   348,  -111,
      42,  -111,  -111,  -111,  -111,   231,   348,   348,  -111,  -111,
     131,  -111,   452,  -111,  -111,   435,    69,  -111,   271,   126,
     271,   120,   271,  -111,   271,  -111,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,    18,    23,     0,     0,     2,     6,     0,     8,     0,
      19,    24,     0,    21,     0,     1,     8,     0,     0,     8,
       3,     0,    78,    79,    25,    14,     0,     0,     0,    80,
      81,     0,    77,     0,     0,    73,    51,    11,     7,    25,
      16,     8,     4,    28,     0,    72,    25,    77,    70,    71,
       0,    13,     0,     0,    51,    15,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     5,    83,     0,     0,    32,
      86,     0,     0,    69,    25,    17,    78,     0,     0,    57,
      60,    61,    62,    66,    63,    64,    65,    58,    59,    75,
       0,    67,    68,    55,     0,    53,    20,    50,    30,    34,
      29,    33,     0,    84,    82,    83,    26,    27,     0,     0,
       0,     0,     0,    42,    36,     0,    41,    74,     0,    52,
       0,    31,    85,    46,    49,     0,     0,     0,    35,    37,
       0,    40,    56,    54,    43,     0,     0,    38,     0,     0,
       0,    44,     0,    47,     0,    48,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,    -5,   146,  -111,    56,   103,    22,  -111,  -111,
    -111,    -7,  -111,    57,  -111,   121,  -110,   -83,   -53,  -111,
      44,  -111,    -9,  -111,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    31,     9,    10,    12,
      13,    47,    33,    78,    79,   123,   124,   125,    72,    73,
     104,   105,   126,    35,    81
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    88,    32,    20,   -16,    52,    44,    52,    82,   113,
      40,    38,   128,    43,    42,   139,   133,    48,    49,    50,
     107,    53,    45,    53,    45,   114,    11,    53,    17,    14,
     147,     1,     1,   108,     1,    80,    75,    15,     2,     2,
      17,     2,   -22,    21,    87,    40,     3,    84,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    71,   100,
     101,   102,    16,    19,   103,   151,    77,   153,    36,   155,
     109,   156,   140,    80,    41,   149,    71,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    37,    67,    21,
      51,   150,    68,    39,    25,    71,    77,    59,    60,    61,
      62,    63,    64,    80,    54,    43,    67,    69,    70,    53,
      68,   135,    74,    61,    62,    63,    64,    99,   106,   142,
      67,   -30,   110,   103,    68,    69,    70,   145,   146,   111,
     116,   -39,   118,    77,    22,    23,    46,   130,   129,    69,
      70,   134,    26,   138,   119,   136,   137,    71,   152,    27,
     154,   -39,    28,    18,    55,    85,    54,   -39,   -39,   120,
     121,   -39,   122,    29,    30,   -39,   -39,   118,   131,    22,
      23,    46,   132,     0,   143,     0,     0,    26,     0,   119,
       0,     0,     0,     0,    27,     0,     1,    28,     0,     0,
       0,    54,   -39,     2,   120,   121,   -39,   122,    29,    30,
     -39,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,    67,     0,     0,     0,    68,   141,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,    67,    69,    70,     0,    68,   144,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    69,    70,     0,    68,   112,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,    67,     0,    69,
      70,    68,   118,     0,    22,    23,    46,     0,     0,     0,
       0,     0,    26,     0,   119,     0,    69,    70,     0,    27,
       0,    21,    28,    22,    23,    46,    54,     0,     0,   120,
     121,    26,   122,    29,    30,     0,     0,     0,    27,     0,
       1,    28,    76,     0,     0,     0,    21,     2,    22,    23,
      24,    25,    29,    30,     0,    21,    26,    22,    23,    46,
       0,     0,     0,    27,     0,    26,    28,     0,     0,     0,
       0,     0,    27,     0,     0,    28,   115,    29,    30,    21,
       0,    22,    23,    46,     0,     0,    29,    30,    21,    26,
      86,    23,    46,     0,     0,     0,    27,     0,    26,    28,
       0,     0,     0,     0,     0,    27,     0,     0,    28,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,    67,     0,     0,    83,    68,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,    67,
       0,    69,    70,    68,   117,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,    67,     0,    69,    70,
      68,   127,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,    67,    69,    70,   148,    68,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,    67,     0,    69,    70,    68,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,    67,     0,
      69,    70,    68,     0,     0,    58,    59,    60,    61,    62,
      63,    64,     0,    61,     0,    67,    64,    69,    70,    68,
      67,     0,     0,     0,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,     0,     0,    69,
      70
};

static const yytype_int16 yycheck[] =
{
       9,    54,     9,     8,     6,     7,    21,     7,    21,     6,
      17,    16,     8,     3,    19,   125,     6,    26,    27,    28,
      73,    23,    37,    23,    37,    22,     5,    23,     6,    35,
     140,    20,    20,    22,    20,    44,    41,     0,    27,    27,
      18,    27,    25,     1,    53,    52,    34,     5,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    36,    68,
      69,    70,     6,     7,    71,   148,    44,   150,    25,   152,
      77,   154,   125,    82,    18,     6,    54,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    36,    19,     1,
       6,    22,    23,     5,     6,    73,    74,    10,    11,    12,
      13,    14,    15,   112,    25,     3,    19,    38,    39,    23,
      23,   120,    21,    12,    13,    14,    15,     5,    26,   128,
      19,    25,    22,   130,    23,    38,    39,   136,   137,     7,
      24,     0,     1,   111,     3,     4,     5,     7,     6,    38,
      39,    14,    11,    26,    13,    21,    21,   125,    22,    18,
      30,    20,    21,     7,    33,    52,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,     1,   111,     3,
       4,     5,   112,    -1,   130,    -1,    -1,    11,    -1,    13,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    -1,    -1,    -1,    23,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    38,    39,    -1,    23,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    38,    39,    -1,    23,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    -1,    38,
      39,    23,     1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    13,    -1,    38,    39,    -1,    18,
      -1,     1,    21,     3,     4,     5,    25,    -1,    -1,    28,
      29,    11,    31,    32,    33,    -1,    -1,    -1,    18,    -1,
      20,    21,    22,    -1,    -1,    -1,     1,    27,     3,     4,
       5,     6,    32,    33,    -1,     1,    11,     3,     4,     5,
      -1,    -1,    -1,    18,    -1,    11,    21,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    21,    22,    32,    33,     1,
      -1,     3,     4,     5,    -1,    -1,    32,    33,     1,    11,
       3,     4,     5,    -1,    -1,    -1,    18,    -1,    11,    21,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      -1,    38,    39,    23,    24,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    -1,    38,    39,
      23,    24,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    38,    39,    22,    23,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    38,    39,    23,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    -1,
      38,    39,    23,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    12,    -1,    19,    15,    38,    39,    23,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    38,
      39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    27,    34,    42,    43,    44,    45,    46,    48,
      49,     5,    50,    51,    35,     0,    46,    48,    44,    46,
      43,     1,     3,     4,     5,     6,    11,    18,    21,    32,
      33,    47,    52,    53,    63,    64,    25,    36,    43,     5,
      52,    46,    43,     3,    21,    37,     5,    52,    63,    63,
      63,     6,     7,    23,    25,    56,     6,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    19,    23,    38,
      39,    48,    59,    60,    21,    43,    22,    48,    54,    55,
      63,    65,    21,    22,     5,    47,     3,    63,    59,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,     5,
      63,    63,    63,    52,    61,    62,    26,    59,    22,    52,
      22,     7,     7,     6,    22,    22,    24,    24,     1,    13,
      28,    29,    31,    56,    57,    58,    63,    24,     8,     6,
       7,    54,    65,     6,    14,    63,    21,    21,    26,    57,
      59,     6,    63,    61,     6,    63,    63,    57,    22,     6,
      22,    58,    22,    58,    30,    58,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    43,    43,    43,    43,    44,
      44,    45,    45,    46,    46,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    52,    52,    52,    52,    53,
      53,    54,    54,    54,    55,    56,    56,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    65,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     4,     1,     3,     0,     3,
       0,     3,     0,     3,     2,     3,     1,     3,     1,     1,
       5,     2,     1,     0,     1,     1,     4,     4,     2,     4,
       3,     3,     1,     0,     2,     4,     3,     2,     3,     0,
       2,     1,     1,     3,     5,     7,     2,     5,     6,     2,
       2,     0,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     1
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
#line 95 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Program",1,(yyvsp[0].pnode));root=(yyval.pnode);}
#line 1425 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: ExtDef ExtDefList  */
#line 97 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDefList",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1431 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: INCEXPR ExtDef ExtDefList  */
#line 98 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDefList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1437 "syntax.tab.c"
    break;

  case 5: /* ExtDefList: INCEXPR GLOBALINIT ExtDef ExtDefList  */
#line 99 "./src/syntax.y"
                                           {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDefList",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1443 "syntax.tab.c"
    break;

  case 6: /* ExtDefList: GLOBALINIT  */
#line 100 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDefList",1,(yyvsp[0].pnode));}
#line 1449 "syntax.tab.c"
    break;

  case 7: /* ExtDefList: GLOBALINIT ExtDef ExtDefList  */
#line 101 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDefList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1455 "syntax.tab.c"
    break;

  case 8: /* ExtDefList: %empty  */
#line 102 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1461 "syntax.tab.c"
    break;

  case 9: /* GLOBALINIT: Specifier Exp SEMI  */
#line 105 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"GLOBALINIT",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1467 "syntax.tab.c"
    break;

  case 10: /* GLOBALINIT: %empty  */
#line 106 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1473 "syntax.tab.c"
    break;

  case 11: /* INCEXPR: JINGHAO INCLUDE INCFILE  */
#line 109 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"INCEXPR",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1479 "syntax.tab.c"
    break;

  case 12: /* INCEXPR: %empty  */
#line 110 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1485 "syntax.tab.c"
    break;

  case 13: /* ExtDef: Specifier ExtDecList SEMI  */
#line 112 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDef",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1491 "syntax.tab.c"
    break;

  case 14: /* ExtDef: Specifier SEMI  */
#line 113 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDef",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1497 "syntax.tab.c"
    break;

  case 15: /* ExtDef: Specifier FunDec CompSt  */
#line 114 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDef",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1503 "syntax.tab.c"
    break;

  case 16: /* ExtDecList: VarDec  */
#line 116 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDecList",1,(yyvsp[0].pnode));}
#line 1509 "syntax.tab.c"
    break;

  case 17: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 117 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ExtDecList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1515 "syntax.tab.c"
    break;

  case 18: /* Specifier: TYPE  */
#line 121 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Specifier",1,(yyvsp[0].pnode));}
#line 1521 "syntax.tab.c"
    break;

  case 19: /* Specifier: StructSpecifier  */
#line 122 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Specifier",1,(yyvsp[0].pnode));}
#line 1527 "syntax.tab.c"
    break;

  case 20: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 124 "./src/syntax.y"
                                             {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StructSpecifier",5,(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1533 "syntax.tab.c"
    break;

  case 21: /* StructSpecifier: STRUCT Tag  */
#line 125 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StructSpecifier",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1539 "syntax.tab.c"
    break;

  case 22: /* OptTag: ID  */
#line 127 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"OptTag",1,(yyvsp[0].pnode));}
#line 1545 "syntax.tab.c"
    break;

  case 23: /* OptTag: %empty  */
#line 128 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1551 "syntax.tab.c"
    break;

  case 24: /* Tag: ID  */
#line 130 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Tag",1,(yyvsp[0].pnode));}
#line 1557 "syntax.tab.c"
    break;

  case 25: /* VarDec: ID  */
#line 134 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarDec",1,(yyvsp[0].pnode));}
#line 1563 "syntax.tab.c"
    break;

  case 26: /* VarDec: VarDec LB INT RB  */
#line 135 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarDec",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1569 "syntax.tab.c"
    break;

  case 27: /* VarDec: VarDec LB Exp RB  */
#line 136 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarDec",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1575 "syntax.tab.c"
    break;

  case 28: /* VarDec: error INT  */
#line 137 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \"]\".\n", yylineno);}
#line 1581 "syntax.tab.c"
    break;

  case 29: /* FunDec: ID LP VarList RP  */
#line 139 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"FunDec",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1587 "syntax.tab.c"
    break;

  case 30: /* FunDec: ID LP RP  */
#line 140 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"FunDec",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1593 "syntax.tab.c"
    break;

  case 31: /* VarList: ParamDec COMMA VarList  */
#line 142 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1599 "syntax.tab.c"
    break;

  case 32: /* VarList: ParamDec  */
#line 143 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"VarList",1,(yyvsp[0].pnode));}
#line 1605 "syntax.tab.c"
    break;

  case 33: /* VarList: %empty  */
#line 144 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1611 "syntax.tab.c"
    break;

  case 34: /* ParamDec: Specifier VarDec  */
#line 146 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"ParamDec",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1617 "syntax.tab.c"
    break;

  case 35: /* CompSt: LC DefList StmtList RC  */
#line 150 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"CompSt",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1623 "syntax.tab.c"
    break;

  case 36: /* CompSt: LC DefList StmtList  */
#line 151 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \"}\".\n", yylineno);}
#line 1629 "syntax.tab.c"
    break;

  case 37: /* StmtList: Stmt StmtList  */
#line 153 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StmtList",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1635 "syntax.tab.c"
    break;

  case 38: /* StmtList: Stmt DefList StmtList  */
#line 154 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"StmtList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1641 "syntax.tab.c"
    break;

  case 39: /* StmtList: %empty  */
#line 155 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1647 "syntax.tab.c"
    break;

  case 40: /* Stmt: Exp SEMI  */
#line 157 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1653 "syntax.tab.c"
    break;

  case 41: /* Stmt: Exp  */
#line 158 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \";\"\n", yylineno);}
#line 1659 "syntax.tab.c"
    break;

  case 42: /* Stmt: CompSt  */
#line 159 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",1,(yyvsp[0].pnode));}
#line 1665 "syntax.tab.c"
    break;

  case 43: /* Stmt: RETURN Exp SEMI  */
#line 160 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1671 "syntax.tab.c"
    break;

  case 44: /* Stmt: IF LP Exp RP Stmt  */
#line 161 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",5,(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1677 "syntax.tab.c"
    break;

  case 45: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 162 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",7,(yyvsp[-6].pnode),(yyvsp[-5].pnode),(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1683 "syntax.tab.c"
    break;

  case 46: /* Stmt: error SEMI  */
#line 163 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \";\"\n", yylineno);}
#line 1689 "syntax.tab.c"
    break;

  case 47: /* Stmt: WHILE LP Exp RP Stmt  */
#line 164 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Stmt",5,(yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1695 "syntax.tab.c"
    break;

  case 48: /* Stmt: WHILE LP Exp SEMI RP Stmt  */
#line 165 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: redundant symbol \";\"\n", yylineno);}
#line 1701 "syntax.tab.c"
    break;

  case 49: /* Stmt: STAR DIV  */
#line 166 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Syntax error\n", yylineno);}
#line 1707 "syntax.tab.c"
    break;

  case 50: /* DefList: Def DefList  */
#line 170 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"DefList",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1713 "syntax.tab.c"
    break;

  case 51: /* DefList: %empty  */
#line 171 "./src/syntax.y"
                                    {(yyval.pnode)=NULL;}
#line 1719 "syntax.tab.c"
    break;

  case 52: /* Def: Specifier DecList SEMI  */
#line 173 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Def",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1725 "syntax.tab.c"
    break;

  case 53: /* DecList: Dec  */
#line 175 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"DecList",1,(yyvsp[0].pnode));}
#line 1731 "syntax.tab.c"
    break;

  case 54: /* DecList: Dec COMMA DecList  */
#line 176 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"DecList",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1737 "syntax.tab.c"
    break;

  case 55: /* Dec: VarDec  */
#line 178 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Dec",1,(yyvsp[0].pnode));}
#line 1743 "syntax.tab.c"
    break;

  case 56: /* Dec: VarDec ASSIGN Exp  */
#line 179 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Dec",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1749 "syntax.tab.c"
    break;

  case 57: /* Exp: Exp ASSIGN Exp  */
#line 183 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1755 "syntax.tab.c"
    break;

  case 58: /* Exp: Exp AND Exp  */
#line 184 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1761 "syntax.tab.c"
    break;

  case 59: /* Exp: Exp OR Exp  */
#line 185 "./src/syntax.y"
                                   {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1767 "syntax.tab.c"
    break;

  case 60: /* Exp: Exp RELOP Exp  */
#line 186 "./src/syntax.y"
                                      {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1773 "syntax.tab.c"
    break;

  case 61: /* Exp: Exp PLUS Exp  */
#line 187 "./src/syntax.y"
                                     {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1779 "syntax.tab.c"
    break;

  case 62: /* Exp: Exp MINUS Exp  */
#line 188 "./src/syntax.y"
                                      {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1785 "syntax.tab.c"
    break;

  case 63: /* Exp: Exp STAR Exp  */
#line 189 "./src/syntax.y"
                                     {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1791 "syntax.tab.c"
    break;

  case 64: /* Exp: Exp DIV Exp  */
#line 190 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1797 "syntax.tab.c"
    break;

  case 65: /* Exp: Exp PERCENT Exp  */
#line 191 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1803 "syntax.tab.c"
    break;

  case 66: /* Exp: Exp MIUASIGN Exp  */
#line 192 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1809 "syntax.tab.c"
    break;

  case 67: /* Exp: Exp POINTER Exp  */
#line 193 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1815 "syntax.tab.c"
    break;

  case 68: /* Exp: Exp STRUCTDOTOP Exp  */
#line 194 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1821 "syntax.tab.c"
    break;

  case 69: /* Exp: LP Exp RP  */
#line 195 "./src/syntax.y"
                                  {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1827 "syntax.tab.c"
    break;

  case 70: /* Exp: MINUS Exp  */
#line 196 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1833 "syntax.tab.c"
    break;

  case 71: /* Exp: NOT Exp  */
#line 197 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1839 "syntax.tab.c"
    break;

  case 72: /* Exp: ID INCADD  */
#line 198 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",2,(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1845 "syntax.tab.c"
    break;

  case 73: /* Exp: FuncUse  */
#line 199 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1851 "syntax.tab.c"
    break;

  case 74: /* Exp: Exp LB Exp RB  */
#line 200 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1857 "syntax.tab.c"
    break;

  case 75: /* Exp: Exp DOT ID  */
#line 201 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1863 "syntax.tab.c"
    break;

  case 76: /* Exp: ID  */
#line 202 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1869 "syntax.tab.c"
    break;

  case 77: /* Exp: VarDec  */
#line 203 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1875 "syntax.tab.c"
    break;

  case 78: /* Exp: INT  */
#line 204 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1881 "syntax.tab.c"
    break;

  case 79: /* Exp: FLOAT  */
#line 205 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1887 "syntax.tab.c"
    break;

  case 80: /* Exp: OCTAL  */
#line 206 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1893 "syntax.tab.c"
    break;

  case 81: /* Exp: HEXNUM  */
#line 207 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Exp",1,(yyvsp[0].pnode));}
#line 1899 "syntax.tab.c"
    break;

  case 82: /* FuncUse: ID LP Args RP  */
#line 210 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"FuncUse",4,(yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1905 "syntax.tab.c"
    break;

  case 83: /* FuncUse: ID LP RP  */
#line 211 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"FuncUse",4,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1911 "syntax.tab.c"
    break;

  case 84: /* FuncUse: ID LP Args SEMI  */
#line 212 "./src/syntax.y"
                                    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \"\)\".\n", yylineno);}
#line 1917 "syntax.tab.c"
    break;

  case 85: /* Args: Exp COMMA Args  */
#line 215 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Args",3,(yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));}
#line 1923 "syntax.tab.c"
    break;

  case 86: /* Args: Exp  */
#line 216 "./src/syntax.y"
                                    {(yyval.pnode)=new_node((yyloc).first_line,NOTTOKEN,"Args",1,(yyvsp[0].pnode));}
#line 1929 "syntax.tab.c"
    break;


#line 1933 "syntax.tab.c"

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

#line 219 "./src/syntax.y"

// print the syntax type error
yyerror(char* msg){
    // fprintf(stderr,"Error type B at line %d: %s.\n", yylineno, "syntax error");
}
