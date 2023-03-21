# Makefile for symtab

CPP	=	g++ -Wno-deprecated

PROGRAM: symtab.o

symtab.o:	symtab.h symtab.cpp test.cpp
	${CPP} -c -g symtab.cpp
	${CPP} -o test -g test.cpp symtab.o

clean:
	rm -f *.o a.out

print:
#	enscript -2r -Ptlt symtab.h symtab.cpp makefile
	echo ">>>>>>>>>>> symtab/symtab.h <<<<<<<<<<< `date`" >> ../epcPrint
	cat symtab.h >> ../epcPrint
	echo ">>>>>>>>>>> symtab/symtab.cpp <<<<<<<<<<<< `date`" >> ../epcPrint
	cat symtab.cpp >> ../epcPrint

dir:
	pwd; ls -l
