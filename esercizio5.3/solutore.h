#ifndef _SOLUTORE_
#define _SOLUTORE_

#include "funzioneBase.h"

class solutore{
	public:	
	virtual double cercaZeri()=0;
	
	void setPrecisione(double prec) {_prec=prec;}
	double getPrecisione() {return _prec;}

	void setA(double a) { _a=a;}
	void setB(double b) { _b=b;}
	
	protected:
	double _a;
	double _b;
	double _prec;
	const funzioneBase *_f;
	int _Nmax;
};
	


#endif
