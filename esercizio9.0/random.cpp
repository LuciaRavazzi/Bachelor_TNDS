#include "random.h"
#include <cmath>

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
