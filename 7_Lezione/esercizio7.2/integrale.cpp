#include "funzioneBase.h"
#include "integrale.h"
#include <iostream>

#include <cmath>

using namespace std;

integrale::integrale(double a, double b, funzioneBase * f){
	// Controlla che gli estremi siano in ordine giusto e ne salva i valori.
	if(b>=a){
		_a=a;
		_b=b;
	} else {
		_a=b;
		_b=a;
	}
	
	// Salva la funzione.
	_f=f;
}

double integrale::midPoint(int nPassi){
	// Calcola l'incremento sulle x.
	_h=(_b-_a)/(double)nPassi;
	
	double accu=0;
	for(int i=0; i<nPassi; i++){
		accu+=_f->eval(_a+(i+0.5)*_h);  // Valuta la funzione nel suo punto medio.
	}
	
	return _h*accu;
}

double integrale::simpson(int nPassi){
	if(nPassi%2!=0){
		cerr << "Errore: il numero di passi non e' divisibile per due nel metodo di Simpson" << endl;
		return -1;
	}
	
	_h=(_b-_a)/nPassi;
	double accu=0.;
	//sommo il primo e l'ultimo valore
	accu=(1./3.)*_f->eval(_a)+(1./3.)*_f->eval(_b);
	
	for(int i=1; i<nPassi; i++){
		if(i%2==0){
			accu+=(2./3.)*_f->eval(_a+_h*i);	
		} else {
			accu+=(4./3.)*_f->eval(_a+_h*i);
		}	
	}
	
	return _h*accu;
}

double integrale::trapezi(double precisione){
	double accu=0;
	double I1=0,I2=0;
	
	int nPassi=2;
	//accu=0.5*(_f->eval(_a)+_f->eval(_b)); 
	double calpre =99;	
	do{
		cout<<"Numero passi: "<<nPassi<<endl;
		I1=I2;
		accu=0.5*(_f->eval(_a)+_f->eval(_b)); 
		cout<<"Valori di f(a) e f(b): "<<_f->eval(_a)<<"    "<<_f->eval(_b)<<endl;
		for(int i=1; i<nPassi; i++){
			accu+=_f->eval(i*(_b-_a)/(double)nPassi+_a);
		}
		
		I2=accu*(_b-_a)/(double)nPassi;
		cout<<"Integrale attuale: "<<I2<<endl<<endl;
		calpre =(4./3.)*fabs(I1-I2);
		cout<<"precisione "<<calpre<<endl;
		nPassi=nPassi*2;
	}while(calpre>precisione);
	
	return I2;
}

double integrale::trapeziOpt(double precisione){
	double accu=0;
	double I1=0,I2=0;
	
	// Inizialmente calcoliamo il valore agli estremi
	accu=_f->eval(_a)+_f->eval(_b);
	I1=accu*(_b-_a)/2.;
	
	int nPassi=2;
	
	do {
		I1=I2;
		for(int i=1; i<nPassi; i=i+2){ //prendo i punti medi di ordine dispari
			double xm=((_b-_a)/nPassi)*i;
			accu+=_f->eval(xm);	
		}
		
		I2=accu*(_b-_a)/nPassi;
		
		nPassi=nPassi*2;
	} while((4./3.)*(fabs(I1-I2))>precisione);
	
	return I2;		
}
