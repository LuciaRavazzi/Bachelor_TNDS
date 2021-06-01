#ifndef _PARABOLA_
#define _PARABOLA_

#include "funzioneBase.h"

class parabola: public funzioneBase{
	public:
	parabola(double a,double b,double c) { _a=a; _b=b; _c=c;} 
	
	double getA() const  {return _a;}
	double getB() const {return _b;}
	double getC() const {return _c;}

	void setA(double a) { _a=a;}
	void setB(double b) { _b=b;}
	void setC(double c) { _c=c;}

	double eval(double x) const {return _a*x*x+_b*x+_c;}
	
	private:
	double _a,_b,_c;

};
#endif
