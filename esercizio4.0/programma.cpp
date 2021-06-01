#include <iostream>
#include "campoVettoriale.h"
#include "posizione.h"
#include "puntoMateriale.h"
#include <cstdlib>

using namespace std;

int main(int argc,char** argv) {
	if(argc!=4){
		cerr << "Errore. Inserire <./eseguibile.x> <x> <y> <z> " << endl;
		return -1;
	}

	double x=atof(argv[1]);
	double y=atof(argv[2]);
	double z=atof(argv[3]);
	posizione pos(x,y,z);

	const double e=1.602E-19;
	const double mp=1.67E-27;
	const double me=9.11E-31;
	const double d=1E-10;


	puntoMateriale elettrone(me,-e,0.,0.,d/2);
	puntoMateriale protone(mp,e,0.,0.,-d/2);

	campoVettoriale E(pos); //creo un vettore tridimensionale nella posizione assegnata
	E.somma(elettrone.campoElettrico(pos));	
	E.somma(protone.campoElettrico(pos));	

	cout << "Il campo elettrico nella posizione " << pos.getX() << ";" << pos.getY() << ";" << pos.getZ() << endl;
	cout << "(" << E.getFx() << ";" << E.getFy() << ";" << E.getFz() << ")" << endl;



return 0;
}
