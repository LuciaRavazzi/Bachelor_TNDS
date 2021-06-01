LIBS:=`root-config --libs`
INCS:=`root-config --cflags`


eseguibile.9.1:programma.o random.o monteCarlo.o
	g++ programma.o random.o monteCarlo.o -o eseguibile.9.1 ${INCS} ${LIBS}

programma.o:programma.cpp monteCarlo.h funzioneBase.h seno.h random.h
	g++ -c programma.cpp -o programma.o ${INCS}

random.o:random.cpp random.h
	g++ -c random.cpp

monteCarlo.o: monteCarlo.cpp monteCarlo.h random.h funzioneBase.h
	g++ -c monteCarlo.cpp
