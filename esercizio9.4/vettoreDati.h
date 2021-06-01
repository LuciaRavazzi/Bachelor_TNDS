#ifndef _VettoreD_
#define _VettoreD_

#include "vettore.h"
//#include "selectionSort.h"

class vettoreDati: public vettore{
	public:
		vettoreDati(unsigned int n):vettore(n){};
		vettoreDati():vettore(){};
		vettoreDati(char *nomefile);
		vettoreDati(char *nomefile, unsigned int n);
		
		void print();
		void print(char *nomefile);
		
		//void quickSort();
		//void selectionSort() { ordinaArrayCrescente(_arr,_n);}
		
		// Metodi statistici.
		double media();
		double varianza();
		double deviazioneStandard();
		double mediana();
		double correlazione(vettoreDati);
		
		//void printStatistica();
		
	private:
		//void scambia(unsigned int primo, unsigned int secondo);
		//void _quickSort(unsigned int primo, unsigned int ultimo);
};




#endif
