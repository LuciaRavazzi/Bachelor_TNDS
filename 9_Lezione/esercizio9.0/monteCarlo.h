#ifndef _MONTECARLO_
#define _MONTECARLO_

#include "random.h"
#include "funzioneBase.h"

class monteCarlo{
	public:
	monteCarlo(double a,double b, funzioneBase *f);

	double MetodoMedia(int N) const;
	double HitOrMiss(double maxVal,int N) const;

	private:
	double _a;
	double _b;
	random *_rand;
	funzioneBase *_f; 
};

#endif
