/* ---------------------------------------------------------------------------
 * Programa: traspuesta
 * Entradas: Una matriz 3x3 de números
 * Salidas:  La traspuesta de la matriz
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
	double m[3][3]; // la matriz
	double t[3][3]; // su traspuesta
	// se lee la matriz
	for (int f = 0; f < 3; f++) {
		cout << "Introduzca el valor de la fila " << f << " (separe los elementos con espacios): ";
		for (int c = 0; c < 3; c++) {
			cin >> m[f][c];
			t[f][c] = m[f][c];
		}
	}
	// se calcula la traspuesta
	for (int f = 1; f < 3; f++) {
		for (int c = 0; c < f; c++) {
			double tmp = t[f][c];
			t[f][c] = t[c][f];
			t[c][f] = tmp;
		}
	}
	// se envía a la salida estándar la matriz y su traspuesta
	cout << "Matriz:\n";
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++)
			cout << m[f][c] << ' ';
		cout << endl;
	}
	cout << "Traspuesta:\n";
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++)
			cout << t[f][c] << ' ';
		cout << endl;
	}
	return 0;
}
