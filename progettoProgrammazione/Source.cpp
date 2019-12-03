#include "campo.h"

int main() {
	int punti;
	bool logical = 1;

	campo c(30, 30);
	c.sigla();
	system("pause");
	system("cls");
	c.regolamento();
	system("pause");
	system("cls");
	c.stampa();
	system("pause");

	/*
	
		QUI CI VA IL WHILE DEL PROCESSO DEL GIOCO
	
	*/

	return 0;
}