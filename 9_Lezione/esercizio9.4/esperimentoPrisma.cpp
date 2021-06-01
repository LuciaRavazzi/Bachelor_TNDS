#include "esperimentoPrisma.h"
#include "random.h"
#include <cmath>

const double PI=3.14159;

esperimentoPrisma::esperimentoPrisma():
	_generatore(8),
	_lambda1(579.1E-9),
	_lambda2(404.7E-9),
	_alpha((60.*PI)/180.),
	_sigmat(0.3E-3),
	_A_teo(2.7),
	_B_teo(60000E-18)	
{
	_n1_teo=sqrt(_A_teo+_B_teo/(_lambda1*_lambda1));		
	_n2_teo=sqrt(_A_teo+_B_teo/(_lambda2*_lambda2));		
	_t0_teo=PI/2.;
	_d1_teo=2.*asin(_n1_teo*sin(_alpha*0.5))-_alpha;
	_t1_teo=_t0_teo+_d1_teo;
	_d2_teo=2.*asin(_n2_teo*sin(_alpha*0.5))-_alpha;
	_t2_teo=_t0_teo+_d2_teo;
}

void esperimentoPrisma::esegui(){
	// Misura t0.
	_t0_mis=_generatore.gaussiana(_t0_teo,_sigmat);
	// Misura t1.
	_t1_mis=_generatore.gaussiana(_t1_teo,_sigmat);
	// Misura t2.
	_t2_mis=_generatore.gaussiana(_t2_teo,_sigmat);
}

void esperimentoPrisma::analizza(){
	// A partire dai valori misurati calcola A e B.
	double dm1,dm2;
	_d1_mis=_t1_mis-_t0_mis;
	_d2_mis=_t2_mis-_t0_mis;
	_n1_mis=(sin((_d1_mis+_alpha)/2))/sin(_alpha/2);
	_n2_mis=(sin((_d2_mis+_alpha)/2))/sin(_alpha/2);
	
	_A_mis=(_lambda2*_lambda2 * _n2_mis*_n2_mis - _lambda1*_lambda1 * _n1_mis*_n1_mis)/(_lambda2*_lambda2 - _lambda1*_lambda1);
	_B_mis=(pow(_n2_mis,2) - pow(_n1_mis,2))/(pow(_lambda2,-2) - pow(_lambda1,-2));
}
