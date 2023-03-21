# Makefile for Main module 

CPP	=	g++ -Wno-deprecated

PROGRAM:	main.o

main.o:		../ctrl/ctrl.h main.cpp
	${CPP} -c -g main.cpp

clean:
	rm -f *.o tmp* a.out epc

print:	
#		enscript -2r -Ptlt main.cpp makefile
	echo ">>>>>>>>>>>> main/main.cpp <<<<<<<<<<<<<<< `date`" >> ../epcPrint
	cat main.cpp >> ../epcPrint


dir:
	pwd; ls -l
