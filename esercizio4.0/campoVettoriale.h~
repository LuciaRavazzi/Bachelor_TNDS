#ifndef _CAMPOVETTORIALE_
#define _CAMPOVETTORIALE_

#include "posizione.h"

class campoVettoriale: public posizione{
	public:
	campoVettoriale(const posizione&);
	campoVettoriale(const posizione&,double,double,double);

	double getFx() const { return _Fx;};
	double getFy() const { return _Fy;};
	double getFz() const { return _Fz;};
	
	void setFx(double Fx) { _Fx=Fx;};
	void setFy(double Fy) { _Fy=Fy;};
	void setFz(double Fz) { _Fz=Fz;};
	
	double modulo() const; //restituisce il modulo del vettore 
	void somma(const campoVettoriale&);


	private:
	double _Fx,_Fy,_Fz;
};

#endif
