#include "random.h"
#include <iostream>
#include "TApplication.h"
#include "TH1F.h"
#include "TCanvas.h"

using namespace std;

int main(){
	random rand(3);

	TApplication app("app",0,0);
	TH1F isto("istogramma","Distribuzione esponenziale",100,0,100);
	TH1F isto2("istogramma","Distribuzione gaussiana",100,-5,5);
	
	for(int i=0; i<100000; i++){
		isto.Fill(rand.esponenziale(0.1));
		isto2.Fill(rand.gaussiana(0.,1.));
	}

	TCanvas tela("tela","tela");
	tela.Divide(1,2,0,0);	
	tela.cd(1);
	isto.Draw();
	tela.cd(2);
	isto2.Draw();
	app.Run();
	
return 0;
}
