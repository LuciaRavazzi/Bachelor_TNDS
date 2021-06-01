#include "monteCarlo.h"
#include "random.h"
#include "funzioneBase.h"
#include "seno.h"
#include <iostream>
#include <cstdlib>
#include "TApplication.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TAxis.h"

using namespace std;

int main(){

	double a=0.;
	double b=3.1315;
	funzioneBase *s=new seno();
	monteCarlo monte(a,b,s);

	TApplication app("app",0,0);
	TGraph graph1;
	TGraph graph2;
	
	double k=0;
	for(int i=100; i<10000; i=i+100){
		k++;
		graph1.SetPoint(k,i,monte.MetodoMedia(i));
		graph2.SetPoint(k,i,monte.HitOrMiss(1.,i));
			
	}

	cout << "Integrale con metodo Hit or Miss con 10000 punti: " << monte.HitOrMiss(1.,10000) << endl;
	cout << "Integrale con metodo della media con 10000 punti: " << monte.MetodoMedia(10000) << endl;
	
	TCanvas *tela=new TCanvas("tela","tela");
	TCanvas *tela1=new TCanvas("tela1","tela1");
	tela->cd();

	graph1.SetTitle("Valutazioni dell'integrale di sin(x) tra 0 e PI con il metodo della media");
	graph1.GetXaxis()->SetTitle("Numero punti per ogni valutazione dell'integrale");
	graph1.GetYaxis()->SetTitle("Valore integrale");
	graph1.Draw("AL");	

	tela1->cd();
	graph2.SetTitle("Valutazioni dell'integrale di sin(x) tra 0 e PI con il metodo Hit or Miss" );
	graph2.GetXaxis()->SetTitle("Numero punti per ogni valutazione dell'integrale");
	graph2.GetYaxis()->SetTitle("Valore integrale");
	graph2.Draw("AL");	

	app.Run();
return 0;
}  
