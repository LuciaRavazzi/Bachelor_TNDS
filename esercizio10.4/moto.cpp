#include "moto.h"
#include <cmath>

moto::moto(double omegaZero,double omega,double alpha){
	_omegaZero=omegaZero;
	_omega=omega;
	_alpha=alpha;
}


vettoreLineare moto::eval(const vettoreLineare &vett,double t) const{
	vettoreLineare res(2);
	res.setComponente(0,vett.getComponente(1));
	res.setComponente(1,-_omegaZero*_omegaZero*vett.getComponente(0)-_alpha*vett.getComponente(1)+sin(_omega*t));

	return res;
}


