#ifndef _INTEGRALE_
#define _INTEGRALE_

#include "funzioneBase.h"

class integrale{
	public:
	integrale(double a,double b,funzioneBase *f);
	integrale(double a,double b,funzioneBase *f,double prec);
		
	double midpoint(int nsteps);
	double simpson(int nsteps);
	double trapezoidiPrec();


	private:
	double _a,_b;
	double _h;
	funzioneBase* _f;
	double _prec;

};
#endif
