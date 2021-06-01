eseguibile.9.2: programma.o integraleMontecarlo.o random.o
	g++ programma.o integraleMontecarlo.o  random.o -o eseguibile.9.2
	
programma.o: programma.cpp integraleMontecarlo.h ipersfera.h
	g++ -c programma.cpp
	
integraleMontecarlo.o: integraleMontecarlo.cpp integraleMontecarlo.h  random.h ipersfera.h
	g++ -c integraleMontecarlo.cpp
	
random.o: random.cpp random.h ipersfera.h
	g++ -c random.cpp
