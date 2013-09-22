matsya: lex.yy.c y.tab.c y.tab.h header.h function.cpp
						g++ -g function.cpp y.tab.c lex.yy.c -lfl -o matsya -Wno-write-strings



y.tab.c y.tab.h: matsya.y
								yacc -d matsya.y

lex.yy.c:	matsya.lex y.tab.h
								flex -olex.yy.c matsya.lex

clean:
						rm lex.yy.c y.tab.h y.tab.c 
