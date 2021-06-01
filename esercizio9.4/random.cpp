#include "random.h"

// Disabilitate le funzioni relative a funzioneBase.h.

// #include "funzioneBase.h"
#include <cmath>

const double PI=3.14159;

Random::Random(unsigned int seed){
	_a=1664525;
	_c=1013904223;
	_m=pow(2,31);
	_seed=seed;
	_precedente=seed;
}


Random::Random(unsigned int seed, unsigned int a, unsigned int c,unsigned int m){
	_a=a;
	_c=c;
	_m=m;
	_seed=seed;
	_precedente=seed;
}
		
		
double Random::uniforme(){
	 unsigned int n;
	 double d;
	 
	 n=(_a*_precedente+_c)%(_m);
	 _precedente=n;
	 d=(double) n/(_m-1);
	 
	 return d;
}
	 
double Random::esponenziale(double lambda){
	return -(1/lambda)*log(1-this->uniforme());
}

double Random::gaussiana(double media, double sigma){
	double s=this->uniforme();
	double t=this->uniforme();
	double g=sqrt(-2.*log(s))*cos(2*PI*t);
	
	return sigma*g+media;
}

/*double Random::acceptReject(funzioneBase * f, double sx, double dx,double maxval){
	double x=sx+(dx-sx)*this->uniforme();
	double y=this->uniforme()*maxval;
	
	while(y>f->eval(x)){
		y=this->uniforme()*maxval;
		x=sx+(dx-sx)*this->uniforme();
	}
	
	return x;
}*/
