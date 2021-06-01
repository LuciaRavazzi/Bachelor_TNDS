LIBS:=`root-config --libs`
INCS:=`root-config --cflags`

eseguibile.8.2: random.o programma.o
	g++ random.o programma.o -o eseguibile.8.2 ${INCS} ${LIBS}
	
random.o: random.cpp random.h funzioneBase.h
	g++ -c random.cpp

programma.o: programma.cpp random.h funzioneBase.h gaussiana.h
	g++ -c programma.cpp ${INCS}
