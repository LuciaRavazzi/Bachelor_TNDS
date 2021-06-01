#ifndef _EQUAZIONEDIFFERENZIALEBASE_
#define _EQUAZIONEDIFFERENZIALEBASE_

#include "vettoreLineare.h"
#include "funzioneVettorialeBase.h"

class equazioneDifferenzialeBase {
	public:
		virtual vettoreLineare passo(double t, const vettoreLineare& inizio,double h, funzioneVettorialeBase *f) const=0;
};


#endif 
