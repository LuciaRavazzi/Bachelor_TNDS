#include <iostream>
#include "integraleMontecarlo.h"
#include "ipersfera.h"

#include <cmath>

using namespace std;

const double PI=3.14159;

double media(double[],int );
double devStd(double [],int);

int main() {
	ipersfera ips(1,3);//costruttore con raggio ipersfera e dimensione dello spazio nel quale vive
	
	integraleMontecarlo monty(3,2,ips);
	//variare il numero di punti
	for(int i=1; i<5; i++)
		cout<<"Punti: " << i*i*1000 << " Integrale:" << monty.hitOrMiss(i*i*10000) << endl;
	cout <<"**********************" << endl;
	//calcolo devStd e media
	double vett[100];
	for(int i=1; i<5; i++){
		for(int j=0; j<100; j++){
			 vett[j]=monty.hitOrMiss(i*i*10000);
		}
		cout << "Punti: " << i*i*10000 << " Media" << media(vett,100) << " DevStd: " << devStd(vett,100) << endl; 	
	}
	cout << "********************" << endl;

	for(int i=2; i<6;i++){
		ipersfera ips(1,i);	
		integraleMontecarlo monty(i,2,ips);
		cout << "Dimensione: " << i << "Valore Integrale: " << monty.hitOrMiss(100000) << endl;
	}


return 0;
}
	
double media(double* vett,int N){
	double accu=0;

	for(int i=0; i<N; i++)
		accu=accu+vett[i];
return (double) accu/N;
}


double devStd(double* vett,int N){
	double accu=0;
	double m=media(vett,N);

	for(int i=0; i<N; i++)
		accu=accu+(vett[i]-m)*(vett[i]-m);

return sqrt((double) accu/N);
}
	
	


