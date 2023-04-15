/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    void yyerror(const char *s);
    int yylex();
    int yywrap();
    extern FILE *yyin;
	extern FILE *yytext;
    void add(char);
    void insert_type();
    int search(char *);
    struct node* mknode(struct node *left, struct node *right, char *token);

    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        int line_no;
    } symbol_table[40];

    int count=0;
    int q;
    char type[10];
    extern int countn;
    struct node { 
		struct node *left; 
		struct node *right; 
		char *token; 
    };
	struct node *head;

#line 105 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DOT = 258,                     /* DOT  */
    PRINT = 259,                   /* PRINT  */
    SCAN = 260,                    /* SCAN  */
    INT = 261,                     /* INT  */
    FLOAT = 262,                   /* FLOAT  */
    STRING = 263,                  /* STRING  */
    BOOL = 264,                    /* BOOL  */
    RET = 265,                     /* RET  */
    FOR = 266,                     /* FOR  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    INCLUDE = 269,                 /* INCLUDE  */
    T = 270,                       /* T  */
    F = 271,                       /* F  */
    NUM = 272,                     /* NUM  */
    REAL = 273,                    /* REAL  */
    ID = 274,                      /* ID  */
    LE = 275,                      /* LE  */
    GE = 276,                      /* GE  */
    EQ = 277,                      /* EQ  */
    NE = 278,                      /* NE  */
    GT = 279,                      /* GT  */
    LT = 280,                      /* LT  */
    NOT = 281,                     /* NOT  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    ADD = 284,                     /* ADD  */
    SUB = 285,                     /* SUB  */
    DIV = 286,                     /* DIV  */
    MULT = 287,                    /* MULT  */
    ASSIGN = 288,                  /* ASSIGN  */
    BRACES_OPEN = 289,             /* BRACES_OPEN  */
    BRACES_CLOSE = 290,            /* BRACES_CLOSE  */
    BRACKET_OPEN = 291,            /* BRACKET_OPEN  */
    BRACKET_CLOSE = 292,           /* BRACKET_CLOSE  */
    DELIM = 293,                   /* DELIM  */
    COMM = 294,                    /* COMM  */
    SENTENCE = 295                 /* SENTENCE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DOT 258
#define PRINT 259
#define SCAN 260
#define INT 261
#define FLOAT 262
#define STRING 263
#define BOOL 264
#define RET 265
#define FOR 266
#define IF 267
#define ELSE 268
#define INCLUDE 269
#define T 270
#define F 271
#define NUM 272
#define REAL 273
#define ID 274
#define LE 275
#define GE 276
#define EQ 277
#define NE 278
#define GT 279
#define LT 280
#define NOT 281
#define AND 282
#define OR 283
#define ADD 284
#define SUB 285
#define DIV 286
#define MULT 287
#define ASSIGN 288
#define BRACES_OPEN 289
#define BRACES_CLOSE 290
#define BRACKET_OPEN 291
#define BRACKET_CLOSE 292
#define DELIM 293
#define COMM 294
#define SENTENCE 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "parser.y"
 
	struct var_name { 
		char name[100]; 
		struct node* nd;
	} nd_obj; 

#line 245 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DOT = 3,                        /* DOT  */
  YYSYMBOL_PRINT = 4,                      /* PRINT  */
  YYSYMBOL_SCAN = 5,                       /* SCAN  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_BOOL = 9,                       /* BOOL  */
  YYSYMBOL_RET = 10,                       /* RET  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_INCLUDE = 14,                   /* INCLUDE  */
  YYSYMBOL_T = 15,                         /* T  */
  YYSYMBOL_F = 16,                         /* F  */
  YYSYMBOL_NUM = 17,                       /* NUM  */
  YYSYMBOL_REAL = 18,                      /* REAL  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_GE = 21,                        /* GE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_ADD = 29,                       /* ADD  */
  YYSYMBOL_SUB = 30,                       /* SUB  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_MULT = 32,                      /* MULT  */
  YYSYMBOL_ASSIGN = 33,                    /* ASSIGN  */
  YYSYMBOL_BRACES_OPEN = 34,               /* BRACES_OPEN  */
  YYSYMBOL_BRACES_CLOSE = 35,              /* BRACES_CLOSE  */
  YYSYMBOL_BRACKET_OPEN = 36,              /* BRACKET_OPEN  */
  YYSYMBOL_BRACKET_CLOSE = 37,             /* BRACKET_CLOSE  */
  YYSYMBOL_DELIM = 38,                     /* DELIM  */
  YYSYMBOL_COMM = 39,                      /* COMM  */
  YYSYMBOL_SENTENCE = 40,                  /* SENTENCE  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_headers = 45,                   /* headers  */
  YYSYMBOL_46_1 = 46,                      /* $@1  */
  YYSYMBOL_main = 47,                      /* main  */
  YYSYMBOL_datatype = 48,                  /* datatype  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_50_3 = 50,                      /* $@3  */
  YYSYMBOL_body = 51,                      /* body  */
  YYSYMBOL_52_4 = 52,                      /* $@4  */
  YYSYMBOL_53_5 = 53,                      /* $@5  */
  YYSYMBOL_54_6 = 54,                      /* $@6  */
  YYSYMBOL_55_7 = 55,                      /* $@7  */
  YYSYMBOL_else = 56,                      /* else  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_condition = 58,                 /* condition  */
  YYSYMBOL_condition_optional = 59,        /* condition_optional  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_61_9 = 61,                      /* $@9  */
  YYSYMBOL_init = 62,                      /* init  */
  YYSYMBOL_expression = 63,                /* expression  */
  YYSYMBOL_arithmetic = 64,                /* arithmetic  */
  YYSYMBOL_relop = 65,                     /* relop  */
  YYSYMBOL_value = 66,                     /* value  */
  YYSYMBOL_return = 67,                    /* return  */
  YYSYMBOL_68_10 = 68                      /* $@10  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

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
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
       2,     2,     2,     2,    41,     2,     2,     2,     2,     2,
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
static const yytype_int8 yyrline[] =
{
       0,    46,    46,    49,    49,    50,    54,    58,    59,    60,
      61,    61,    62,    62,    63,    66,    66,    67,    67,    68,
      69,    69,    70,    70,    71,    74,    74,    75,    78,    79,
      80,    81,    82,    85,    86,    87,    90,    90,    91,    92,
      95,    96,    99,   100,   103,   104,   105,   106,   110,   111,
     112,   113,   114,   115,   118,   119,   120,   121,   124,   124
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
  "\"end of file\"", "error", "\"invalid token\"", "DOT", "PRINT", "SCAN",
  "INT", "FLOAT", "STRING", "BOOL", "RET", "FOR", "IF", "ELSE", "INCLUDE",
  "T", "F", "NUM", "REAL", "ID", "LE", "GE", "EQ", "NE", "GT", "LT", "NOT",
  "AND", "OR", "ADD", "SUB", "DIV", "MULT", "ASSIGN", "BRACES_OPEN",
  "BRACES_CLOSE", "BRACKET_OPEN", "BRACKET_CLOSE", "DELIM", "COMM",
  "SENTENCE", "','", "'&'", "$accept", "program", "headers", "$@1", "main",
  "datatype", "$@2", "$@3", "body", "$@4", "$@5", "$@6", "$@7", "else",
  "$@8", "condition", "condition_optional", "statement", "$@9", "init",
  "expression", "arithmetic", "relop", "value", "return", "$@10", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    44,    38
};
#endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -8,   -68,    14,    63,    -8,   -68,   -68,   -68,   -68,   -68,
     -68,   -29,    -4,   -68,   -20,   -18,   -11,   -68,    -5,    15,
      13,    17,    21,    37,    26,    23,   -68,   -68,   -68,   -68,
      54,    65,    71,    35,    37,    67,    46,    52,    59,    60,
     -68,   -68,   -68,   -68,   -68,   -68,     6,     6,   -68,   -68,
      64,    37,   -68,    61,    57,    66,    53,    -6,   -68,   -68,
     -68,   -68,   -68,    62,   -68,    68,     6,   -68,   -68,    69,
      72,    70,    74,   -68,   -68,    -6,    73,     7,   -68,   -68,
     -68,   -68,     6,     6,   -68,    75,    37,    76,    58,    -6,
     -68,    81,     6,   -68,   -68,   -68,   -68,    37,    83,    78,
      37,   -24,   -68,    80,    53,    84,    -6,    -6,   -68,    82,
      85,    90,   -68,   -68,    37,    87,   -68,    37,   -68,    37,
      89,   -68,    91,    37,    37,    92,   -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     3,     0,    14,     5,     1,    10,    12,     7,     8,
       9,     0,     0,     4,     0,     0,     0,     6,     0,     0,
       0,     0,     0,    24,     0,     0,    10,    12,    15,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    52,    53,    49,    48,     0,     0,    36,    58,
       0,    24,    11,     0,     0,     0,     0,     0,    54,    55,
      57,    56,    38,    43,    39,    41,     0,     2,    19,     0,
       0,     0,     0,    30,    31,     0,     0,    32,    44,    45,
      47,    46,     0,     0,    37,     0,     0,     0,     0,     0,
      29,     0,     0,    42,    40,    59,    13,    24,     0,     0,
      24,    35,    21,     0,     0,     0,     0,     0,    28,     0,
       0,    27,    33,    34,    24,     0,    25,    24,    23,    24,
       0,    18,     0,    24,    24,     0,    16,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   100,   -68,   -68,   102,   -68,   -68,   -34,   -68,
     -68,   -68,   -68,   -68,   -68,   -67,   -68,   -51,   -68,   -68,
     -45,   -68,    31,   -56,   -68,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    11,    31,    14,    15,    32,    38,
      39,    36,    37,   117,   120,    76,   108,    33,    65,    84,
      62,    82,    47,    63,    50,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      52,    77,    64,   106,   107,    72,     1,    16,    90,    73,
      74,    58,    59,    60,     5,    17,    18,    68,    19,    77,
      75,    85,    99,    58,    59,    60,    20,    40,    41,    42,
      43,    44,    45,    77,    61,    21,   101,    93,    94,   112,
     113,    26,    27,     8,     9,    10,    61,    23,    28,    29,
      77,    77,    96,   110,    24,    22,    30,     6,     7,     8,
       9,    10,    25,   102,    34,    35,   105,     6,     7,     8,
       9,    10,    30,    51,    40,    41,    42,    43,    44,    45,
     118,    49,    54,   121,    48,   122,    53,    46,    55,   125,
     126,    78,    79,    80,    81,    56,    57,    70,    69,    67,
      98,    83,   103,   116,    13,    12,    71,    86,    92,    87,
      91,    88,    89,    95,    97,   100,   104,   109,     0,   111,
     114,   119,   115,   123,     0,     0,   124,   127
};

static const yytype_int8 yycheck[] =
{
      34,    57,    47,    27,    28,    56,    14,    36,    75,    15,
      16,    17,    18,    19,     0,    19,    36,    51,    36,    75,
      26,    66,    89,    17,    18,    19,    37,    20,    21,    22,
      23,    24,    25,    89,    40,    40,    92,    82,    83,   106,
     107,     4,     5,     6,     7,     8,    40,    34,    11,    12,
     106,   107,    86,   104,    37,    40,    19,     4,     5,     6,
       7,     8,    41,    97,    38,    42,   100,     4,     5,     6,
       7,     8,    19,    38,    20,    21,    22,    23,    24,    25,
     114,    10,    36,   117,    19,   119,    19,    33,    36,   123,
     124,    29,    30,    31,    32,    36,    36,    40,    37,    35,
      42,    33,    19,    13,     4,     3,    40,    38,    77,    37,
      37,    41,    38,    38,    38,    34,    38,    37,    -1,    35,
      38,    34,    37,    34,    -1,    -1,    35,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    44,    45,    46,     0,     4,     5,     6,     7,
       8,    47,    48,    45,    49,    50,    36,    19,    36,    36,
      37,    40,    40,    34,    37,    41,     4,     5,    11,    12,
      19,    48,    51,    60,    38,    42,    54,    55,    52,    53,
      20,    21,    22,    23,    24,    25,    33,    65,    19,    10,
      67,    38,    51,    19,    36,    36,    36,    36,    17,    18,
      19,    40,    63,    66,    63,    61,    68,    35,    51,    37,
      40,    40,    60,    15,    16,    26,    58,    66,    29,    30,
      31,    32,    64,    33,    62,    63,    38,    37,    41,    38,
      58,    37,    65,    63,    63,    38,    51,    38,    42,    58,
      34,    66,    51,    19,    38,    51,    27,    28,    59,    37,
      60,    35,    58,    58,    38,    37,    13,    56,    51,    34,
      57,    51,    51,    34,    35,    51,    51,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    46,    45,    45,    47,    48,    48,    48,
      49,    48,    50,    48,    48,    52,    51,    53,    51,    51,
      54,    51,    55,    51,    51,    57,    56,    56,    58,    58,
      58,    58,    58,    59,    59,    59,    61,    60,    60,    60,
      62,    62,    63,    63,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    68,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     0,     3,     0,     2,     1,     1,     1,
       0,     7,     0,    10,     0,     0,    13,     0,    10,     3,
       0,     7,     0,    10,     0,     0,     5,     0,     4,     2,
       1,     1,     1,     2,     2,     0,     0,     4,     3,     3,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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
  case 2: /* program: headers main BRACKET_OPEN BRACKET_CLOSE BRACES_OPEN body return BRACES_CLOSE  */
