#ifndef _CORPOCELESTE_
#define _CORPOCELESTE_

#include "particella.h"
#include "posizione.h"

class corpoCeleste: public particella {
	public:
	corpoCeleste(string nome,double raggio,double massa);

	void setNome(string nome) { _nome=nome;}
	void setRaggio(double raggio) {_raggio=raggio;}
	void setMassa(double massa) { _massa=massa;}

	string getNome() const { return _nome;}
	double getRaggio() const {return _raggio;}

	void print() const;

	double getXpos() { return _pos.getX();}//posso accedere ai metodi di _pos 
	double getYpos() { return _pos.getY();}
	double getZpos() { return _pos.getZ();}

	double potenziale(posizione& p) { return -(6.67E-11*_massa)/_pos.distanza(p);}

	private:
	string _nome;
	double _raggio;
	posizione _pos;//viene invocato il costruttore che assegna ai metodi privati lo zero 


};
#endif
