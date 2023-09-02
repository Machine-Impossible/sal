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
    #include <math.h>

    void yyerror(const char *s);
    int yylex();
    int yywrap();
    extern FILE *yyin;
	extern FILE *yytext;
    void add(char);
    void insert_type();
    int search(char *);
	void fill(char *, float);
    struct node* mknode(struct node *left, struct node *right, char *token);

	char QUADS[100][100];
	int Q = 0;

    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        float value;
        int line_no;
    } symbol_table[100];
	int start = 100;
    int count=0;
	int ic_idx=0;
    int label=0;
	int temp_var=0;
    int is_for=0;
    char icg[50][100];
    int q;
    char type[10];
    extern int countn;
    struct node { 
		struct node *left; 
		struct node *right; 
    	float value;
		char *token; 
    };
	struct node *head;

float calculate(float operand_1, float operand_2, char* operator){
  if(strcmp(operator, "+") == 0){
    return operand_1 + operand_2;
  } else if(strcmp(operator, "-") == 0){
    return operand_1 - operand_2;
  } else if(strcmp(operator, "*") == 0){
    return operand_1 * operand_2;
  } else if(strcmp(operator, "/") == 0){
    return operand_1 / operand_2;
  } else if(strcmp(operator, "==") == 0) {
	return operand_1 == operand_2;
  } else if(strcmp(operator, "!=") == 0) {
	return operand_1 != operand_2;
  } else if(strcmp(operator, "<") == 0) {
	return operand_1 < operand_2;
  } else if(strcmp(operator, ">") == 0) {
	return operand_1 > operand_2;
  }  else if(strcmp(operator, "<=") == 0) {
	return operand_1 <= operand_2;
  } else if(strcmp(operator, ">=") == 0) {
	return operand_1 >= operand_2;
  } 
}

void fill(char* identifier, float new_value){
	int index = search(identifier);
	symbol_table[index].value = new_value;
}

char *separator = "\n______________________________________________\n";


#line 150 "y.tab.c"

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
    POW = 267,                     /* POW  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    INCLUDE = 270,                 /* INCLUDE  */
    T = 271,                       /* T  */
    F = 272,                       /* F  */
    NUM = 273,                     /* NUM  */
    REAL = 274,                    /* REAL  */
    ID = 275,                      /* ID  */
    LE = 276,                      /* LE  */
    GE = 277,                      /* GE  */
    EQ = 278,                      /* EQ  */
    NE = 279,                      /* NE  */
    GT = 280,                      /* GT  */
    LT = 281,                      /* LT  */
    NOT = 282,                     /* NOT  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    ADD = 285,                     /* ADD  */
    SUB = 286,                     /* SUB  */
    DIV = 287,                     /* DIV  */
    MULT = 288,                    /* MULT  */
    ASSIGN = 289,                  /* ASSIGN  */
    BRACES_OPEN = 290,             /* BRACES_OPEN  */
    BRACES_CLOSE = 291,            /* BRACES_CLOSE  */
    BRACKET_OPEN = 292,            /* BRACKET_OPEN  */
    BRACKET_CLOSE = 293,           /* BRACKET_CLOSE  */
    DELIM = 294,                   /* DELIM  */
    COMM = 295,                    /* COMM  */
    SENTENCE = 296                 /* SENTENCE  */
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
#define POW 267
#define IF 268
#define ELSE 269
#define INCLUDE 270
#define T 271
#define F 272
#define NUM 273
#define REAL 274
#define ID 275
#define LE 276
#define GE 277
#define EQ 278
#define NE 279
#define GT 280
#define LT 281
#define NOT 282
#define AND 283
#define OR 284
#define ADD 285
#define SUB 286
#define DIV 287
#define MULT 288
#define ASSIGN 289
#define BRACES_OPEN 290
#define BRACES_CLOSE 291
#define BRACKET_OPEN 292
#define BRACKET_CLOSE 293
#define DELIM 294
#define COMM 295
#define SENTENCE 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 80 "parser.y"
 
	struct var_name { 
		char name[100]; 
		struct node* nd;
		float value;
	} nd_obj; 

    struct var_name2 { 
			char name[100]; 
			struct node* nd;
			char type[10];
			float value;
		} nd_obj2; 


    struct var_name3 {
			char name[100];
			struct node* nd;
			char if_body[5];
			char else_body[5];
			float value;
		} nd_obj3;