#line 46 "parser.y"
                                                                                      { (yyvsp[-6].nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "main"); (yyval.nd_obj).nd = mknode((yyvsp[-7].nd_obj).nd, (yyvsp[-6].nd_obj).nd, "program"); head = (yyval.nd_obj).nd; }
#line 1377 "y.tab.c"
    break;

  case 3: /* $@1: %empty  */
#line 49 "parser.y"
                 { add('H'); }
#line 1383 "y.tab.c"
    break;

  case 4: /* headers: INCLUDE $@1 headers  */
#line 49 "parser.y"
                                       { (yyvsp[-2].nd_obj).nd = mknode( NULL, NULL, (yyvsp[-2].nd_obj).name ); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, NULL, "headers"); }
#line 1389 "y.tab.c"
    break;

  case 5: /* headers: %empty  */
#line 50 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1395 "y.tab.c"
    break;

  case 6: /* main: datatype ID  */
#line 54 "parser.y"
                  { add('F'); }
#line 1401 "y.tab.c"
    break;

  case 7: /* datatype: INT  */
#line 58 "parser.y"
              { insert_type(); }
#line 1407 "y.tab.c"
    break;

  case 8: /* datatype: FLOAT  */
#line 59 "parser.y"
        { insert_type(); }
#line 1413 "y.tab.c"
    break;

  case 9: /* datatype: STRING  */
