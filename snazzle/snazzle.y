%{
#include <stdio.h>
#include <iostream>
using namespace std;

#include "y.tab.h"  // to get the token types that we return

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern int line_no; 
void testFun(int a);
void yyerror(const char *s);
%}

// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":
%union {
								int ival;
								float fval;
								char *sval;
}




// define the constant-string tokens:
%token SNAZZLE TYPE
%token END ENDL
//token END ENDL

// define the "terminal symbol" token types I'm going to use (in CAPS
// by convention), and associate each with a field of the union:
%token <ival> INT
%token <fval> FLOAT
%token <sval> STRING
%%
// the first rule defined is the highest-level rule, which in our
// case is just the concept of a whole "snazzle file":
snazzle:
header template body_section footer { cout << "done with a snazzle file!" << endl; }
								;
header:
								SNAZZLE FLOAT ENDLS { cout << "reading a snazzle file version " << $2 << endl; }
								;
template:
								typelines
								;
typelines:
								typelines typeline
								| typeline
								;
typeline:
								TYPE STRING ENDLS { cout << "new defined snazzle type: " << $2 << endl; }
								;
body_section:
								body_lines
								;
body_lines:
								body_lines body_line
								| body_line
								;
body_line:
								INT INT INT INT STRING ENDLS { cout << "new snazzle: " << $1 + $2 << $3 << $4 << $5 << endl; testFun($1); }
								;
footer:
								END ENDL
								;
ENDLS:
								ENDLS ENDL
								| ENDL ;
%%

main() {
								// open a file handle to a particular file:
								FILE *myfile = fopen("in.snazzle", "r");
								// make sure it's valid:
								if (!myfile) {
																cout << "I can't open a.snazzle.file!" << endl;
																return -1;
								}
								// set lex to read from it instead of defaulting to STDIN:
								yyin = myfile;

								// parse through the input until there is no more:	
								do {
																yyparse();
								} while (!feof(yyin));
								
}

void testFun(int a){
			cout<<" Some shit " <<a<<endl;
}
void yyerror(const char *s) {
								cout << "EEK, parse error!  Message: " << s<< " at line "<<line_no << endl;
								// might as well halt now:
								//exit(-1);
}
