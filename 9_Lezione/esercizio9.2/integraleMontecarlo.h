#ifndef _INT_MONTECARLO_
#define _INT_MONTECARLO_

#include "random.h"
#include "ipersfera.h"

class integraleMontecarlo {
	public:
		integraleMontecarlo(unsigned int nDim, int latoCubo, ipersfera isfera){
			_nDim=nDim;
			_latoCubo=latoCubo;
			_uniforme=new Random(8);
			_isfera=isfera;
		}
		double hitOrMiss(unsigned int N);
	
	private:
		unsigned int _nDim;
		int _latoCubo;
		Random *_uniforme;
		ipersfera _isfera;
};


#endif







