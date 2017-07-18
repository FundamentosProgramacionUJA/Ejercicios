#include <iostream>

using namespace std;

/* Descripcion: Calcula el producto de dos matrices 3x3.
 * Parámetros de entrada:
 *   - m1: primer operando
 *   - m2: segundo operando
 * Parámetros de salida:
 *   - r: el resultado de m1*m2
 */
void producto (const double m1[3][3], const double m2[3][3], double r[3][3])
{
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++) {
			r[f][c] = 0.0;
			for (int x = 0; x < 3; x++) {
				r[f][c] += m1[f][x] * m2[x][c];
			}
		}
	}
}

int main ()
{
	double m1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	double m2[3][3] = { 1, 2, 3, 
	                    4, 5, 6, 
	                    7, 8, 9 };
	double r[3][3];
	
	producto (m1, m2, r);
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 3; c++)
			cout << r[f][c] << ' ';
		cout << endl;
	}
	return 0;
}
