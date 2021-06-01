#ifndef _RUNGEKUTTA_
#define _RUNGEKUTTA_

#include "equazioneDifferenzialeBase.h"
#include "funzioneVettorialeBase.h"
#include "vettoreLineare.h"

class rungeKutta: public equazioneDifferenzialeBase{
	public:
		vettoreLineare passo(double t, const vettoreLineare& inizio,double h, funzioneVettorialeBase *f) const;
};
#endif
