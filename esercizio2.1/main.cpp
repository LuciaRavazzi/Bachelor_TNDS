#include <iostream>
#include "programma.h"

using namespace std;

int main(){
	double a,b;
	cout << "Inserire a" << endl;
	cin >> a;
	cout << "Inserire b" << endl;
	cin >> b;
	
	for(int i=0; i<10; i++){
		byValue(a,b);
		byReference(a,b);
		byPointer(&a,&b);
	}

	cout << "Numero di scambi totali effettuati: " << quantiScambi() << endl;
	


return 0;
}