#line 309 "y.tab.c"

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
  YYSYMBOL_POW = 12,                       /* POW  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_INCLUDE = 15,                   /* INCLUDE  */
  YYSYMBOL_T = 16,                         /* T  */
  YYSYMBOL_F = 17,                         /* F  */
  YYSYMBOL_NUM = 18,                       /* NUM  */
  YYSYMBOL_REAL = 19,                      /* REAL  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_GE = 22,                        /* GE  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_NE = 24,                        /* NE  */
  YYSYMBOL_GT = 25,                        /* GT  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_ADD = 30,                       /* ADD  */
  YYSYMBOL_SUB = 31,                       /* SUB  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_MULT = 33,                      /* MULT  */
  YYSYMBOL_ASSIGN = 34,                    /* ASSIGN  */
  YYSYMBOL_BRACES_OPEN = 35,               /* BRACES_OPEN  */
  YYSYMBOL_BRACES_CLOSE = 36,              /* BRACES_CLOSE  */
  YYSYMBOL_BRACKET_OPEN = 37,              /* BRACKET_OPEN  */
  YYSYMBOL_BRACKET_CLOSE = 38,             /* BRACKET_CLOSE  */
  YYSYMBOL_DELIM = 39,                     /* DELIM  */
  YYSYMBOL_COMM = 40,                      /* COMM  */
  YYSYMBOL_SENTENCE = 41,                  /* SENTENCE  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* '&'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_headers = 46,                   /* headers  */
  YYSYMBOL_47_1 = 47,                      /* $@1  */
  YYSYMBOL_main = 48,                      /* main  */
  YYSYMBOL_datatype = 49,                  /* datatype  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_body = 52,                      /* body  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_56_7 = 56,                      /* $@7  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_58_9 = 58,                      /* $@9  */
  YYSYMBOL_else = 59,                      /* else  */
  YYSYMBOL_60_10 = 60,                     /* $@10  */
  YYSYMBOL_condition = 61,                 /* condition  */
  YYSYMBOL_condition_optional = 62,        /* condition_optional  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_64_11 = 64,                     /* $@11  */
  YYSYMBOL_init = 65,                      /* init  */
  YYSYMBOL_expression = 66,                /* expression  */
  YYSYMBOL_arithmetic = 67,                /* arithmetic  */
  YYSYMBOL_relop = 68,                     /* relop  */
  YYSYMBOL_value = 69,                     /* value  */
  YYSYMBOL_return = 70,                    /* return  */
  YYSYMBOL_71_12 = 71                      /* $@12  */
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
#define YYLAST   128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
       2,     2,     2,     2,     2,     2,     2,     2,    43,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   109,   109,   112,   112,   113,   117,   121,   122,   123,
     124,   124,   125,   125,   126,   129,   129,   137,   137,   137,
     137,   138,   139,   139,   140,   140,   141,   144,   144,   145,
     148,   164,   165,   166,   167,   170,   171,   172,   175,   175,
     176,   177,   180,   181,   184,   185,   188,   189,   190,   191,
     195,   196,   197,   198,   199,   200,   203,   204,   205,   206,
     209,   209
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
  "INT", "FLOAT", "STRING", "BOOL", "RET", "FOR", "POW", "IF", "ELSE",
  "INCLUDE", "T", "F", "NUM", "REAL", "ID", "LE", "GE", "EQ", "NE", "GT",
  "LT", "NOT", "AND", "OR", "ADD", "SUB", "DIV", "MULT", "ASSIGN",
  "BRACES_OPEN", "BRACES_CLOSE", "BRACKET_OPEN", "BRACKET_CLOSE", "DELIM",
  "COMM", "SENTENCE", "','", "'&'", "$accept", "program", "headers", "$@1",
  "main", "datatype", "$@2", "$@3", "body", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "else", "$@10", "condition", "condition_optional",
  "statement", "$@11", "init", "expression", "arithmetic", "relop",
  "value", "return", "$@12", YY_NULLPTR
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
     295,   296,    44,    38
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
      -9,   -68,     7,    70,    -9,   -68,   -68,   -68,   -68,   -68,
     -68,   -23,    -5,   -68,   -21,   -19,    -6,   -68,   -10,     0,
       8,    -3,     2,    53,     6,     4,   -68,   -68,   -68,   -68,
      73,    28,    39,    15,    53,    35,    19,    25,    42,    44,
     -68,   -68,   -68,   -68,   -68,   -68,     5,     5,   -68,   -68,
      29,    53,   -68,    34,    41,    45,    22,    -7,   -68,   -68,
     -68,   -68,   -68,    37,   -68,    49,     5,   -68,   -68,    46,
      52,    50,    48,   -68,   -68,    -7,    68,    79,   -68,   -68,
     -68,   -68,     5,     5,   -68,    69,    53,    71,    66,    -7,
     -68,   -68,     5,   -68,   -68,   -68,   -68,    53,    91,    74,
      56,   -25,   -68,    76,    22,    53,    -7,    -7,   -68,    77,
      80,    81,   -68,   -68,    53,    84,   -68,   -68,    53,    98,
      85,   -68,    53,    53,    87,   -68,   -68,    53,    88,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     3,     0,    14,     5,     1,    10,    12,     7,     8,
       9,     0,     0,     4,     0,     0,     0,     6,     0,     0,
       0,     0,     0,    26,     0,     0,    10,    12,    15,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    51,    50,     0,     0,    38,    60,
       0,    26,    11,     0,     0,     0,     0,     0,    56,    57,
      59,    58,    40,    45,    41,    43,     0,     2,    21,     0,
       0,     0,     0,    32,    33,     0,     0,    34,    46,    47,
      49,    48,     0,     0,    39,     0,     0,     0,     0,     0,
      31,    18,     0,    44,    42,    61,    13,    26,     0,     0,
       0,    37,    23,     0,     0,    26,     0,     0,    30,     0,
       0,     0,    35,    36,    26,     0,    19,    25,    26,    29,
       0,    27,    26,    26,     0,    20,    16,    26,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   111,   -68,   -68,   117,   -68,   -68,   -34,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -67,   -68,   -51,
     -68,   -68,   -45,   -68,    51,   -56,   -68,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    11,    31,    14,    15,    32,    38,
      39,   100,   119,    36,    37,   122,   124,    76,   108,    33,
      65,    84,    62,    82,    47,    63,    50,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    77,    64,   106,   107,    72,     1,     5,    90,    73,
      74,    58,    59,    60,    16,    17,    18,    68,    19,    77,
      75,    85,    99,    58,    59,    60,     6,     7,     8,     9,
      10,    21,    20,    77,    61,    24,   101,    93,    94,   112,
     113,    22,    30,    23,    25,    34,    61,    35,    48,    49,
      77,    77,    96,   110,    51,    53,    54,    26,    27,     8,
       9,    10,    55,   102,    28,    67,    29,    78,    79,    80,
      81,   111,    69,    30,     6,     7,     8,     9,    10,    56,
     117,    57,    70,    83,   120,    86,    71,    89,   125,   126,
      87,   105,    88,   128,    40,    41,    42,    43,    44,    45,
      40,    41,    42,    43,    44,    45,    91,    46,    95,    98,
      97,   103,   121,   104,   109,    13,   114,   116,   115,   118,
      12,   123,   127,     0,   129,     0,     0,     0,    92
};