#line 60 "parser.y"
         { insert_type(); }
#line 1419 "y.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 61 "parser.y"
        { add('K'); }
#line 1425 "y.tab.c"
    break;

  case 11: /* datatype: PRINT $@2 BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body  */
#line 61 "parser.y"
                                                                     { (yyval.nd_obj).nd = mknode(NULL, NULL, "printf"); }
#line 1431 "y.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 62 "parser.y"
       { add('K'); }
#line 1437 "y.tab.c"
    break;

  case 13: /* datatype: SCAN $@3 BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM body  */
#line 62 "parser.y"
                                                                               { (yyval.nd_obj).nd = mknode(NULL, NULL, "scanf"); }
#line 1443 "y.tab.c"
    break;

  case 14: /* datatype: %empty  */
#line 63 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1449 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 66 "parser.y"
          { add('K'); }
#line 1455 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 67 "parser.y"
     { add('K'); }
#line 1461 "y.tab.c"
    break;

  case 19: /* body: statement DELIM body  */
#line 68 "parser.y"
                       { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "bline"); }
#line 1467 "y.tab.c"
    break;

  case 20: /* $@6: %empty  */
#line 69 "parser.y"
        { add('K'); }
#line 1473 "y.tab.c"
    break;

  case 21: /* body: PRINT $@6 BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body  */
