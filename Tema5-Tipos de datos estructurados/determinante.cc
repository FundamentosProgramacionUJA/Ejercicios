/* ---------------------------------------------------------------------------
 * Programa: determinante
 * Entradas: Una matriz 3x3 de números
 * Salidas:  El determinante de la matriz
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
	double det = m[0][0]*m[1][1]*m[2][2];
	det +=  m[0][1]*m[1][2]*m[2][0];
	det +=  m[1][0]*m[2][1]*m[0][2];
	det -=  m[2][0]*m[1][1]*m[0][2];
	det -=  m[0][0]*m[2][1]*m[1][2];
	det -=  m[2][2]*m[1][0]*m[0][1];
	cout << "El determinante es " << det << endl;
	return 0;
}
