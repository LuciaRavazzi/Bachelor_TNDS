#include "eulero.h"
#include "equazioneDifferenzialeBase.h"
#include "funzioneVettorialeBase.h"
#include "vettoreLineare.h"



vettoreLineare eulero::passo(double t, const vettoreLineare& inizio,double h, funzioneVettorialeBase *f) const{
	return inizio+(f->eval(inizio,t))*h;
}