#line 69 "parser.y"
                                                                     { (yyval.nd_obj).nd = mknode(NULL, NULL, "printf"); }
#line 1479 "y.tab.c"
    break;

  case 22: /* $@7: %empty  */
#line 70 "parser.y"
       { add('K'); }
#line 1485 "y.tab.c"
    break;

  case 23: /* body: SCAN $@7 BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM body  */
#line 70 "parser.y"
                                                                               { (yyval.nd_obj).nd = mknode(NULL, NULL, "scanf"); }
#line 1491 "y.tab.c"
    break;

  case 24: /* body: %empty  */
#line 71 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1497 "y.tab.c"
    break;

  case 25: /* $@8: %empty  */
#line 74 "parser.y"
           { add('K'); }
#line 1503 "y.tab.c"
    break;

  case 26: /* else: ELSE $@8 BRACES_OPEN body BRACES_CLOSE  */
#line 74 "parser.y"
                                                       { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[-1].nd_obj).nd, (yyvsp[-4].nd_obj).name); }
#line 1509 "y.tab.c"
    break;

  case 27: /* else: %empty  */
#line 75 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1515 "y.tab.c"
    break;

  case 28: /* condition: value relop value condition_optional  */
#line 78 "parser.y"
                                                { (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-1].nd_obj).nd, (yyvsp[-2].nd_obj).name); }
#line 1521 "y.tab.c"
    break;

  case 29: /* condition: NOT condition  */
