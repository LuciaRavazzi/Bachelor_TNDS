#include "campoVettoriale.h"


campoVettoriale::campoVettoriale(const posizione& pos):posizione(pos){
	_Fx=0;
	_Fy=0;
	_Fz=0;
}

campoVettoriale::campoVettoriale(const posizione& pos,double Fx,double Fy,double Fz):posizione(pos){
	_Fx=Fx;
	_Fy=Fy;
	_Fz=Fz;
}	

		
double campoVettoriale::modulo() const{
	return _Fx*_Fx+_Fy*_Fy+_Fz*_Fz;
}


void campoVettoriale::somma(const campoVettoriale& camp){
	_Fx=_Fx+camp.getFx();	
	_Fy=_Fy+camp.getFy();	
	_Fz=_Fz+camp.getFz();	
}


