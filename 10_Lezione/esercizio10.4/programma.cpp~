#include "funzioneVettorialeBase.h"
#include "moto.h"
#include "rungeKutta.h"
#include "vettoreLineare.h"
#include <iostream>
#include <cmath>
#include "TApplication.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TAxis.h"

using namespace std;

int main(){
	TApplication app("app",0,0);
	TCanvas *tela=new TCanvas("tela","tela");
	TGraph graph;

	rungeKutta rk;
	double h=0.01;
	vettoreLineare x(2);			
	double w=9.;
	double finoA=300.;
	int nsteps=finoA/h;	
	double k=0;

	do{
		funzioneVettorialeBase *mt=new moto(10,w,1./30.);
		x.setComponente(0,0.);
		x.setComponente(1,0.);
		double t=0;
		for(int i=0; i<nsteps; i++){
			x=rk.passo(t,x,h,mt);
			t=t+h;
		}	
	
		double omegaprec=0;
		double tinit=0;
		double tfin=0;
		double ampiezza=0;
		
		
		while(1>0){
			x=rk.passo(t,x,h,mt);
			// Controlla se il prodotto delle velocita' angolari e' cambiato di segno.
			if(x.getComponente(1)*omegaprec<0){
				tinit=t;
				break;
			}
			t=t+h;		
			omegaprec=x.getComponente(1);
		}

		t=t+h;
		omegaprec=x.getComponente(1);
		 
		while(1>0){
			
			x=rk.passo(t,x,h,mt);
		
			// Controlla se il prodotto delle velocita' angolari e' cambiato di segno.
			if(x.getComponente(1)*omegaprec<0){
				tfin=t;
				ampiezza=x.getComponente(0);
				break;
			}
		
			t=t+h;
			omegaprec=x.getComponente(1);
		}
		
		cout << "w: " << w << "  Ampiezza: " << fabs(ampiezza) << endl;
		graph.SetPoint(k,w,fabs(ampiezza));
		w=w+0.05;
		k++;
	} while(w<11);


	graph.SetTitle("Lorentziana");
	graph.GetXaxis()->SetTitle("[w]");
	graph.GetYaxis()->SetTitle("[Ampiezza]");

	tela->cd();
	graph.Draw("AL*");
	app.Run();
return 0;
}
