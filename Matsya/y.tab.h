#include "header.h"
#define EQ 257
#define NE 258
#define LT 259
#define LE 260
#define GT 261
#define GE 262
#define PLUS 263
#define MINUS 264
#define MULT 265
#define DIVIDE 266
#define RPAREN 267
#define LPAREN 268
#define ASSIGN 269
#define SEMICOLON 270
#define IF 271
#define THEN 272
#define ELSE 273
#define FI 274
#define WHILE 275
#define DO 276
#define OD 277
#define PRINT 278
#define INT 279
#define FLOAT 280
#define VARIABLE 281
#define ENDL 282
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	int ival;
	float fval;
	char* svalVar;
	tree_t* node;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
