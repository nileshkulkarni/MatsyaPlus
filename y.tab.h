/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     CRC = 259,
     END = 260,
     CLASSNAME = 261,
     RESPONSIBILITY = 262,
     COLABRATION = 263,
     STRING = 264,
     INT = 265,
     CHAR = 266,
     PTR = 267,
     VARIABLE = 268,
     METHODNAME = 269,
     USING = 270,
     HAS_A = 271,
     KIND_OF = 272
   };
#endif
/* Tokens.  */
#define CLASS 258
#define CRC 259
#define END 260
#define CLASSNAME 261
#define RESPONSIBILITY 262
#define COLABRATION 263
#define STRING 264
#define INT 265
#define CHAR 266
#define PTR 267
#define VARIABLE 268
#define METHODNAME 269
#define USING 270
#define HAS_A 271
#define KIND_OF 272




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 11 "crc.y"

 char stval[100];
 char* ptr;
 COLABR *colbr;
 ATTR *attr;
 RESPONS *resp;
 CARD *card;
 


/* Line 2068 of yacc.c  */
#line 95 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


