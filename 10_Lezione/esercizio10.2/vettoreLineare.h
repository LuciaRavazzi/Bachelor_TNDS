#ifndef _VETTORE_LINEARE_H
#define _VETTORE_LINEARE_H

#include "vettore.h"

class vettoreLineare: public vettore{
	public:
		vettoreLineare(unsigned int n): vettore(n){};
		vettoreLineare operator+(const vettoreLineare &) const;
		vettoreLineare operator*(const double) const;
		double operator*(const vettoreLineare &) const;
};

#endif

