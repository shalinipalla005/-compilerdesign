/* A Bison parser, made by GNU Bison 3.8.2.  */

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
    INT_TYPE = 258,                /* INT_TYPE  */
    CHAR_TYPE = 259,               /* CHAR_TYPE  */
    ASSIGN = 260,                  /* ASSIGN  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    TIMES = 263,                   /* TIMES  */
    DIVIDE = 264,                  /* DIVIDE  */
    EQUAL = 265,                   /* EQUAL  */
    NOTEQUAL = 266,                /* NOTEQUAL  */
    SEMICOLON = 267,               /* SEMICOLON  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    WHILE = 270,                   /* WHILE  */
    LPAREN = 271,                  /* LPAREN  */
    RPAREN = 272,                  /* RPAREN  */
    LBRACE = 273,                  /* LBRACE  */
    RBRACE = 274,                  /* RBRACE  */
    COMMA = 275,                   /* COMMA  */
    RETURN = 276,                  /* RETURN  */
    ID = 277,                      /* ID  */
    MAIN = 278,                    /* MAIN  */
    NUM = 279,                     /* NUM  */
    LESS_THAN = 280,               /* LESS_THAN  */
    LESS_THAN_EQUAL_TO = 281,      /* LESS_THAN_EQUAL_TO  */
    GREATER_THAN = 282,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL_TO = 283,   /* GREATER_THAN_EQUAL_TO  */
    LSQUARE = 284,                 /* LSQUARE  */
    RSQUARE = 285,                 /* RSQUARE  */
    AND = 286                      /* AND  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_TYPE 258
#define CHAR_TYPE 259
#define ASSIGN 260
#define PLUS 261
#define MINUS 262
#define TIMES 263
#define DIVIDE 264
#define EQUAL 265
#define NOTEQUAL 266
#define SEMICOLON 267
#define IF 268
#define ELSE 269
#define WHILE 270
#define LPAREN 271
#define RPAREN 272
#define LBRACE 273
#define RBRACE 274
#define COMMA 275
#define RETURN 276
#define ID 277
#define MAIN 278
#define NUM 279
#define LESS_THAN 280
#define LESS_THAN_EQUAL_TO 281
#define GREATER_THAN 282
#define GREATER_THAN_EQUAL_TO 283
#define LSQUARE 284
#define RSQUARE 285
#define AND 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "cucu.y"

    char *str;
    int num;

#line 134 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
