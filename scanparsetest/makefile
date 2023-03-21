#Makefile for Pascal Compiler parser

CPP	=	g++ -Wno-deprecated

PROGRAM: 	scanparse.o

scanparse.o: 	../symtab/symtab.h scanparse.h scanparse.cpp scanparse.fct
		${CPP} -c -I. scanparse.cpp

scanparse.fct:	parser.tmp scanner.tmp
		cat scanner.tmp parser.tmp > scanparse.fct

scanner.tmp:	scanner.h ../symtab/symtab.h scanner.specs scanner.fcts\
		parser.gram
		lex scanner.specs 
		sed -f scanner.cmd lex.yy.c > scanner.tmp
		# rm lex.yy.c

parser.tmp:	parser.h ../symtab/symtab.h parser.gram parser.fcts
		# bison -y -vd parser.gram
		yacc -vd parser.gram
		sed -f parser.cmd y.tab.c > parser.tmp
		# rm y.tab.c

clean:
		rm -f *.o lex.yy.c y.tab.c y.o* *tmp*\
		scanparse.fct y.tab.h a.out

print:
#		enscript -2r -Ptlt scanparse.h scanparse.cpp\
#		scanner.specs parser.gram makefile
		echo ">>>>>>>>>>> scanparse/scanparse.h <<<<<<<<< `date`" >> ../epcPrint
		cat scanparse.h >> ../epcPrint
		echo ">>>>>>>>>>> scanparse/scanparse.cpp <<<<<<<<< `date` " >> ../epcPrint
		cat scanparse.cpp >> ../epcPrint
		echo ">>>>>>>>>>> scanparse/scanner.specs <<<<<<<<< `date`" >> ../epcPrint
		cat scanner.specs >> ../epcPrint
		echo ">>>>>>>>>>> scanparse/parser.gram <<<<<<<<< `date`" >> ../epcPrint
		cat parser.gram >> ../epcPrint

dir:
	pwd; ls -l