#line 79 "parser.y"
                { (yyvsp[-1].nd_obj).nd = mknode(NULL,NULL,(yyvsp[-1].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "condition"); }
#line 1527 "y.tab.c"
    break;

  case 30: /* condition: T  */
#line 80 "parser.y"
    { add('K'); (yyval.nd_obj).nd = NULL; }
#line 1533 "y.tab.c"
    break;

  case 31: /* condition: F  */
#line 81 "parser.y"
    { add('K'); (yyval.nd_obj).nd = NULL; }
#line 1539 "y.tab.c"
    break;

  case 32: /* condition: value  */
#line 82 "parser.y"
        { (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1545 "y.tab.c"
    break;

  case 33: /* condition_optional: AND condition  */
#line 85 "parser.y"
                                  { (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj).nd, NULL, (yyvsp[-1].nd_obj).name); }
#line 1551 "y.tab.c"
    break;

  case 34: /* condition_optional: OR condition  */
#line 86 "parser.y"
               { (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj).nd, NULL, (yyvsp[-1].nd_obj).name); }
#line 1557 "y.tab.c"
    break;

  case 35: /* condition_optional: %empty  */
#line 87 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1563 "y.tab.c"
    break;

  case 36: /* $@9: %empty  */
#line 90 "parser.y"
                       { add('V'); }
#line 1569 "y.tab.c"
    break;

  case 37: /* statement: datatype ID $@9 init  */
#line 90 "parser.y"
                                          { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "declaration"); }
#line 1575 "y.tab.c"
    break;

  case 38: /* statement: ID ASSIGN expression  */
#line 91 "parser.y"
                        { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "="); }
#line 1581 "y.tab.c"
    break;

  case 39: /* statement: ID relop expression  */
#line 92 "parser.y"
                        { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "="); }
#line 1587 "y.tab.c"
    break;

  case 40: /* init: ASSIGN expression  */
#line 95 "parser.y"
                        { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1593 "y.tab.c"
    break;

  case 41: /* init: %empty  */
#line 96 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1599 "y.tab.c"
    break;

  case 42: /* expression: value arithmetic expression  */
#line 99 "parser.y"
                                        { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 1605 "y.tab.c"
    break;

  case 43: /* expression: value  */
#line 100 "parser.y"
        { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1611 "y.tab.c"
    break;

  case 54: /* value: NUM  */
#line 118 "parser.y"
           { add('C'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1617 "y.tab.c"
    break;

  case 55: /* value: REAL  */
#line 119 "parser.y"
       { add('C'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1623 "y.tab.c"
    break;

  case 56: /* value: SENTENCE  */
#line 120 "parser.y"
           { add('C'); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1629 "y.tab.c"
    break;

  case 57: /* value: ID  */
#line 121 "parser.y"
     { (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1635 "y.tab.c"
    break;

  case 58: /* $@10: %empty  */
#line 124 "parser.y"
            { add('K'); }
#line 1641 "y.tab.c"
    break;

  case 59: /* return: RET $@10 expression DELIM  */
#line 124 "parser.y"
                                           { (yyvsp[-3].nd_obj).nd = mknode(NULL, NULL, "return"); (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "RETURN"); }
#line 1647 "y.tab.c"
    break;


#line 1651 "y.tab.c"

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 127 "parser.y"


void printBTHelper(char* prefix, struct node* ptr, int isLeft) {
    if( ptr != NULL ) {
        printf(prefix);
        if(isLeft) { printf("├──"); } 
		else { printf("└──"); }
        printf(ptr->token);
		printf("\n");
		char* addon = isLeft ? "│   " : "    ";
    	int len2 = strlen(addon);
    	int len1 = strlen(prefix);
    	char* result = (char*)malloc(len1 + len2 + 1);
    	strcpy(result, prefix);
    	strcpy(result + len1, addon);
		printBTHelper(result, ptr->left, 1);
		printBTHelper(result, ptr->right, 0);
    	free(result);
    }
}

void printBT(struct node* ptr) {
	printf("\n");
    printBTHelper("", ptr, 0);    
}


int main() {
    FILE *myfile = fopen("eg.bs", "r");
    if (!myfile) {
    	printf("Cant open the file\n");
    	return -1;
    }
    yyin = myfile;
	printf("File input !!\n");
	int p = -1;
    p = yyparse();
    /* if(!p) printf("\nSuccesfully parsed, no Syntax error found!!\n"); */
    printf("\n\n");
	printf("SYMBOL TABLE");
    printf("\n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}

	printf("\n\n");
	printf("PARSE TREE");
    printf("\n\n");
	printBT(head);
    fclose(myfile);
    return p;
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void add(char c) {

  q=search(yytext);
  /* printf("%d %c\n",q,c); */
  if(!q) {
    if(c == 'H') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Header");
			count++;
		}
		else if(c == 'K') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c == 'V') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Function");
			count++;
		}
	}
}

struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void insert_type() {
	strcpy(type, yytext);
}



void yyerror(const char* msg) {
  fprintf(stderr, "%s\n", msg);
}

