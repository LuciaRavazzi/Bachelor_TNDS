#ifndef _FUNZIONEVETTORIALEBASE_
#define _FUNZIONEVETTORIALEBASE_

#include "vettoreLineare.h"

class funzioneVettorialeBase{
	public:
		virtual vettoreLineare eval(const vettoreLineare &,double t) const=0;
};
#endif



