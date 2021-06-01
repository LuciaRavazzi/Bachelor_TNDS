#ifndef _POSIZIONE_
#define _POSIZIONE_

class posizione {
	public:
	posizione();
	posizione(double , double , double );
	
	double getX() const; //coordinate cartesiane
	double getY() const;
	double getZ() const;
	
	double rho() const; //coordinate cilindriche
	double phi() const;

	double raggio() const; //coordiante sferiche
	double theta() const; 
	double distanza(const posizione&) const; 

	private:
	double _raggio,_theta,_phi;
};

#endif
