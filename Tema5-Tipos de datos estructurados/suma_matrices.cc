/* ---------------------------------------------------------------------------
 * Programa: suma_matrices
 * Entradas: Dos matrices 3x3 de números (realmente se definen en el programa)
 * Salidas:  La suma de las dos matrices
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main ()
{
	double m1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	double m2[3][3] = { 1, 2, 3,
	                    4, 5, 6,
	                    7, 8, 9 };
	double r[3][3];

	// se realiza la suma
	for (int f = 0; f < 3; f++)
		for (int c = 0; c < 3; c++)
			r[f][c] = m1[f][c] + m2[f][c];

        // se muestra la suma en la salida estándar
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++)
			cout << r[f][c] << ' ';
		cout << endl;
	}
	return 0;
}
