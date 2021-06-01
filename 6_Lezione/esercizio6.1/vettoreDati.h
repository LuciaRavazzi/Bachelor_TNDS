#ifndef _VettoreD_
#define _VettoreD_

#include "vettore.h"
#include <cmath>

class vettoreDati: public vettore{
	public:
		vettoreDati(unsigned int n):vettore(n){};
		vettoreDati():vettore(){};
		vettoreDati(char *nomefile);
		vettoreDati(char *nomefile, unsigned int n);
		
		void print();
		void print(char *nomefile);
		
		void quickSort();
		
		//metodi per la statistica del vettore
		double media() const;
		double varianza() const;
		double deviazioneStandard() const;
		
		
	private:
		void scambia(unsigned int primo, unsigned int secondo);
		void _quickSort(unsigned int primo, unsigned int ultimo);
};




#endif
