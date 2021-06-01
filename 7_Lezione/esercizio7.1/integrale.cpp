#include "integrale.h"
#include <iostream>

using namespace std;

integrale::integrale(double a,double b,funzioneBase *f){
	if(a<b){
		_a=a;
		_b=b;
	} else {
		_a=b;
		_b=a;
	}	
		
	_f=f;
}

double integrale::midpoint(int nsteps){
	double _h=(_b-_a)/nsteps;
	double x;
	double sum=0.;

	for(int i=0; i<nsteps; i++){
		x=_a+_h*(i+0.5);
		sum+=_f->eval(x);
	}

return sum*_h;
}	


double integrale::simpson(int nsteps){
	double h=(_b-_a)/nsteps;
	double sum=(double(1/3))*(_f->eval(_a)+_f->eval(_b));
	double x;
	if(nsteps%2!=0){
		cerr << "Errore. Il numero di passi deve essere pari.Rivalutare l'integrale" << endl;
		return -4.;
	} else {
		for(int i=1; i<nsteps; i++){
			x=_a+i*h;
				if(i%2!=0){
					sum+=(4./3.)*_f->eval(x);
				} else {
					sum+=(2./3.)*_f->eval(x);
				}
		}
	}		
		
return sum*h;
}			




