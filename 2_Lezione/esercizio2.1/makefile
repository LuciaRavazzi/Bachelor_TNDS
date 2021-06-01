compila: eseguibile.2.1

eseguibile.2.1:main.o programma.o
	g++ main.o programma.o -o eseguibile.2.1

main.o: main.cpp programma.h
	g++ -c main.cpp

programma.o: programma.cpp programma.h
	g++ -c programma.cpp
