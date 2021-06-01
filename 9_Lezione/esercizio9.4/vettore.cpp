#include "vettore.h"
#include <iostream>

using namespace std;

vettore::vettore(){
	_n=0;
	_arr=NULL;
}

vettore::vettore(unsigned int n){
	_n=n;
	_arr = new double [n];
}

vettore::vettore(const vettore& v){
	_n=v.getN();
	_arr = new double [_n];
	
	// Copio tutti gli elementi.
	for(unsigned int i=0; i<_n; i++){
		_arr[i]=v.getComponente(i);
	}
}

vettore& vettore::operator=(const vettore & v){
	// Se il mio vettore e' gia' pieno lo svuoto.
	if(_n!=0){
		// Svuoto il vettore.
		delete [] _arr;
	}
	
	_n=v.getN();
	_arr=new double [_n];
	
	// Copio tutti i dati.
	for(unsigned int i=0; i<_n; i++){
		_arr[i]=v.getComponente(i);
	}
	
	return *this;
}

vettore::~vettore(){
	delete [] _arr;
}

double vettore::getComponente(unsigned int n) const{
	// Controllo se non sono uscito dal vettore.
	if(n>=_n){
		cerr<<"Errore: uscito dal vettore."<<endl;
		return 0;
	}
	return _arr[n];
}

void vettore::setComponente(unsigned int n, double val){
	// Controllo se non sono uscito dal vettore.
	if(n>=_n){
		cerr<<"Errore: uscito dal vettore."<<endl;
	} else {
		_arr[n]=val;
	}
}
