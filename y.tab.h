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
#line 65 "parser.y"
 
	struct var_name { 
		char name[100]; 
		struct node* nd;
		float value;
	} nd_obj; 

    struct var_name2 { 
			char name[100]; 
			struct node* nd;
			char type[10];
		} nd_obj2; 


    struct var_name3 {
			char name[100];
			struct node* nd;
			char if_body[5];
			char else_body[5];
		} nd_obj3;

#line 171 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
