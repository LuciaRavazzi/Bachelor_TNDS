#include "Pendolo.h"
#include "vettoreLineare.h"
#include <cmath>
#include <iostream>

using namespace std;

vettoreLineare pendolo::eval(const vettoreLineare &vett,double t) const{
	vettoreLineare res(2);
	res.setComponente(0,vett.getComponente(1));
	res.setComponente(1,-((double)_g/_l)*sin(vett.getComponente(0)));
	
	
	return res;
}

