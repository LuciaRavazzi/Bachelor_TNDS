#include <iostream>
#include <cstdlib> //atoi
#include "dichiarazioni.h"
#include "selectionSort.h"
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "TApplication.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TAxis.h"

using namespace std;

int main(int argc, char** argv){
	
		
	if(argc<3){
		cerr << "Errore. Inserire <./eseguibile.x> <DimensioneVettore> <nomeFileSorgente>" << endl;
		return -1;
	}
	
	TApplication app("app",0,0);
	TCanvas *tela=new TCanvas("tela","tela");
	TGraph graph;		
	clock_t t;
	vettore v;
	v=carica(atoi(argv[1]), argv[2]);
	stampa(v,"before.dat");
	ordina(v);
	stampa(v,"after.dat");
	
	int k=0;
	for(int i=0; i<atoi(argv[1]); i=i+1000){
		v=carica(i, argv[2]);	
		t=clock();
		ordina(v);	
		t=clock()-t;	
		graph.SetPoint(k,i,(float) t/CLOCKS_PER_SEC);
		k++;
	}

	
	graph.SetTitle("Tempo di ordinamento:Selection Sort");
	graph.GetXaxis()->SetTitle("[N]]");
	graph.GetYaxis()->SetTitle("[t]");
	tela->cd();
	graph.Draw("AL*");
	app.Run();
	delete[] v.vett;
	v.vett=NULL;
	
	return 0;
}
	
	
	
		 
	










