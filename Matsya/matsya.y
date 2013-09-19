%{
#include <stdio.h>
#include <iostream>

#include "y.tab.h"
#include "functions.h"
#include "header.h"

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);


tree_t * _C_treeRoot;

%}



%start ROOT
%token EQ
%token NE
%token LT
%token LE
%token GT
%token GE
%token PLUS
%token MINUS
%token MULT
%token DIVIDE
%token RPAREN
%token LPAREN
%token ASSIGN
%token SEMICOLON
%token IF
%token THEN
%token ELSE
%token FI 
%token WHILE
%token DO
%token OD
%token PRINT

%union{
	int ival;
	float fval;
	char* svalVar;
	char* svalText

}

%token <ival> INT
%token <fval> FLOAT
%token <svalVar> VARIABLE
%token <svalText> TEXT

%type <ival> expression expr2 expr3 expr4   
%type <svalVar> assignment
%type <svalText> text





%%

ROOT: 
				stmtseq{execute($1);}
;
statement: assignment
| PRINT expression{ $$ print($2);}
| IF expression THEN stmtseq ELSE stmtseq FI {$$= ifstmt($2,$4,$6);}
| IF expression THEN stmtseq  FI {$$= ifOnlystmt($2,$4);}
| WHILE expression DO stmtseq OD {$$= whilestmt($2,$4);}
;

assignement:designator ASSIGN expression { $$ = assignment($1,$3); }


stmtseq:
							stmtseq SEMICOLON statement {$$ = seq($1,$3);}
| statement{$$==$1;}
;
expression:
		expr2{$$=$1;}
|expr2 EQ expr2 { $$= eq($1,$3);}
|expr2 NE expr2 { $$= ne($1,$3);}
|expr2 LT expr2 { $$= lt($1,$3);}
|expr2 LE expr2 { $$= le($1,$3);}
|expr2 GT expr2 { $$= gt($1,$3);}
|expr2 GE expr2 { $$= ge($1,$3);}
;
expr2:
					expr3{ $$ == $1;}
| expr2 PLUS expr3{ $$ = plus($1,$3);}
| expr2 MINUS expr3{ $$= minus($1,$3);}
;
expr3:
					expr4{ $$=$1;}
| expr3 MULT expr4{$$ = mult($1,$3);}
| expr3 DIVIDE expr4 {$$ = divide($1,$3);}
;

expr4:
					PLUS expr4 {$$ = $2;}
| MINUS expr4 {$$ = neq($2);}
|	LPAREN expression RPAREN {$$ = $2;}
|	INT { $$ = integer($1);}
|	FLOAT{ $$ = floating($1);}
|	designator {$$ =$1;}
|	text {$$ =$1;}
;

text:
				TEXT {$$ = text($1);}
;

designator:
										VARIABLE{ $$ = variable($1); }
;

%%

main(){
	FILE *myfile = fopen("in.matsya","r");
	if(!myfile){
					cout<<" I cant open in.matsya"<<endl;
	}
	yyin = myfile
	do{
			yyparse();
	}while(!feof(yyin));
}
void yyerror(const char *s) {
								cout << "EEK, parse error!  Message: " << s<< " at line "<<line_no << endl;
								// might as well halt now:
								//exit(-1);
}
