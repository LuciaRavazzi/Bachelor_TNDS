#ifndef _VETTORE_
#define _VETTORE_

class vettore{
	public:
	vettore();
	vettore(int);
	~vettore();

	double getComponente(int) const;
	double getN() const {return _N;}
	void setComponente(int,double);

	vettore(const vettore&);//non sono dei costruttori
	vettore& operator=(const vettore&);	

	protected:
	int _N;
	double* _vett;
};
#endif
