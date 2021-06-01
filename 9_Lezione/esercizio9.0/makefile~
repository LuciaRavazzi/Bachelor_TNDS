LIBS:=`root-config --libs`
INCS:=`root-config --cflags`



eseguibile.9.0:programma.o random.o monteCarlo.o
	g++ programma.o random.o monteCarlo.o -o eseguibile.9.0 ${INCS} ${LIBS}

programma.o:esercizio9.0.cpp monteCarlo.h funzioneBase.h seno.h random.h
	g++ -c esercizio9.0.cpp -o programma.o ${INCS}

random.o:random.cpp random.h
	g++ -c random.cpp

monteCarlo.o: monteCarlo.cpp monteCarlo.h random.h funzioneBase.h
	g++ -c monteCarlo.cpp
