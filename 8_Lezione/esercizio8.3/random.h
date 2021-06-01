#ifndef _RANDOM_
#define _RANDOM_

class NumeriCasuali{
	public:
	NumeriCasuali(unsigned int seed);
	NumeriCasuali(unsigned int a,unsigned int c,unsigned int m,unsigned int seed);

	void setA(double a) { _a=a;}
	void setC(double c) { _c=c;}
	void setM(double m) { _m=m;}
	
	double uniforme();

	private:
	unsigned int _a;
	unsigned int _c;
	unsigned int _m;
	unsigned int _seed;
	unsigned int _prec;
};

#endif
