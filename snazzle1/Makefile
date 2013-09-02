y.tab.c y.tab.h: snazzle.y
								yacc -d snazzle.y

lex.yy.c: snazzle.lex y.tab.h
								lex snazzle.lex

snazzle: lex.yy.c y.tab.c y.tab.h
								g++ y.tab.c lex.yy.c -lfl -o snazzle
