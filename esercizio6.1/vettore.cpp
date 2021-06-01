#include "vettore.h"
#include <iostream>

using namespace std;

vettore::vettore(){
	_N=0;
	_vett=NULL;
}

vettore::vettore(int N){
	_N=N;
	_vett=new double[N];
}

vettore::~vettore(){
	delete []_vett;
	_vett=NULL;
}

double vettore::getComponente(int n) const{
	if(n>_N){
		cerr << "Errore. Si sta uscendo dal vettore" << endl;
		return -1;
	} else {
		return _vett[n];
	}
}


void vettore::setComponente(int n,double x){
		if(n>_N){
		cerr << "Errore. Si sta uscendo dal vettore" << endl;
		return;
	} else {
		_vett[n]=x;
	}
}


vettore::vettore(const vettore& vett){//copy constructor
		_N=vett.getN();
		_vett=new double[_N];
		for(int i=0; i<_N; i++)
			_vett[i]=vett.getComponente(i);
}	



vettore& vettore::operator=(const vettore& vett){
	if(_N!=0)
		delete []_vett;
		
	_N=vett.getN();
	_vett=new double[_N];

	for(int i=0; i<_N; i++)
		_vett[i]=vett.getComponente(i);	

	return *this;
}






	
		







