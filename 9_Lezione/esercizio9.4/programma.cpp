#include "esperimentoPrisma.h"
#include <iostream>
#include "TApplication.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TH1F.h"
#include "TAxis.h"
#include "vettoreDati.h"


const int numeroMisure = 10000;

using namespace std;

int main() {
	TApplication app("app",0,0);
	TH1F istoA("istogramma_A_mis", "Valori di A misurati",100,2.695,2.705);
	TH1F istoB("istogramma_B_mis", "Valori di B misurati",100,598E-14,6.1E-14);
	TH1F iston1("istogramma_n1_mis", "Valori di n1 misurati",100,1.695,1.698);
	TH1F iston2("istogramma_n2_mis", "Valori di n2 misurati",100,1.750,1.752);
	
	TH2F h1("istogramma2d1", "Valori residui per n", 100, -0.001, 0.001 , 100,-0.001, 0.001); 
	TH2F h2("istogramma2d2", "Valori residui per A e B", 100, -0.005, 0.005 , 100,-1E-15, 1E-15); 
	TH2F h3("istogramma2d3", "Valori residui per delta",100,-0.002,0.002,100,-0.002,0.002);
	// Costruisce l'esperimento.
	esperimentoPrisma esp;
	
	// Crea i vettori in cui salvare i dati.
	vettoreDati vettA(numeroMisure);
	vettoreDati vettB(numeroMisure);
	vettoreDati vettn1(numeroMisure);
	vettoreDati vettn2(numeroMisure);
	vettoreDati vettd1(numeroMisure);
	vettoreDati vettd2(numeroMisure);
	
	// Esegue numeroMisure volte la misura.
	for(int i=0; i<numeroMisure; i++){
		esp.esegui();
		esp.analizza();
		
		vettA.setComponente(i,esp.get_A_mis());
		istoA.Fill(vettA.getComponente(i));
		vettB.setComponente(i,esp.get_B_mis());
		istoB.Fill(vettB.getComponente(i));
		vettn1.setComponente(i,esp.get_n1_mis());
		iston1.Fill(vettn1.getComponente(i));
		vettn2.setComponente(i,esp.get_n2_mis());
		iston2.Fill(vettn2.getComponente(i));
		vettd1.setComponente(i,esp.get_d1_mis());
		vettd2.setComponente(i,esp.get_d2_mis());
		h1.Fill(vettn1.getComponente(i)-esp.get_n1_teo(),vettn2.getComponente(i)-esp.get_n2_teo());
		h2.Fill(vettA.getComponente(i)-esp.get_A_teo(),vettB.getComponente(i)-esp.get_B_teo());
		h3.Fill(vettd1.getComponente(i)-esp.get_d1_teo(),vettd2.getComponente(i)-esp.get_d2_teo());
	}
	
	// Stampa i risultati.
	
	cout<<endl<<endl<<"======  ANALISI DEI DATI ======"<<endl;
	cout<<"Valore di n1: "<<vettn1.media()<<" +- "<<vettn1.deviazioneStandard()<<endl;
	cout<<"Valore di n2: "<<vettn2.media()<<" +- "<<vettn2.deviazioneStandard()<<endl;
	cout<<"Valore di A: "<<vettA.media()<<" +- "<<vettA.deviazioneStandard()<<endl;
	cout<<"Valore di B: "<<vettB.media()<<" +- "<<vettB.deviazioneStandard()<<endl;
	cout<<endl;
	cout<<"Correlazione tra i valori di n: "<<vettn1.correlazione(vettn2)<<endl;
	cout<<"Correlazione tra i valori di A e B: "<<vettA.correlazione(vettB)<<endl;
	cout<<"Correlazione tra i valori di delta: "<<vettd1.correlazione(vettd2)<<endl<<endl;
	cout<<endl<<"====================================="<<endl<<endl;
	

	istoA.SetTitle("Distribuzione dei valori di A");
	istoA.GetXaxis()->SetTitle("[A]");
	istoB.SetTitle("Distribuzione dei valori di B");
	istoB.GetXaxis()->SetTitle("[B]");
	iston1.SetTitle("Distribuzione dei valori di n1");	
	iston1.GetXaxis()->SetTitle("[n1]");
	iston2.SetTitle("Distribuzione dei valori di n2");
	iston2.GetXaxis()->SetTitle("[n2]");

	TCanvas tela("tela","tela");
	tela.Divide(2,2,0.01,0.01);
	tela.cd(1);
	istoA.Draw();
	tela.cd(2);
	istoB.Draw();
	tela.cd(3);
	iston1.Draw();
	tela.cd(4);
	iston2.Draw();

	TCanvas tela1("tela1","tela1");
	tela1.Divide(3,1,0.01,0.01);
	tela1.cd(1);
	h1.Draw();
	tela1.cd(2);
	h2.Draw();
	tela1.cd(3);
	h3.Draw();
	
	app.Run();
	return 0;
}
