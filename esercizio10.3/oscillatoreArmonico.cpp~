#include "oscillatoreArmonico.h"
#include "vettoreLineare.h"
#include <cmath>

vettoreLineare oscillatoreArmonico::eval(const vettoreLineare &vett,double t) const{
	vettoreLineare res(2);
	res.setComponente(0,vett.getComponente(1));
	res.setComponente(1,vett.getComponente(0)*(-_omega*_omega));
	return res;
}

