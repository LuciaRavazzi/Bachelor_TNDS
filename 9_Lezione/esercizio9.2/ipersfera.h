#ifndef _IPERSFERA_H_
#define _IPERSFERA_H_

#include <cmath>
#include <iostream>

using namespace std;

class ipersfera{
	public:
		ipersfera(){;}
		ipersfera(double r, unsigned int n){
			_raggio=r;
			_numeroDim=n;
		}
	
		int dentro(double * vettore){
			double accu=0;
			for(int i=0; i<_numeroDim; i++)
				accu+=pow(vettore[i],2); //calcolo la distanza
			
			if(accu<_raggio*_raggio){
				return 1;
			} else {
				return 0;
			}
		}

	private:
		double _raggio;
		unsigned int _numeroDim;
};

#endif
