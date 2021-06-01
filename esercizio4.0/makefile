eseguibile.4.0:programma.o campoVettoriale.o posizione.o puntoMateriale.o
	g++ programma.o campoVettoriale.o posizione.o puntoMateriale.o -o eseguibile.4.0

programma.o: programma.cpp posizione.h campoVettoriale.h puntoMateriale.h	
	g++ -c programma.cpp

campoVettoriale.o: campoVettoriale.cpp campoVettoriale.h posizione.h
	g++ -c campoVettoriale.cpp

posizione.o: posizione.cpp posizione.h
	g++ -c posizione.cpp

puntoMateriale.o:puntoMateriale.cpp puntoMateriale.h particella.h posizione.h campoVettoriale.h
	g++ -c puntoMateriale.cpp
