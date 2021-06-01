#ifndef _GAUSSIANA_
#define _GAUSSIANA_
#include <cmath>
#include "funzioneBase.h"

class gaussiana:public funzioneBase{
	public:
	gaussiana(double media,double sigma) { _media=media; _sigma=sigma;}
	double eval(double x) const { return (1./(_sigma*sqrt(2*3.1415)))*exp(-pow(x-_media,2)/(2*pow(_sigma,2)));}


	private:
	double _media,_sigma;
};




#endif
