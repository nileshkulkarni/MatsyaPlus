%{
#include "y.tab.h"
extern int yylval;
//extern char* yytext[];
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
[0-9]+ {return yyval.ival =atoi(yytext);return INT;}
[0-9]+\.[0-9]+ {return yyval.fval =atof(yytext);return FLOAT;}
\'([a-zA-z0-9]+\s+)+\' {yyval.svalText = strdup(yytext); return TEXT;}
[a-z][a-zA-Z0-9]* {	yyval.sval = strdup(yytext);return VARIABLE;}
\n {return ENDL;}
%%
#ifndef yywarp
yywrap(){	return 1;}
#endif
