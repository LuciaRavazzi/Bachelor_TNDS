#ifndef _RANDOM
#define _RANDOM

//#include "funzioneBase.h"

// Disabilitate le funzioni relative a funzioneBase.h

class Random {
	public:
		Random(unsigned int seed);
		Random(unsigned int seed, unsigned int a, unsigned int c,unsigned int m);
		void setA (unsigned int a) { _a=a;}
		void setC (unsigned int c) { _c=c;}
		void setM (unsigned int m) { _m=m;}
		double uniforme(); 
		double esponenziale(double lambda);
		double gaussiana(double media, double sigma);
		// double acceptReject(funzioneBase * f, double sx, double dx,double maxval);
		
	private:
		unsigned int _precedente;
		unsigned int _a;
		unsigned int _c;
		unsigned int _m;
		unsigned int _seed;




};
#endif
