#include "puntoMateriale.h"


puntoMateriale::puntoMateriale(double massa,double carica,double x,double y,double z):particella(massa,carica),posizione(x,y,z){}

campoVettoriale puntoMateriale::campoElettrico(const posizione& pos) const{
	double Ex,Ey,Ez;	
	double rx,ry,rz;
	double dist;

	dist=distanza(pos);
	rx=pos.getX()-_x;
	ry=pos.getY()-_y;
	rz=pos.getZ()-_z;

	Ex=(9E9*_carica*rx)/dist*dist*dist;
	Ey=(9E9*_carica*ry)/dist*dist*dist;
	Ez=(9E9*_carica*rz)/dist*dist*dist;
	
	campoVettoriale vett(pos,Ex,Ey,Ez);
return vett;
}


campoVettoriale puntoMateriale::campoGravitazionale(const posizione& pos) const{
	double Fx,Fy,Fz;	
	double rx,ry,rz;
	double dist;

	dist=distanza(pos);
	rx=pos.getX()-_x;
	ry=pos.getY()-_y;
	rz=pos.getZ()-_z;

	Fx=(-6.67E-11*_massa*rx)/dist*dist*dist;
	Fy=(-6.67E-1*_massa*ry)/dist*dist*dist;
	Fz=(-6.67E-1*_massa*rz)/dist*dist*dist;
	
	campoVettoriale vett(pos,Fx,Fy,Fz);
return vett;
	
}
