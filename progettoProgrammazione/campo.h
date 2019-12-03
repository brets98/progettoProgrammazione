#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class campo {
protected:
	int righe, colonne;
	int punti;
	char spazio[40][40];

public:
	campo();
	campo(int a, int b, int p);
	void stampa();
	void sigla();
	void regolamento();
	void sconfitta();
	void aggiungiO();

};