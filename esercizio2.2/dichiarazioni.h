#ifndef _DICHIARAZIONI
#define _DICHIARAZIONI
struct vettore{
	unsigned int quanti;
	double * vett;
};

void stampa(const vettore);

void stampa(const vettore, const char*);

vettore carica(int, const char*);

void ordina(vettore);

#endif
