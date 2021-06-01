#ifndef _PENDOLO_
#define _PENDOLO_

#include "funzioneVettorialeBase.h"
#include "vettoreLineare.h"

class pendolo: public funzioneVettorialeBase{
	public:
		pendolo(double g, double l){
			_g=g;
			_l=l;
		}
		vettoreLineare eval(const vettoreLineare &,double t) const;
		

	private:
		double _g,_l;

};



#endif
