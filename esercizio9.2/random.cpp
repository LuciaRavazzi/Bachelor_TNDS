#include "random.h"
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


double Random::uniformeTraslato(double a, double b) {
	return a+(b-a)*this->uniforme();
}