static const yytype_int8 yycheck[] =
{
      34,    57,    47,    28,    29,    56,    15,     0,    75,    16,
      17,    18,    19,    20,    37,    20,    37,    51,    37,    75,
      27,    66,    89,    18,    19,    20,     4,     5,     6,     7,
       8,    41,    38,    89,    41,    38,    92,    82,    83,   106,
     107,    41,    20,    35,    42,    39,    41,    43,    20,    10,
     106,   107,    86,   104,    39,    20,    37,     4,     5,     6,
       7,     8,    37,    97,    11,    36,    13,    30,    31,    32,
      33,   105,    38,    20,     4,     5,     6,     7,     8,    37,
     114,    37,    41,    34,   118,    39,    41,    39,   122,   123,
      38,    35,    42,   127,    21,    22,    23,    24,    25,    26,
      21,    22,    23,    24,    25,    26,    38,    34,    39,    43,
      39,    20,    14,    39,    38,     4,    39,    36,    38,    35,
       3,    36,    35,    -1,    36,    -1,    -1,    -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    45,    46,    47,     0,     4,     5,     6,     7,
       8,    48,    49,    46,    50,    51,    37,    20,    37,    37,
      38,    41,    41,    35,    38,    42,     4,     5,    11,    13,
      20,    49,    52,    63,    39,    43,    57,    58,    53,    54,
      21,    22,    23,    24,    25,    26,    34,    68,    20,    10,
      70,    39,    52,    20,    37,    37,    37,    37,    18,    19,
      20,    41,    66,    69,    66,    64,    71,    36,    52,    38,
      41,    41,    63,    16,    17,    27,    61,    69,    30,    31,
      32,    33,    67,    34,    65,    66,    39,    38,    42,    39,
      61,    38,    68,    66,    66,    39,    52,    39,    43,    61,
      55,    69,    52,    20,    39,    35,    28,    29,    62,    38,
      63,    52,    61,    61,    39,    38,    36,    52,    35,    56,
      52,    14,    59,    36,    60,    52,    52,    35,    52,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    47,    46,    46,    48,    49,    49,    49,
      50,    49,    51,    49,    49,    53,    52,    54,    55,    56,
      52,    52,    57,    52,    58,    52,    52,    60,    59,    59,
      61,    61,    61,    61,    61,    62,    62,    62,    64,    63,
      63,    63,    65,    65,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      71,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     0,     3,     0,     2,     1,     1,     1,
       0,     7,     0,    10,     0,     0,    13,     0,     0,     0,
      12,     3,     0,     7,     0,    10,     0,     0,     5,     0,
       4,     2,     1,     1,     1,     2,     2,     0,     0,     4,
       3,     3,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4
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
#line 109 "parser.y"
                                                                                      { (yyvsp[-6].nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "main"); (yyval.nd_obj).nd = mknode((yyvsp[-7].nd_obj).nd, (yyvsp[-6].nd_obj).nd, "program"); head = (yyval.nd_obj).nd; }
#line 1448 "y.tab.c"
    break;

  case 3: /* $@1: %empty  */
#line 112 "parser.y"
                 { add('H'); }
#line 1454 "y.tab.c"
    break;

  case 4: /* headers: INCLUDE $@1 headers  */
#line 112 "parser.y"
                                       { (yyvsp[-2].nd_obj).nd = mknode( NULL, NULL, (yyvsp[-2].nd_obj).name ); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, NULL, "headers"); }
