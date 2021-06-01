#include <iostream>
#include "integrale.h"
#include "funzioneBase.h"
#include "seno.h"
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc,char**argv){		

	if(argc!=2){
		cerr << "Errore.Inserire <./eseguibile.x> <nsteps>" << endl;
		return -1;	
	}
		
	int nsteps=atoi(argv[1]);
	double a=0.;
	double b=3.1415;
	ofstream fileout; 
	
	funzioneBase *s=new seno();
	integrale integral(a,b,s);

	fileout.open("integraleSimpson.txt");
	for(int i=10; i<1000; i=i+2){
		fileout << b/i << "  " << integral.simpson(i) << endl;
	}

	fileout.close();
return 0;
}
