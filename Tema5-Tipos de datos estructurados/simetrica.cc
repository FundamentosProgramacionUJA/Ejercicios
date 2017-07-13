/* ---------------------------------------------------------------------------
 * Programa: simetrica
 * Entradas: Una matriz 3x3 de números
 * Salidas:  Información sobre si la matriz es simétrica o no
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
	double m[3][3];
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++) {
			cout << "Introduzca el valor de la fila " << f << ", columna " << c << ": ";
			cin >> m[f][c];
		}
	}
	bool simetrica = true;
	for (int f = 1; f < 3 && simetrica; f++)
		for (int c = 0; c < f && simetrica; c++)
			if (m[f][c] != m[c][f])
				simetrica = false;
	if (simetrica)
		cout << "La matriz es simétrica\n";
	else
		cout << "La matriz no es simétrica\n";
	return 0;
}
