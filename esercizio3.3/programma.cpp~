#include "posizione.h"
#include "corpoCeleste.h"
#include <iostream>

using namespace std;

int main() {
	corpoCeleste stella("stella",1.,1.);
	cout << "Inserire la posizione di " << stella.getNome() << endl;

	cout << "Vuoi calcolare il potenziale in quale punto dello spazio?" << endl;
	cout << "Inserire le coordinate" << endl;
	double x,y,z;
	cin >> x;
	cin >> y;
	cin >> z;
	posizione p(x,y,z);
	cout << "Potenziale nel punto scelto: " << stella.potenziale(p) << endl;



return 0;
}