#line 1460 "y.tab.c"
    break;

  case 5: /* headers: %empty  */
#line 113 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1466 "y.tab.c"
    break;

  case 6: /* main: datatype ID  */
#line 117 "parser.y"
                  { add('F'); }
#line 1472 "y.tab.c"
    break;

  case 7: /* datatype: INT  */
#line 121 "parser.y"
              { insert_type(); }
#line 1478 "y.tab.c"
    break;

  case 8: /* datatype: FLOAT  */
#line 122 "parser.y"
        { insert_type(); }
#line 1484 "y.tab.c"
    break;

  case 9: /* datatype: STRING  */
#line 123 "parser.y"
         { insert_type(); }
#line 1490 "y.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 124 "parser.y"
        { add('K'); }
#line 1496 "y.tab.c"
    break;

  case 11: /* datatype: PRINT $@2 BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body  */
#line 124 "parser.y"
                                                                     { (yyval.nd_obj).nd = mknode(NULL, NULL, "printf"); }
#line 1502 "y.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 125 "parser.y"
       { add('K'); }
#line 1508 "y.tab.c"
    break;

  case 13: /* datatype: SCAN $@3 BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM body  */
#line 125 "parser.y"
                                                                               { (yyval.nd_obj).nd = mknode(NULL, NULL, "scanf"); }
#line 1514 "y.tab.c"
    break;

  case 14: /* datatype: %empty  */
#line 126 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1520 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 129 "parser.y"
          { add('K'); is_for = 1; }
#line 1526 "y.tab.c"
    break;

  case 16: /* body: FOR $@4 BRACKET_OPEN statement DELIM condition DELIM statement BRACKET_CLOSE BRACES_OPEN body BRACES_CLOSE body  */
