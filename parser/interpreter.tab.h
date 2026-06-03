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

#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    SEMICOLON = 258,               /* SEMICOLON  */
    COMMA = 259,                   /* COMMA  */
    LETFCURLYBRACKET = 260,        /* LETFCURLYBRACKET  */
    RIGHTCURLYBRACKET = 261,       /* RIGHTCURLYBRACKET  */
    ASSIGNMENT = 262,              /* ASSIGNMENT  */
    PRINT = 263,                   /* PRINT  */
    READ = 264,                    /* READ  */
    READ_STRING = 265,             /* READ_STRING  */
    IF = 266,                      /* IF  */
    THEN = 267,                    /* THEN  */
    ELSE = 268,                    /* ELSE  */
    END_IF = 269,                  /* END_IF  */
    WHILE = 270,                   /* WHILE  */
    DO = 271,                      /* DO  */
    END_WHILE = 272,               /* END_WHILE  */
    REPEAT = 273,                  /* REPEAT  */
    UNTIL = 274,                   /* UNTIL  */
    FOR = 275,                     /* FOR  */
    FROM = 276,                    /* FROM  */
    TO = 277,                      /* TO  */
    STEP = 278,                    /* STEP  */
    END_FOR = 279,                 /* END_FOR  */
    SWITCH = 280,                  /* SWITCH  */
    CASE = 281,                    /* CASE  */
    DEFAULT = 282,                 /* DEFAULT  */
    END_SWITCH = 283,              /* END_SWITCH  */
    CONCATENATION = 284,           /* CONCATENATION  */
    DO_WHILE = 285,                /* DO_WHILE  */
    AND = 286,                     /* AND  */
    OR = 287,                      /* OR  */
    NOT = 288,                     /* NOT  */
    CLEAR_SCREEN_CMD = 289,        /* CLEAR_SCREEN_CMD  */
    PLACE_CMD = 290,               /* PLACE_CMD  */
    INC = 291,                     /* INC  */
    DEC = 292,                     /* DEC  */
    FACT = 293,                    /* FACT  */
    PLUS_ASSIGN = 294,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 295,            /* MINUS_ASSIGN  */
    MULT_ASSIGN = 296,             /* MULT_ASSIGN  */
    DIV_ASSIGN = 297,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 298,              /* MOD_ASSIGN  */
    QUESTION = 299,                /* QUESTION  */
    RED_TEXT = 300,                /* RED_TEXT  */
    GREEN_TEXT = 301,              /* GREEN_TEXT  */
    BLUE_TEXT = 302,               /* BLUE_TEXT  */
    YELLOW_TEXT = 303,             /* YELLOW_TEXT  */
    RESET_TEXT = 304,              /* RESET_TEXT  */
    FACTORIAL_KW = 305,            /* FACTORIAL_KW  */
    NUMBER = 306,                  /* NUMBER  */
    BOOL = 307,                    /* BOOL  */
    VARIABLE = 308,                /* VARIABLE  */
    UNDEFINED = 309,               /* UNDEFINED  */
    CONSTANT = 310,                /* CONSTANT  */
    BUILTIN = 311,                 /* BUILTIN  */
    STRING = 312,                  /* STRING  */
    GREATER_OR_EQUAL = 313,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 314,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 315,            /* GREATER_THAN  */
    LESS_THAN = 316,               /* LESS_THAN  */
    EQUAL = 317,                   /* EQUAL  */
    NOT_EQUAL = 318,               /* NOT_EQUAL  */
    PLUS = 319,                    /* PLUS  */
    MINUS = 320,                   /* MINUS  */
    MULTIPLICATION = 321,          /* MULTIPLICATION  */
    DIVISION = 322,                /* DIVISION  */
    MODULO = 323,                  /* MODULO  */
    INTEGER_DIVISION = 324,        /* INTEGER_DIVISION  */
    LPAREN = 325,                  /* LPAREN  */
    RPAREN = 326,                  /* RPAREN  */
    UNARY = 327,                   /* UNARY  */
    POWER = 328                    /* POWER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 143 "interpreter.y"

  double number;
  char * string; 				 /* NEW in example 7 */
  bool logic;						 /* NEW in example 15 */
  lp::ExpNode *expNode;  			 /* NEW in example 16 */
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; /* NEW in example 16 */
  lp::Statement *st;				 /* NEW in example 16 */
  lp::AST *prog;					 /* NEW in example 16 */
  std::list<lp::CaseStmt *> *cases;  /* Lista de casos para el switch */
  lp::CaseStmt *casestmt;            /* Nodo de un caso individual */

#line 150 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
