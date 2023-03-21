# Makefile for Example Pascal Compiler 
#CPP = g++ -m32 -Wno-deprecated
CPP = g++ -Wno-deprecated

SUBDIR = main ctrl scanparse symtab 

DOTOHS = ctrl/ctrl.o main/main.o scanparse/scanparse.o symtab/symtab.o

PROGRAM:
	for i in ${SUBDIR}; do \
		(echo $$i;cd $$i; make;); \
	done
	#${CPP} -o epc -ly -lfl $(DOTOHS)
	${CPP} -o epc $(DOTOHS)

clean:
	for i in ${SUBDIR}; do \
		(echo $$i;cd $$i; make clean;); \
	done
	rm -f *.o tmp* a.out epc epcPrint

print:
#	enscript -2r -Ptlt makefile
	ls -l >> epcPrint
	cat makefile >> epcPrint
	for i in ${SUBDIR}; do \
		(echo $$i;cd $$i; make print;); \
	done

dir:
	for i in ${SUBDIR}; do \
		(echo $$i;cd $$i; make dir;); \
	done
