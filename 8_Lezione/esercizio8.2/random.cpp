#include "random.h"
#include <cmath>
#include "funzioneBase.h"

random::random(unsigned int seed){
	_seed=seed;
	_prec=seed;
	_a=1664525;
	_c=1013904223;
	_m=pow(2,31);
}

random::random(unsigned int a,unsigned int c,unsigned int m,unsigned int seed){
	_seed=seed;
	_a=a;
	_c=c;
	_m=m;
	_prec=seed;
}

	
	
double random::uniforme(){
	unsigned int n;

	n=(_a*_prec+_c)%(_m);
	_prec=n;
	
return (double)n/(_m-1);
}




double random::esponenziale(double epsilon){
	return (-1./epsilon)*log(1-this->uniforme());
}

double random::gaussiana(double media, double sigma){
	double s=this->uniforme();
	double t=this->uniforme();
	double g=sqrt(-2.*log(s))*cos(2*3.1415*t);
return media+sigma*g;
}



double random::acceptReject(funzioneBase *f,double a,double b,double maxval){
	double x=a+(b-a)*this->uniforme();
	double y=maxval*this->uniforme();

	while(y>f->eval(x)){
		y=this->uniforme()*maxval;
		x=a+(b-a)*this->uniforme();
	}

return x;
		
}


















