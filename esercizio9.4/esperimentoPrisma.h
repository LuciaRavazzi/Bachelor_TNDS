#ifndef _ESPERIMENTOPRISMA_H
#define _ESPERIMENTOPRISMA_H

#include "random.h"

class esperimentoPrisma {
	public:
		esperimentoPrisma();
		void esegui();
		void analizza();
		
		double get_lambda1(){return _lambda1;}
		double get_lambda2(){return _lambda2;}
		double get_alpha(){return _alpha;}
		double get_t1_teo(){return _t1_teo;}
		double get_t2_teo(){return _t2_teo;}
		double get_t0_teo(){return _t0_teo;}
		double get_A_teo(){return _A_teo;}
		double get_B_teo(){return _B_teo;}
		double get_n1_teo(){return _n1_teo;}
		double get_n2_teo(){return _n2_teo;}
		double get_d1_teo(){return _d1_teo;}
		double get_d2_teo(){return _d2_teo;}
		
		double get_t1_mis(){return _t1_mis;}
		double get_t2_mis(){return _t2_mis;}
		double get_t0_mis(){return _t0_mis;}
		double get_A_mis(){return _A_mis;}
		double get_B_mis(){return _B_mis;}
		double get_n1_mis(){return _n1_mis;}
		double get_n2_mis(){return _n2_mis;}
		double get_d1_mis(){return _d1_mis;}
		double get_d2_mis(){return _d2_mis;}
				
	private:
		Random _generatore;
		double _lambda1, _lambda2, _alpha, _sigmat;
		double _A_teo, _A_mis;
		double _B_teo, _B_mis;
		double _n1_teo, _n1_mis;
		double _n2_teo, _n2_mis;
		double _t0_teo, _t0_mis;
		double _t1_teo, _t1_mis;
		double _t2_teo, _t2_mis;
		double _d1_teo, _d1_mis;
		double _d2_teo, _d2_mis;
};

#endif
