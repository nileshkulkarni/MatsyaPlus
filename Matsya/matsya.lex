%{
#include "y.tab.h"
//extern char* yytext[];
//extern YYSTYPE yyval;
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
";" {return SEMICOLON;}
"IF" {return IF;}
"FI" {return FI;}
"THEN" {return THEN;}
"ELSE" {return ELSE;}
"WHILE" {return WHILE;}
"DO" {return DO;}
"OD" {return OD;}
"PRINT" {return PRINT;}
[0-9]+ {//return yyval.ival =atoi(yytext);
										return INT;}
[0-9]+\.[0-9]+ {//return yyval.fval =atof(yytext);
										return FLOAT;}
[a-z][a-zA-Z0-9]* {//yyval.svalVar = strdup(yytext);
										return VARIABLE;}
\n {return ENDL;}
%%
#ifndef yywarp
int yywrap(){	return 1;}
#endif
