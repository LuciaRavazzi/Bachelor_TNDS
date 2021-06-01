#include "integraleMontecarlo.h"
#include "ipersfera.h"
#include <iostream>

using namespace std;

double integraleMontecarlo::hitOrMiss(unsigned int N){
	int Next=0;
	int Nint=0;
	
	for(Next=0; Next<N; Next++){
		// Crea un vettore per il punto.
		double * vett = new double [_nDim];
		// Riempie il punto.
		for(int i=0; i<_nDim; i++){
			vett[i]=_uniforme->uniformeTraslato(-_latoCubo/2,_latoCubo/2);
		}
		
		// Verifica se il punto e' dentro.
		if((_isfera.dentro(vett))==1){
			Nint++;
		}
		
		delete [] vett;
		vett=NULL;
	}

	return pow(_latoCubo,_nDim)*(double)Nint/Next;	
}
