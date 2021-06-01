LIBS:=`root-config --libs`
INCS:=`root-config --cflags`

eseguibile.8.0: random.o programma.o
	g++ random.o programma.o -o eseguibile.8.0 ${INCS} ${LIBS}
	
random.o: random.cpp random.h
	g++ -c random.cpp

programma.o: programma.cpp random.h
	g++ -c programma.cpp ${INCS}
