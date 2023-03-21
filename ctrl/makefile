# Makefile for Controller module 

CPP	=	g++ -Wno-deprecated

PROGRAM: 	ctrl.h ctrl.o

ctrl.o: \
	../scanparse/scanparse.h ../symtab/symtab.h \
	ctrl.h ctrl.cpp
	${CPP} -c -g ctrl.cpp

clean:
	rm -f  *.o a.out

print:
#	enscript -2r -Ptlt ctrl.h ctrl.cpp makefile
	echo ">>>>>>> ctrl/ctrl.h <<<<<<<<<<< `date`" >> ../epcPrint
	cat ctrl.h>>../epcPrint
	echo ">>>>>>> ctrl/ctrl.cpp <<<<<<<<<<< `date` " >> ../epcPrint
	cat ctrl.cpp>>../epcPrint

dir:
	pwd; ls -l
