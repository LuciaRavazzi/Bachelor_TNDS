#ifndef _PARTICELLA_
#define _PARTICELLA_

#include <iostream>
using namespace std;

class particella {
	public:
	particella(double massa, double carica) { _massa=massa; _carica=carica;}
	
	double getMassa() const {return _massa;}
	double getCarica() const {return _carica;}

	void setMassa(double massa) { _massa=massa;}
	void setCarica(double carica) { _carica=carica;}

	void print() { cout << "Particella di massa: " << _massa << " e carica " << _carica << endl;}
	protected:
	double _massa,_carica;
};




#endif
