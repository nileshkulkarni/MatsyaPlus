%{
#include <stdio.h>
#include <iostream>
using namespace std;
#include "y.tab.h"
#include "function.h"
#include "header.h"

//extern "C" int yylex();
extern  int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
int lineNo;
void yyerror(const char *s);
extern char* yytext;
tree_t * _treeRoot;
 
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
%token  INT
%token FLOAT
%token VARIABLE
%token ENDL

%union{
	int ival;
	float fval;
	char* svalVar;
	struct tree_t* node;
}

%token <ival> INT
%token <fval> FLOAT
%token <svalVar> VARIABLE

%type <node> ROOT statement assignment stmtseq expression expr2 expr3 expr4 designator 			

%%

ROOT: stmtseq   { $$=createTree($1);}
;

statement: assignment SEMICOLON{ $$=$1;}
| PRINT expression SEMICOLON{ tree_t* t = $2;
	 				$$= print($2);}
| IF expression THEN stmtseq  ELSE  stmtseq  FI {cout<<"\n";$$= ifstmt($2,$4,$6);}
| IF expression THEN stmtseq FI {$$= ifOnlystmt($2,$4);}
| WHILE expression DO stmtseq OD {$$= whilestmt($2,$4);}
;

assignment:designator ASSIGN expression {$$ = assignment($1,$3); }
;

stmtseq: stmtseq statement { $$ = seq($1,$2);}
| statement  {$$=singleStmt($1);}
;

expression: expr2{ $$=$1;}
|expr2 EQ expr2 { $$= operators("=",$1,$3);}
|expr2 NE expr2 { $$=  operators("!=",$1,$3);}
|expr2 LT expr2 { $$= operators("<",$1,$3);}
|expr2 LE expr2 { $$= operators("<=",$1,$3);}
|expr2 GT expr2 { $$= operators(">",$1,$3);}
|expr2 GE expr2 { $$= operators(">=",$1,$3);}
;

expr2: expr3{ $$ == $1;}
| expr2 PLUS expr3{ $$ = operators("+",$1,$3);}
| expr2 MINUS expr3{ $$= operators("-",$1,$3);}
;

expr3: expr4{  $$=$1;}
| expr3 MULT expr4{$$ = operators("*",$1,$3);}
| expr3 DIVIDE expr4 {$$ = operators("/",$1,$3);}
;

expr4:
 PLUS expr4 {$$ = $2;}
| MINUS expr4 {$$ = $2;}
|	LPAREN expression RPAREN {$$ = $2;}
|	INT { int val = atoi(yytext);
		$$ = integer(val);}
|	designator {$$ =$1;}
;

designator:
	VARIABLE{$$ = variable(yytext); }
;

%%

int main(){
	FILE *myfile = fopen("in.matsya","r");
	if(!myfile){
				std::cout<<" I cant open in.matsya\n"<<std::endl;
	}
	yyin = myfile;
	do{
			yyparse();
	}while(!feof(yyin));
	printParseTree();

}

void yyerror(const char* s){
		std::cout<<"parsing error + "<< s<<std::endl;
		std::cout<<"line no + "<< lineNo<<std::endl;
		return;
}

