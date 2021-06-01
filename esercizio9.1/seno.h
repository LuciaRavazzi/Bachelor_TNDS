#ifndef _SENO_
#define _SENO_

#include "funzioneBase.h"
#include <cmath>

class seno:public funzioneBase{
	public:
	double eval(double x) const {return sin(x);}

};
#endif
