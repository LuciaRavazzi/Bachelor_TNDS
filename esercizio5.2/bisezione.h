#ifndef _BISEZIONE_
#define _BISEZIONE_

#include "solutore.h"
#include "funzioneBase.h"

class bisezione:public solutore{
	public:
	bisezione(double,double,double,double,funzioneBase*);
	double cercaZeri();
	double segno(double) const;
};
#endif