#line 129 "parser.y"
                                                                                                                                            { 
	struct node *temp = mknode((yyvsp[-7].nd_obj3).nd, (yyvsp[-5].nd_obj).nd, "CONDITION"); 
	struct node *temp2 = mknode((yyvsp[-9].nd_obj).nd, temp, "CONDITION"); 
	(yyval.nd_obj).nd = mknode(temp2, (yyvsp[-2].nd_obj).nd, (yyvsp[-12].nd_obj).name); 
	sprintf(icg[ic_idx++], "JUMP to %s\n", (yyvsp[-7].nd_obj3).if_body);
	sprintf(icg[ic_idx++], "%s", separator);
	sprintf(icg[ic_idx++], "\nLABEL %s:\n", (yyvsp[-7].nd_obj3).else_body);
 }
#line 1539 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 137 "parser.y"
     { add('K'); is_for = 0; }
#line 1545 "y.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 137 "parser.y"
                                                                    { sprintf(icg[ic_idx++], "%s", separator); sprintf(icg[ic_idx++], "\nLABEL %s:\n", (yyvsp[-1].nd_obj3).if_body); }
#line 1551 "y.tab.c"
    break;

  case 19: /* $@7: %empty  */
#line 137 "parser.y"
                                                                                                                                                                                                    { sprintf(icg[ic_idx++], "%s", separator); sprintf(icg[ic_idx++], "\nLABEL %s:\n", (yyvsp[-5].nd_obj3).else_body); }
#line 1557 "y.tab.c"
    break;

  case 20: /* body: IF $@5 BRACKET_OPEN condition BRACKET_CLOSE $@6 BRACES_OPEN body BRACES_CLOSE $@7 else body  */
#line 137 "parser.y"
                                                                                                                                                                                                                                                                                                                  { struct node *iff = mknode((yyvsp[-8].nd_obj3).nd, (yyvsp[-4].nd_obj).nd, (yyvsp[-11].nd_obj).name); (yyval.nd_obj).nd = mknode(iff, (yyvsp[-1].nd_obj).nd, "if-else"); sprintf(icg[ic_idx++], "GOTO next\n"); }
#line 1563 "y.tab.c"
    break;

  case 21: /* body: statement DELIM body  */
#line 138 "parser.y"
                       { (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj).nd, "bline"); }
#line 1569 "y.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 139 "parser.y"
        { add('K'); }
#line 1575 "y.tab.c"
    break;

  case 23: /* body: PRINT $@8 BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body  */
#line 139 "parser.y"
                                                                     { (yyval.nd_obj).nd = mknode(NULL, NULL, "printf"); }
#line 1581 "y.tab.c"
    break;

  case 24: /* $@9: %empty  */
#line 140 "parser.y"
       { add('K'); }
#line 1587 "y.tab.c"
    break;

  case 25: /* body: SCAN $@9 BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM body  */
#line 140 "parser.y"
                                                                                { (yyval.nd_obj).nd = mknode(NULL, NULL, "scanf"); }
#line 1593 "y.tab.c"
    break;

  case 26: /* body: %empty  */
#line 141 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1599 "y.tab.c"
    break;

  case 27: /* $@10: %empty  */
#line 144 "parser.y"
           { add('K'); }
#line 1605 "y.tab.c"
    break;

  case 28: /* else: ELSE $@10 BRACES_OPEN body BRACES_CLOSE  */
#line 144 "parser.y"
                                                       { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[-1].nd_obj).nd, (yyvsp[-4].nd_obj).name); }
#line 1611 "y.tab.c"
    break;

  case 29: /* else: %empty  */
#line 145 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1617 "y.tab.c"
    break;

  case 30: /* condition: value relop value condition_optional  */
