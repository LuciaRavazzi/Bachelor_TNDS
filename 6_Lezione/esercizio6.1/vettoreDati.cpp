#include "vettoreDati.h"
#include <iostream>
#include <fstream>
#include "vettore.h"

using namespace std;

vettoreDati::vettoreDati(char *nomefile){
	ifstream filein;
	unsigned int counter=0;
	double appo;
	
	filein.open(nomefile);
	filein >> appo;
	while(!filein.eof()){
		filein >> appo;
		counter++;
	}
	
	_N=counter;
	_vett=new double[_N];
	
	filein.close();
	filein.open(nomefile);
	
	for(unsigned int i=0; i<_N; i++){
		filein >> _vett[i]; 
	}
	filein.close();

}
	
	
	
vettoreDati::vettoreDati(char *nomefile,unsigned int n){
	ifstream filein;
	unsigned int counter=0;
	double appo;
	
	filein.open(nomefile);
	filein >> appo;
	while(!filein.eof()){
		filein >> appo;
		counter++;
	}
	
	if(n>counter) {
		cerr << "Errore: troppi pochi dati nel file" << endl;
		return;
	}
	_N=n;
	_vett=new double[n];

	filein.close();
	filein.open(nomefile);
	
	for(unsigned int i=0; i<n; i++){
		filein >> _vett[i]; 
	}
	filein.close();

}


void vettoreDati::print(){
	for(unsigned int i=0; i<_N; i++){
		cout << _vett[i] << endl;
		}
}		


void vettoreDati::print(char *nomefile){
	ofstream fileout;
	fileout.open(nomefile);
	fileout << "Vettore" << endl;
	for(unsigned int i=0; i<_N; i++){
		fileout << _vett[i] << endl;
		}
	fileout.close();
}		


// SISTEMA QUICKSORT
void vettoreDati::quickSort(){
	_quickSort(0,_N-1);
}

void vettoreDati::scambia(unsigned int primo, unsigned int secondo){
	double appo;
	appo=_vett[primo];
	_vett[primo]=_vett[secondo];
	_vett[secondo]=appo;
}

void vettoreDati::_quickSort(unsigned int primo, unsigned int ultimo){
	if(primo>ultimo || ultimo >= _N) return;
	if((ultimo-primo)<=1){
		if(_vett[primo]>_vett[ultimo]){
			scambia(primo,ultimo);
		}
		return;
	}
	
	double pivot=_vett[(primo+ultimo)/2];
	unsigned int basso=primo, alto=ultimo;
	while(basso<alto){
		while(_vett[basso]<pivot) basso++;
		while(_vett[alto]>pivot) alto--;
		
		if(basso<alto){
			scambia(basso,alto);
			basso++;
		}
	}
	
	_quickSort(primo,basso-1);
	_quickSort(basso,ultimo);
}




double vettoreDati::media() const{
	double appo=0;
	for(unsigned int i=0; i<_N; i++)
		appo+=_vett[i];
	return appo/_N;
}


double vettoreDati::deviazioneStandard() const{
	double m=media();
	double appo=0;
	for(unsigned int i=0; i<_N; i++)
			appo=(_vett[i]-m)*(_vett[i]-m);
	return sqrt(appo/(_N-1));
}

double vettoreDati::varianza() const{
	return deviazioneStandard()*deviazioneStandard();
}


	









