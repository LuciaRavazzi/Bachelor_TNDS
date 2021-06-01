LIBS:=`root-config --libs`
INCS:=`root-config --cflags`


eseguibile.6.1:programma.o vettore.o vettoreDati.o 
	g++ vettore.o programma.o vettoreDati.o -o eseguibile.6.1 ${INCS} ${LIBS}

programma.o:programma.cpp vettore.h vettoreDati.h
	g++ -c programma.cpp -o programma.o ${INCS}

vettore.o:vettore.h vettore.cpp
	g++ -c vettore.cpp

vettoreDati.o:vettoreDati.h vettoreDati.cpp vettore.h 
	g++ -c vettoreDati.cpp


