#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double media(int *);
double media2(int *);

int main() {
	cout << "1.Il risultato delle seguenti operazione è:" << endl;
	cout << "0.3-0.2-0.1=" << setprecision(3) <<  0.3-0.2-0.1 << endl;	
	cout << "0.3-(0.2+0.1)=" << 0.3-(0.2+0.1) << endl;
	cout << "0.4-0.3-0.1=" << 0.4-0.3-0.1 << endl;
	cout << "0.4-(0.3+0.1)=" << 0.4-(0.3+0.1) << endl;
	cout << "(1E15+1)-1E15=" << (1E15+1)-1E15 << endl;
	cout << "(1E16+1)-1E16=" << (1E16+1)-1E16 << endl;	

	cout << "2.Valutare la f(x) al variare di x" << endl;
	cout << "Risultato con errore         F(x) con errore più piccolo " << endl; 
	for(int i=0; i<19; i++){
		cout << "i:" << i << "  " << sqrt(pow(10,i)+1)-sqrt(pow(10,i)) << "              " << scientific << 1/(sqrt(pow(10,i)+1)+sqrt(pow(10,i))) << endl; //scientific serve per formattare l'outpt in modo tale da far stampare a video le potenze di dieci con i relativi esponenti
	}

	cout << "3.Dato un array, calcolare la media e la varianza" << endl;
	int data[4]={4,7,13,16};
	cout << "Media dei valori dell'array:" << scientific << media(data) << endl;
	cout << "Varianza dei valori dell'array" << scientific << ((double)4/3)*(media2(data)-media(data)*media(data)) << endl;

	
	cout << "3a.Dato un array, calcolare la media e la varianza" << endl;
	int data2[4]={4+1E9,7+1E9,13+1E9,16+1E9};
	cout << "Media dei valori dell'array:" << scientific <<  media(data2) << endl;
	cout << "Varianza dei valori dell'array" << scientific << ((double)4/3)*(media2(data2)-media(data2)*media(data2)) << endl;

return 0;
}

double media(int *vett){
	int appo=0;
	for(int i=0; i<4; i++)
		appo+=vett[i];

	return (double) appo/4;
}

double media2(int *vett){
	int appo=0;
	for(int i=0; i<4; i++)
		appo+=vett[i]*vett[i];

	return (double) appo/4;
}