#line 148 "parser.y"
                                                { 
	(yyval.nd_obj3).nd = mknode((yyvsp[-3].nd_obj2).nd, (yyvsp[-1].nd_obj2).nd, (yyvsp[-2].nd_obj).name); 
	if(is_for) {
		sprintf((yyval.nd_obj3).if_body, "L%d", label++);
		sprintf(icg[ic_idx++], "%s", separator);
		sprintf(icg[ic_idx++], "\nLABEL %s:\n", (yyval.nd_obj3).if_body);
		sprintf(icg[ic_idx++], "\nif NOT (%s %s %s) GOTO L%d\n", (yyvsp[-3].nd_obj2).name, (yyvsp[-2].nd_obj).name, (yyvsp[-1].nd_obj2).name, label);
		sprintf((yyval.nd_obj3).else_body, "L%d", label++);
	} else {
		sprintf(icg[ic_idx++], "%s", separator);
		sprintf(icg[ic_idx++], "\nif (%s %s %s) GOTO L%d else GOTO L%d\n", (yyvsp[-3].nd_obj2).name, (yyvsp[-2].nd_obj).name, (yyvsp[-1].nd_obj2).name, label, label+1);
		sprintf((yyval.nd_obj3).if_body, "L%d", label++);
		sprintf((yyval.nd_obj3).else_body, "L%d", label++);
	}
	(yyval.nd_obj3).value = calculate((yyvsp[-3].nd_obj2).value, (yyvsp[-1].nd_obj2).value, (yyvsp[-2].nd_obj).name);
}
#line 1638 "y.tab.c"
    break;

  case 31: /* condition: NOT condition  */
#line 164 "parser.y"
                { (yyvsp[-1].nd_obj).nd = mknode(NULL,NULL,(yyvsp[-1].nd_obj).name); (yyval.nd_obj3).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj3).nd, "condition"); }
#line 1644 "y.tab.c"
    break;

  case 32: /* condition: T  */
#line 165 "parser.y"
    { add('K'); (yyval.nd_obj3).nd = NULL; }
#line 1650 "y.tab.c"
    break;

  case 33: /* condition: F  */
#line 166 "parser.y"
    { add('K'); (yyval.nd_obj3).nd = NULL; }
#line 1656 "y.tab.c"
    break;

  case 34: /* condition: value  */
#line 167 "parser.y"
        { (yyval.nd_obj3).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj2).name); }
#line 1662 "y.tab.c"
    break;

  case 35: /* condition_optional: AND condition  */
#line 170 "parser.y"
                                  { (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj3).nd, NULL, (yyvsp[-1].nd_obj).name); }
#line 1668 "y.tab.c"
    break;

  case 36: /* condition_optional: OR condition  */
#line 171 "parser.y"
               { (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj3).nd, NULL, (yyvsp[-1].nd_obj).name); }
#line 1674 "y.tab.c"
    break;

  case 37: /* condition_optional: %empty  */
#line 172 "parser.y"
  { (yyval.nd_obj).nd = NULL; }
#line 1680 "y.tab.c"
    break;

  case 38: /* $@11: %empty  */
#line 175 "parser.y"
                       { add('V'); }
#line 1686 "y.tab.c"
    break;

  case 39: /* statement: datatype ID $@11 init  */
#line 175 "parser.y"
                                          { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj2).nd, "declaration"); (yyvsp[-2].nd_obj).value = (yyvsp[0].nd_obj2).value; fill((yyvsp[-2].nd_obj).name, (yyvsp[-2].nd_obj).value); sprintf(icg[ic_idx++], "=\t%s\t%f\n", (yyvsp[-2].nd_obj).name, (yyvsp[-2].nd_obj).value); }
#line 1692 "y.tab.c"
    break;

  case 40: /* statement: ID ASSIGN expression  */
#line 176 "parser.y"
                        { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj2).nd, "="); (yyvsp[-2].nd_obj).value = (yyvsp[0].nd_obj2).value; fill((yyvsp[-2].nd_obj).name, (yyvsp[-2].nd_obj).value); char str[100]; sprintf(str, "%s = %d", (yyvsp[-2].nd_obj).name, (yyvsp[0].nd_obj2).value); strcpy(QUADS[Q], str); Q++; sprintf(icg[ic_idx++], "=\t%s\t%f\n", (yyvsp[-2].nd_obj).name, (yyvsp[-2].nd_obj).value); }
#line 1698 "y.tab.c"
    break;

  case 41: /* statement: ID relop expression  */
#line 177 "parser.y"
                        { (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj2).nd, "="); }
#line 1704 "y.tab.c"
    break;

  case 42: /* init: ASSIGN expression  */
#line 180 "parser.y"
                        { (yyval.nd_obj2).nd = (yyvsp[0].nd_obj2).nd; (yyval.nd_obj2).value = (yyvsp[0].nd_obj2).value; }
#line 1710 "y.tab.c"
    break;

  case 43: /* init: %empty  */
