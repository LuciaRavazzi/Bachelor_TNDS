#include "monteCarlo.h"
#include <iostream>

using namespace std;

monteCarlo::monteCarlo(double a,double b, funzioneBase *f){
	_a=a;
	_b=b;
	_f=f;
	_rand=new random(3);
}



double monteCarlo::HitOrMiss(double maxVal,int N) const{
	double x,y;
	double Nint=0;
 	
	for(int i=0; i<N; i++){
		x=_a+(_b-_a)*_rand->uniforme();	
		y=maxVal*_rand->uniforme();
	
			if(y<=_f->eval(x))
				Nint++;	
	}
return (_b-_a)*maxVal*(double) Nint/N;
}


double monteCarlo::MetodoMedia(int N) const{
	double accu=0;
	double x;

	for(int i=0; i<N; i++){
		x=_a+(_b-_a)*_rand->uniforme();	
		accu=accu+_f->eval(x);
	}

return (double)(accu*(_b-_a))/N;
}









