#ifndef _PUNTOMATERIALE_
#define _PUNTOMATERIALE_

#include "particella.h"
#include "posizione.h"
#include "campoVettoriale.h"


//la particella ha un massa e una carica quindi produce sia un campo elettrico sia un campo gravitazionale
 
class puntoMateriale:public particella,posizione{
	public:	
	puntoMateriale(double,double,double,double,double);

	campoVettoriale campoElettrico(const posizione&) const;//prodotto dalla particella 
	campoVettoriale campoGravitazionale(const posizione&) const;//della particella
};

#endif
