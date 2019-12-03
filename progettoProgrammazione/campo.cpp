#include "campo.h"
#include <cstdlib>




void campo::stampa() {
	int i, j;
	for (i = 0; i < campo::a; i++ ) {
		for (j = 0; j < campo::b; j++) {
			if (campo::spazio[i][j] == '&')
				cout << campo::punti;
			else
				cout << campo::spazio[i][j] << " ";

		}
		cout << "\n";
	}
}



campo::campo(int a, int b, int p){

campo::a = a;
campo::b = b;
campo::punti = p;

int colonna, riga;

int i = 0, j = 0;

	for (i = 0; i < campo::a; i++) {

		for (j = 0; j < campo::b; j++) {
			
			if (j == 0 || j == campo::b - 1 || i == 0 || i == campo::a - 1 || j == campo::b - 14 ) {
				if(i == 0 || i == campo::a - 1)
					campo::spazio[i][j] = '_';
				else 
					campo::spazio[i][j] = '|';
			}
			else if (j == 1 || j == campo::b - 15)
				campo::spazio[i][j] = '#';
			else
				campo::spazio[i][j] = ' ';
		}


	}

	campo::spazio[14][27] = 'P';
	campo::spazio[14][28] = 'U';
	campo::spazio[14][29] = 'N';
	campo::spazio[14][30] = 'T';
	campo::spazio[14][31] = 'I';
	campo::spazio[14][32] = '=';
	campo::spazio[14][33] = '&';
	//campo::spazio[14][33] = per far stampare dei punti secondo me va usato un carattere speciale 
	//crea la pedina
	riga = campo::a - 3; // SOLLEVO DI 3 LA MACCHININA 

	do
	{
		colonna = 2 + rand() % 24;//prende un numero casuale tra 2 e 37 e lo mette nel numrto della colonna
		
	}
	while (campo::spazio[i][j]== 'C');//non é mai uguale a B quindi fa una mandata e esce, in poche parole cervo dove mettere la "V"
	
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