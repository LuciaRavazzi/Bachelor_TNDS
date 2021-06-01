LIBS:=`root-config --libs`
INCS:=`root-config --cflags`

eseguibile.2.2: programma.o definizioni.o selectionSort.o
	g++ programma.o definizioni.o selectionSort.o -o eseguibile.2.2 ${INCS} ${LIBS}
	
programma.o: programma.cpp dichiarazioni.h
	g++ -c programma.cpp -o programma.o ${INCS}
	
definizioni.o: definizioni.cpp dichiarazioni.h
	g++ -c definizioni.cpp

selectionSort.o: selectionSort.cpp selectionSort.h
	g++ -c selectionSort.cpp
