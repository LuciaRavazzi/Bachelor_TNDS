#ifndef _RANDOM_
#define _RANDOM_

#include "funzioneBase.h"

class random{
	public:
	random(unsigned int seed);
	random(unsigned int a,unsigned int c,unsigned int m,unsigned int seed);

	void setA(double a) { _a=a;}
	void setC(double c) { _c=c;}
	void setM(double m) { _m=m;}
	
	double uniforme();
	double esponenziale (double epsilon);
	double gaussiana (double media, double sigma);
	double acceptReject (funzioneBase *f,double a,double b,double maxval);

	private:
	unsigned int _a;
	unsigned int _c;
	unsigned int _m;
	unsigned int _seed;
	unsigned int _prec;
};

#endif
