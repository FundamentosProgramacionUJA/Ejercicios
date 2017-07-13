/* ---------------------------------------------------------------------------
 * Programa: producto_matrices
 * Entradas: Dos matrices 3x3 de números (realmente, se definen en el programa)
 * Salidas:  El producto de las dos matrices
 * --------------------------------------------------------------------------- */

#include <iostream>

int main ()
{
	double m1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	double m2[3][3] = { 1, 2, 3,
	                    4, 5, 6,
	                    7, 8, 9 };
	double r[3][3];

	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++) {
			r[f][c] = 0.0;
			for (int x = 0; x < 3; x++) {
				r[f][c] += m1[f][x] * m2[x][c];
			}
		}
	}

	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++)
			std::cout << r[f][c] << ' ';
		std::cout << std::endl;
	}
	return 0;
}
