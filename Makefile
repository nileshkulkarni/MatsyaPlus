C++=/sun/pollux/home1/home/lang/CC-4.0.1 -Dsun4  -g

crc: main.o crcy.o crcl.o dstruct.o
								$(C++) -DEXTERNC -I/. crcl.o  crcy.o dstruct.o main.o  -o crc
crcl.o:	crc.l
								lex crc.l
								mv lex.yy.c crcl.cxx
								gcc -c crcl.cxx -o crcl.o
crcy.o: crc.y
								yacc -dvt crc.y
								mv y.tab.c crcy.cxx
								gcc -c crcy.cxx -o crcy.o
main.o: main.c
									gcc -c main.c -o main.o
dstruct.o:dstruct.c
									gcc -c dstruct.c -o dstruct.o
