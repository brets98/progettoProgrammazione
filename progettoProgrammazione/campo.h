#pragma once
#include <iostream>
using namespace std;
class campo {
protected:
	int a, b;
	char spazio[40][40];
public:
	campo();
	campo(int a, int b);
	void stampa();
	void crea_campo();

};




