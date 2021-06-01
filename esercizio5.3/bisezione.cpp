#include "bisezione.h"
#include <iostream>
using namespace std;

bisezione::bisezione(double a,double b,double prec,double Nmax,funzioneBase* f){
	if(b>a){ 
		_a=a;
		_b=b;
	} else {
		_a=b;
		_b=a;
	}

	_prec=prec;
	_f=f;
	_Nmax=Nmax;
}
	
	
double bisezione::segno(double x) const{
	if(x>0) 
		return 1;
	if(x<0)
		return -1;
}

double bisezione::cercaZeri(){
	int counter=0;
	double xm=_a+(float) (_b-_a)/2;
	double prec;

	if(segno(_f->eval(_a))*segno(_f->eval(_b))>0){
		cout << "Non c'è nessuno zero nell'intervallo scelto" << endl;
		return 0;
	}
	if(_f->eval(xm)==0) {return xm;}
	if(_f->eval(_a)==0) {return _a;}
	if(_f->eval(_b)==0) {return _b;}

	do{
	if(segno(_f->eval(xm))*segno(_f->eval(_b))<0){
			_a=xm;
		} else {
			_b=xm;
	}
		
	xm=_a+(float)(_b-_a)/2;
	prec=(float) (_b-_a)/2;
	counter++;
	
	if(counter>_Nmax)
		break;
	
	} while(prec>_prec);

return xm;
}




	
		




