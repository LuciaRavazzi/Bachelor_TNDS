#include "posizione.h"
#include <cmath>

posizione::posizione() {
	_raggio=0;
	_theta=0;
	_phi=0;
}

posizione::posizione(double x, double y, double z) {
	_raggio=sqrt(x*x+y*y+z*z);
	_theta=acos(z/_raggio);
	_phi=atan2(y,x);
}

//coordinate cartesiane	
double posizione::getX() const { return _raggio*cos(_phi)*sin(_theta);} 
double posizione::getY() const { return _raggio*sin(_phi)*sin(_theta);}
double posizione::getZ() const { return _raggio*cos(_theta);}
//coordiante cilidriche	
double posizione::rho() const { return sqrt(getX()*getX()+getY()*getY());}
double posizione::phi() const { return _phi;} 
//coordiante sferiche
double posizione::raggio() const { return _raggio;}
double posizione::theta() const { return _theta;}
//distanza tra due punti
double posizione::distanza(const posizione& pos) const{
	return sqrt(pow(getX()-pos.getX(),2)+pow(getY()-pos.getY(),2)+pow(getZ()-pos.getZ(),2));
}

