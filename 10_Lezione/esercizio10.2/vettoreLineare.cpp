#include "vettoreLineare.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

vettoreLineare vettoreLineare::operator+(const vettoreLineare & v2) const {
	// Controlla le dimensioni.
	if(getN() != v2.getN()){
		cerr<<"Errore. Tentativo di somma tra vettori di dimensione diversa."<<endl<<endl;
		exit(-2);
	}
	
	vettoreLineare res(getN());
	
	for(int i=0; i<getN(); i++){
		res.setComponente(i,getComponente(i)+v2.getComponente(i));
	}
	
	return res;
}

double vettoreLineare::operator*(const vettoreLineare & v2) const {
	// Controlla le dimensioni.
	if(getN() != v2.getN()){
		cerr<<"Errore. Tentativo di prodotto scalare tra vettori di dimensione diversa."<<endl<<endl;
		exit(-2);
	}
	
	double res=0;
	
	for(int i=0; i<getN(); i++){
		res+=getComponente(i)*v2.getComponente(i);
	}
	
	return res;
}

vettoreLineare vettoreLineare::operator*(const double a) const{
	vettoreLineare res(getN());
	
	for(int i=0; i<getN(); i++){
		res.setComponente(i,a*getComponente(i));
	}
	
	return res;
}
