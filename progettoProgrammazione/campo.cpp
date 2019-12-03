#include "campo.h"
#include <cstdlib>


#define R 40
#define C 30



void campo::stampa() {
	int i, j;
	for (i = 0; i < campo::a; i++ ) {
		for (j = 0; j < campo::b; j++) {
			if (campo::spazio[i][j] == '*' || campo::spazio[i][j] == 'A' || campo::spazio[i][j] == '#'  || campo::spazio[i][j] == '|' || campo::spazio[i][j] == '_') {
				cout << campo::spazio[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}

		}
		cout << "\n";
	}
}



campo::campo(int a, int b){

campo::a = a;
campo::b = b;

int colonna, riga;

int i = 0, j = 0;

	for (i = 0; i < campo::a; i++) {

		for (j = 0; j < campo::b; j++) {
			
			if (j == 0 || j == campo::b - 1 || i == 0 || i == campo::a - 1) {
				if(i == 0 || i == campo::a - 1)
					campo::spazio[i][j] = '_';
				else 
					campo::spazio[i][j] = '|';
			}
			else if (j == 1 || j == campo::b - 2)
				campo::spazio[i][j] = '#';
			else
				campo::spazio[i][j] = ' ';
		}


	}

	//crea la pedina
	riga = campo::a - 3;

	do
	{
		colonna = 2 + rand() % 37;//prende un numero casuale tra 2 e 37 e lo mette nel numrto della colonna
		
	}
	while (campo::spazio[riga][colonna] == 'C');//non é mai uguale a B quindi fa una mandata e esce, in poche parole cervo dove mettere la "V"
	
	campo::spazio[riga + 1][colonna] = '*';
	campo::spazio[riga - 1][colonna] = '*';
	campo::spazio[riga][colonna + 1] = '*';
	campo::spazio[riga][colonna - 1] = '*';
	campo::spazio[riga][colonna] = 'A';

	

};



void campo::sigla() {
	cout << " -------------------------------\n";
	cout << "| BENVENUTO NEL GIOCO CAR SPEED |\n";
	cout << " -------------------------------\n\n";
}


void campo::regolamento() {
	cout << "*******************\n";
	cout << "* REGOLE DI GIOCO *\n";
	cout << "*******************\n\n";
	cout << "*       Il gioco consiste nel far muovere l'auto (indentificata da: V )\n";
	cout << "*       e farla arrivare alla fine del percorso (ovvero dopo 100 passi)\n";
	cout << "*    evitanto gli ostacoli presenti! Se invece l'auto colpisce un ostacolo\n";
	cout << "*                            finisce la partita!\n\n";
	cout << "                            *************\n";
	cout << "                            * MOVIMENTI *\n";
	cout << "                            *************\n\n";
	cout << "E' possibile muovere l'auto solo nelle direzioni destra -> e sinistra <-: \n\n";
	cout << "A per far muovere l'auto a sinistra\n\n";
	cout << "D per far muovere l'auto a destra!\n\n";
}


void campo::sconfitta() {

}