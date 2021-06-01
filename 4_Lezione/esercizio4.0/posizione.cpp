#include "posizione.h"
#include <cmath>

posizione::posizione() {
	_x=0;
	_y=0;
	_z=0;
}

posizione::posizione(double x, double y, double z) {
	_x=x;
	_y=y;
	_z=z;
}
//coordinate cartesiane	
double posizione::getX() const { return _x;} 
double posizione::getY() const { return _y;}
double posizione::getZ() const { return _z;}
//coordiante cilidriche	
double posizione::rho() const { return sqrt(_x*_x+_y*_y);}
double posizione::phi() const { return atan2(_y,_x);} 
//coordiante sferiche
double posizione::raggio() const { return sqrt(_x*_x+_y*_y+_z*_z);}
double posizione::theta() const { return acos(_z/raggio());}
//distanza tra due punti
double posizione::distanza(const posizione& pos) const{
	return sqrt(pow(_x-pos.getX(),2)+pow(_y-pos.getY(),2)+pow(_z-pos.getZ(),2));
}

