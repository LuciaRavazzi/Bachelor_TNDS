#include <iostream>
#include "funzione.h"
#include "funzioneBase.h"
#include <cstdlib>
#include "solutore.h"
#include "bisezione.h"

const double PI=3.1415;

using namespace std;

int main() {

	funzioneBase *f=new funzione();
	solutore *s=new bisezione(0,0,1E-6,10000,f);
	
	for(int n=1; n<21; n++){
	s->setA(n*PI);
	s->setB(n*PI+PI/2);
	cout << "Zero della funzione:" << s->cercaZeri() << endl;
	}
	return 0;
}
		
