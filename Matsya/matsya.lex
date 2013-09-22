%{
#include "y.tab.h"
#include <iostream>
using namespace std;
//#define YY_DECL extern "C" int yylex()
//extern char* yytext[];
extern YYSTYPE yyval;
extern int lineNo;
%}
%%
[ \n\t] ;
"=" {return EQ;}
"!=" {return NE;}
"<" {return LT;}
"<=" {return LE;}
">" {return GT;}
">=" {return GE;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MULT;}
"/" {return DIVIDE;}
")" {return RPAREN;}
"(" {return RPAREN;}
":=" {return ASSIGN;}
";" {return SEMICOLON;}
"IF" {return IF;}
"FI" {return FI;}
"THEN" {return THEN;}
"ELSE" {return ELSE;}
"WHILE" {return WHILE;}
"DO" {return DO;}
"OD" {return OD;}
"PRINT" { return PRINT;}
[0-9]+ {yyval.ival =atoi(yytext);
										return INT;}
[0-9]+\.[0-9]+ {yyval.fval =atof(yytext);
										return FLOAT;}
[a-zA-Z][a-zA-Z0-9]* {
int len = strlen (yytext) + 1;
yyval.svalVar =(yytext);
										return VARIABLE;}
%%
/*
#ifndef yywarp
int yywrap(){	return 1;}
#endif
*/
