.SUFFIXES:
prueba: semantic.o main.o yacc.tab.o 
				gcc -o yacc semantic.o main.o yacc.tab.o 

yacc.tab.o: yacc.tab.c
				gcc -c yacc.tab.c

main.o: main.c
				gcc -c main.c

yacc.tab.c: yacc.y lex.yy.c
				bison -v -d -o yacc.tab.c yacc.y

semantic.o: semantic.c 
				gcc -c semantic.c

lex.yy.c: Practica2.l
					lex Practica2.l

limpia:
			rm -f yacc main.o yacc.tab.o yacc.tab.c lex.yy.c semantic.o

todo:
		make limpia
		make prueba
