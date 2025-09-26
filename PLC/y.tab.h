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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    CHAR_LITERAL = 260,            /* CHAR_LITERAL  */
    BEGIN_PROGRAM = 261,           /* BEGIN_PROGRAM  */
    END_PROGRAM = 262,             /* END_PROGRAM  */
    INT = 263,                     /* INT  */
    FLOAT = 264,                   /* FLOAT  */
    CHAR = 265,                    /* CHAR  */
    IF = 266,                      /* IF  */
    WHILE = 267,                   /* WHILE  */
    COLON = 268,                   /* COLON  */
    SEMICOLON = 269,               /* SEMICOLON  */
    ASSIGN = 270,                  /* ASSIGN  */
    PLUS = 271,                    /* PLUS  */
    MINUS = 272,                   /* MINUS  */
    MULT = 273,                    /* MULT  */
    DIV = 274,                     /* DIV  */
    EQUALS = 275,                  /* EQUALS  */
    NOTEQUALS = 276,               /* NOTEQUALS  */
    GREATER = 277,                 /* GREATER  */
    LESS = 278,                    /* LESS  */
    GREATEREQUAL = 279,            /* GREATEREQUAL  */
    LESSEQUAL = 280,               /* LESSEQUAL  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    ELSE = 283                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define NUMBER 259
#define CHAR_LITERAL 260
#define BEGIN_PROGRAM 261
#define END_PROGRAM 262
#define INT 263
#define FLOAT 264
#define CHAR 265
#define IF 266
#define WHILE 267
#define COLON 268
#define SEMICOLON 269
#define ASSIGN 270
#define PLUS 271
#define MINUS 272
#define MULT 273
#define DIV 274
#define EQUALS 275
#define NOTEQUALS 276
#define GREATER 277
#define LESS 278
#define GREATEREQUAL 279
#define LESSEQUAL 280
#define AND 281
#define OR 282
#define ELSE 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "mpl.y"

    char *string;
    double num;

#line 128 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
