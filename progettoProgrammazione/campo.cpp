#include "campo.h"
#define R 40
#define C 30
void campo::stampa() {
	int i, j;
	for (i = 0; i < campo::a; i++ ) {
		for (j = 0; j < campo::b; j++) {
			if (campo::spazio[i][j] == '*' || campo::spazio[i][j] == 'O' || campo::spazio[i][j] == 'X' || campo::spazio[i][j] == 'V') {
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
};
void campo::crea_campo() {
	int i = 0, j = 0;

	for (i = 0; i < campo::a; i++) {

		for (j = 0; j < campo::b ; j++) {

			if (i == 0 || i == campo::a - 1 || j == campo::b - 1 || j == 0)
				campo::spazio[i][j] = '*';
			else
				campo::spazio[i][j] = ' ';
		}


	}
}