#line 181 "parser.y"
  { (yyval.nd_obj2).nd = NULL; }
#line 1716 "y.tab.c"
    break;

  case 44: /* expression: value arithmetic expression  */
#line 184 "parser.y"
                                        { (yyval.nd_obj2).nd = mknode((yyvsp[-2].nd_obj2).nd, (yyvsp[0].nd_obj2).nd, (yyvsp[-1].nd_obj).name); (yyval.nd_obj2).value = calculate((yyvsp[-2].nd_obj2).value, (yyvsp[0].nd_obj2).value, (yyvsp[-1].nd_obj).name); char str[100]; sprintf(str, "%s\t%s\t%s\t%s", (yyval.nd_obj2).name, (yyvsp[-2].nd_obj2).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj2).name); sprintf(icg[ic_idx++], "%s\t%s\t%s\t%f\n", (yyvsp[-1].nd_obj).name, (yyvsp[-2].nd_obj2).name, (yyvsp[0].nd_obj2).name, (yyval.nd_obj2).value); }
#line 1722 "y.tab.c"
    break;

  case 45: /* expression: value  */
#line 185 "parser.y"
        { (yyval.nd_obj2).nd = (yyvsp[0].nd_obj2).nd; (yyval.nd_obj2).value = (yyvsp[0].nd_obj2).value; char str[100]; sprintf(str, "%s = %s", (yyval.nd_obj2).name, (yyvsp[0].nd_obj2).name); strcpy(QUADS[Q], str); Q++; /*sprintf(icg[ic_idx++], "=\t%s\tN/A\t%s\n", $1.name, $$.name); */}
#line 1728 "y.tab.c"
    break;

  case 56: /* value: NUM  */
#line 203 "parser.y"
           { add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); (yyval.nd_obj2).value = atoi((yyvsp[0].nd_obj).name); }
#line 1734 "y.tab.c"
    break;

  case 57: /* value: REAL  */
#line 204 "parser.y"
       { add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); (yyval.nd_obj2).value = atof((yyvsp[0].nd_obj).name); }
#line 1740 "y.tab.c"
    break;

  case 58: /* value: SENTENCE  */
#line 205 "parser.y"
           { add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1746 "y.tab.c"
    break;

  case 59: /* value: ID  */
#line 206 "parser.y"
     { (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); int index = search((yyvsp[0].nd_obj).name); if(index != -1) { (yyvsp[0].nd_obj).value = symbol_table[index].value; } (yyval.nd_obj2).value = (yyvsp[0].nd_obj).value; }
#line 1752 "y.tab.c"
    break;

  case 60: /* $@12: %empty  */
#line 209 "parser.y"
            { add('K'); }
#line 1758 "y.tab.c"
    break;

  case 61: /* return: RET $@12 expression DELIM  */
#line 209 "parser.y"
                                           { (yyvsp[-3].nd_obj).nd = mknode(NULL, NULL, "return"); (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-1].nd_obj2).nd, "RETURN"); }
#line 1764 "y.tab.c"
    break;


#line 1768 "y.tab.c"

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

#line 212 "parser.y"


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
    FILE *myfile = fopen("example.sal", "r");
    if (!myfile) {
    	printf("Cant open the file\n");
    	return -1;
    }
    yyin = myfile;
	int p = -1;
    p = yyparse();
    /* if(!p) printf("\nSuccesfully parsed, no Syntax error found!!\n"); */
    printf("\n\n");
	printf("SYMBOL TABLE");
    printf("\n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER  VALUE\n");
	printf("%s", separator);
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
    	if(strcmp(symbol_table[i].type, "Variable") == 0) printf("%f\n", symbol_table[i].value);
		else printf(" N/A \n");
	}
	printf("\n\n");
	printf("PARSE TREE");
    printf("\n\n");
	printBT(head);
	printf("\n\n");
    printf("THREE ADDRESS CODE");
	printf("\n%s\n", separator);
    for(int i=0; i<ic_idx; i++){
		printf("%s", icg[i]);
	}
	printf("%s\n", separator);
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}
    fclose(myfile);
    return p;
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type)==0) {
			return i;
			break;
		}
	}
	return -1;
}

void add(char c) {

  q=search(yytext);
  if(q == -1) {
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

