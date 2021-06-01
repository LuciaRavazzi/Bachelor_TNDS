#include "vettoreDati.h"
#include <iostream>
#include <fstream>
#include <cmath> // pow

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
	
	_n=counter;
	_arr=new double[_n];
	
	filein.close();
	filein.open(nomefile);
	
	for(unsigned int i=0; i<_n; i++){
		filein >> _arr[i]; 
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
	_n=n;
	_arr=new double[n];

	filein.close();
	filein.open(nomefile);
	
	for(unsigned int i=0; i<n; i++){
		filein >> _arr[i]; 
	}
	filein.close();

}


void vettoreDati::print(){
	cout << "=====STAMPA DEL VETTORE A SCHERMO=====" << endl;
	for(unsigned int i=0; i<_n; i++){
		cout << _arr[i] << endl;
		}
}		


void vettoreDati::print(char *nomefile){
	ofstream fileout;
	fileout.open(nomefile);
	fileout << "Vettore" << endl;
	for(unsigned int i=0; i<_n; i++){
		fileout << _arr[i] << endl;
		}
	fileout.close();
}		


/*// SISTEMA QUICKSORT
void vettoreDati::quickSort(){
	_quickSort(0,_n-1);
}

void vettoreDati::scambia(unsigned int primo, unsigned int secondo){
	double appo;
	appo=_arr[primo];
	_arr[primo]=_arr[secondo];
	_arr[secondo]=appo;
}

void vettoreDati::_quickSort(unsigned int primo, unsigned int ultimo){
	if(primo>ultimo || ultimo >= _n)
		// Condizione di uscita.
		return;
	if((ultimo-primo)<=1){
		if(_arr[primo]>_arr[ultimo]){
			scambia(primo,ultimo);
		}
		return;
	}
	
	double pivot=_arr[(primo+ultimo)/2];
	unsigned int basso=primo, alto=ultimo;
	while(basso<alto){
		while(_arr[basso]<pivot){
			basso++;
		}
		while(_arr[alto]>pivot){
			alto--;
		}
		if(basso<alto){
			scambia(basso,alto);
			basso++;
		}
	}
	
	_quickSort(primo,basso-1);
	_quickSort(basso,ultimo);
}*/

// Nuova versione della media.
double vettoreDati::media(){
	double appo=0;
	for(unsigned int i=0; i<_n; i++){
		appo=(double)i/(i+1.)*appo+1./(i+1)*_arr[i];
	}
	
	return appo;
}

/*double vettoreDati::media(){
	double appo=0;
	for(int i=0; i<_n; i++){
		appo+=_arr[i];
	}
	return appo/_n;
}*/

double vettoreDati::varianza(){
	double m=media();
	vettoreDati diffQuadre(getN());
	for (int i=0; i<getN(); i++){
		diffQuadre.setComponente(i,pow(m-getComponente(i),2));
	}
	return diffQuadre.media();
}

double vettoreDati::deviazioneStandard(){
	double ds;
	ds=pow(varianza(),0.5);
	return ds;
}

/*double vettoreDati::mediana(){
	// Crea un nuovo vettore uguale e lo ordina.
	// Questa istruzione è una PROVA. Dovrebbe sfruttare il copy constructor.
	vettoreDati appo(*this);
	
	appo.quickSort();
	unsigned int mezzo;
	mezzo=(int)(_n/2);
	
	return appo.getComponente(mezzo);
}*/

double vettoreDati::correlazione(vettoreDati altro){
	double media1=media();
	double media2=altro.media();
	double appo=0; 
	
	if(altro.getN() != _n){
		cerr<<"Attenzione: si sta tentando di calcolare la correlazione di vettori di dimensioni diverse!"<<endl;
		return -1;
	}
	
	for(unsigned int i=0; i<_n; i++){
		appo+=(_arr[i]-media1)*(altro.getComponente(i)-media2);
	}
	
	appo=appo/_n;
	
	appo=appo/(deviazioneStandard()*altro.deviazioneStandard());
	
	return appo;	
}

/*void vettoreDati::printStatistica(){
	cout<<"=====STATISTICA SUL VETTORE====="<<endl;
	cout<<"Media: "<<media()<<endl;
	cout<<"Varianza: "<<varianza()<<endl;
	cout<<"Deviazione standard: "<<deviazioneStandard()<<endl;
	cout<<"Mediana: "<<mediana()<<endl;
}*/
