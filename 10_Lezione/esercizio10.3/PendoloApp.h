#ifndef _PENDOLOAPP_
#define _PENDOLOAPP_

#include "funzioneVettorialeBase.h"
#include "vettoreLineare.h"

class pendoloApp: public funzioneVettorialeBase{
	public:
		pendoloApp(double g, double l){
			_g=g;
			_l=l;
		}
		vettoreLineare eval(const vettoreLineare &,double t) const;
		

	private:
		double _g,_l;

};



#endif
