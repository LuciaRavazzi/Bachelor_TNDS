LIBS:=`root-config --libs`
INCS:=`root-config --cflags`


eseguibile.10.4:programma.o moto.o rungeKutta.o vettoreLineare.o vettore.o
	g++ programma.o moto.o rungeKutta.o vettoreLineare.o vettore.o -o eseguibile.10.4 ${INCS} ${LIBS}

programma.o: programma.cpp funzioneVettorialeBase.h moto.h rungeKutta.h vettoreLineare.h
	g++ -c programma.cpp -o programma.o ${INCS}
	
moto.o:moto.cpp moto.h funzioneVettorialeBase.h vettoreLineare.h
	g++ -c moto.cpp

rungeKutta.o:rungeKutta.cpp rungeKutta.h equazioneDifferenzialeBase.h vettoreLineare.h funzioneVettorialeBase.h
	g++ -c rungeKutta.cpp

vettoreLineare.o:vettoreLineare.cpp vettoreLineare.h vettore.h	
	g++ -c vettoreLineare.cpp

vettore.o:vettore.cpp vettore.h 
	g++ -c vettore.cpp
