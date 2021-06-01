LIBS:=`root-config --libs`
INCS:=`root-config --cflags`



eseguibile.9.4: esperimentoPrisma.o programma.o random.o vettore.o vettoreDati.o
	g++ esperimentoPrisma.o programma.o random.o vettore.o vettoreDati.o -o eseguibile.9.4 ${INCS} ${LIBS}
	
esperimentoPrisma.o: esperimentoPrisma.h random.h esperimentoPrisma.cpp
	g++ -c esperimentoPrisma.cpp

programma.o: programma.cpp esperimentoPrisma.h 
	g++ -c programma.cpp  ${INCS}
	
random.o: random.cpp random.h
	g++ -c random.cpp
	
vettoreDati.o: vettoreDati.cpp vettoreDati.h vettore.h
	g++ -c vettoreDati.cpp
		
vettore.o: vettore.cpp vettore.h
	g++ -c vettore.cpp
