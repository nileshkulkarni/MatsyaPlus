matsya: lex.yy.c y.tab.c y.tab.h header.h function.o evaluate.o
	g++ -g function.o evaluate.o y.tab.c lex.yy.c -lfl -o matsya -Wno-write-strings
function.o: function.cpp header.h function.h
	g++ -c -g function.cpp -Wno-write-strings

evaluate.o: evaluate.cpp evaluate.h header.h 	
	g++ -c -g evaluate.cpp	-Wno-write-strings
y.tab.c y.tab.h: matsya.y
	yacc -d matsya.y

lex.yy.c:	matsya.lex y.tab.h
	flex -olex.yy.c matsya.lex

clean:
	rm lex.yy.c y.tab.h y.tab.c *.o 
