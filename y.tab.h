/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 154 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
