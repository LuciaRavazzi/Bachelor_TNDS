#ifndef _MOYO_
#define _MOTO_

#include "funzioneVettorialeBase.h"
#include "vettoreLineare.h"

class moto: public funzioneVettorialeBase{
	public:
	moto(double omegaZero,double omega,double alpha);
	vettoreLineare eval(const vettoreLineare &,double t) const;

	private:
	double _omega;
	double _omegaZero;
	double _alpha;
};


#endif
