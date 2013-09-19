%{
#include "y.tab.h"
#include <iostream>
using namespace std;
//#define YY_DECL extern "C" int yylex()
//extern char* yytext[];
extern YYSTYPE yyval;
%}
%%
[ \t] ;
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
";" {std::cout<<" SEMIcolon detected\n";return SEMICOLON;}
"IF" {return IF;}
"FI" {return FI;}
"THEN" {return THEN;}
"ELSE" {return ELSE;}
"WHILE" {return WHILE;}
"DO" {return DO;}
"OD" {return OD;}
"PRINT" {std::cout<<"Print\n"; return PRINT;}
[0-9]+ {//return yyval.ival =atoi(yytext);
										std::cout<<"integer\n";return INT;}
[0-9]+\.[0-9]+ {//return yyval.fval =atof(yytext);
										return FLOAT;}
[a-z][a-zA-Z0-9]* {//yyval.svalVar = strdup(yytext);
										return VARIABLE;}
\n {return ENDL;}
%%
/*
#ifndef yywarp
int yywrap(){	return 1;}
#endif
*/
