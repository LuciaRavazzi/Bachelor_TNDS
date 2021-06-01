#include <iostream>
#include "random.h"
#include <cstdlib>
#include "TApplication.h"
#include "TCanvas.h"
#include "TH1F.h"

using namespace std;

int main(int argc,char** argv){
	if(argc!=3){
		cerr << "Errore.Eseguire il file inserendo <./eseguibile.x> <elementi-Iniziali> <ElemSomme Parziali>" << endl;
	return -1;
	}

	int N=atoi(argv[1]);//elementi della serie di partenza
	int n=atoi(argv[2]);//quanti elementi sommare
	NumeriCasuali r(3);
	double* vett=new double [N];
	double accu=0;	

	TApplication app("app",0,0);
	TH1F isto("Istogramma","Teorema del limite centrale",100, 40,70);
	TH1F isto1("Istogramma","Numeri distribuiti uniformemente tra 0 e 1",100, 0,8);

	for(int i=0; i<N; i++){
		vett[i]=r.uniforme();
		isto1.Fill(vett[i]);
	}	

	
	for(int j=0; j<N; j=j+n){
		accu=0;
		for(int k=j; k<j+n; k++)
		accu=accu+vett[k];
	
		
		isto.Fill(accu);		
	}

				
	TCanvas *tela=new TCanvas("tela","tela");
	TCanvas *tela1=new TCanvas("tela1","tela1");
	tela->cd();
	isto.Draw();
	tela1->cd();
	isto1.Draw();

	app.Run();			

return 0;
}
