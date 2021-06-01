#include <iostream>
#include "posizione.h"
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

	if(argc!=4){
		cerr << "Errore. Inserire <./eseguibile.x> <x> <y> <z>" << endl;
		return -1;
	}

	posizione pos(atof(argv[1]),atof(argv[2]),atof(argv[3]));
	cout << "Coordinate cartesiane: (" << pos.getX() << ";" << pos.getY() << ";" << pos.getZ() << ")" <<  endl;
	cout << "Coordinate cilindriche" << endl;
	cout << "Rho: " << pos.rho() << " Phi: " << pos.phi() << " z: " << pos.getZ() << endl;
	cout << "Coordinate sferiche" << endl;
	cout << "Raggio: " << pos.raggio() << " Phi: " << pos.phi() << " Theta: " << pos.theta() << endl;
	


return 0;
}
