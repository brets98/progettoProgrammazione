#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class campo {
protected:
	int a, b;
	char spazio[40][40];

public:
	campo();
	campo(int a, int b);
	void stampa();
	void sigla();
	void regolamento();
	void sconfitta();

};