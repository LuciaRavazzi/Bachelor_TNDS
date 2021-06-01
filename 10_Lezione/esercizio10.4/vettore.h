#ifndef _VETTORE_H_
#define _VETTORE_H_

class vettore{
	public:
		// Costruttori
		vettore();
		vettore(unsigned int);
		vettore(const vettore&); // Copy constructor
		vettore& operator=(const vettore &); // Ridefinizione dell'operatore
		
		// Distruttore
		~vettore();
		
		// Metodi
		unsigned int getN() const {return _n;}
		double getComponente(unsigned int pos) const;
		void setComponente(unsigned int pos, double val);
		
	protected:
		unsigned int _n;
		double * _arr;
};

#endif
