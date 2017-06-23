#include <iostream>

using namespace std;

/* Programa: CalificaciónMedia
 * Entradas: La calificación de cuatro alumnos
 * Salidas: La nota media de los cuatro alumnos
 */

int main () {
	double n1, n2, n3, n4;
	cout << "Introduzca las nota de los cuatro alumnos separadas por espacios: ";
	cin >> n1 >> n2 >> n3 >> n4;
	cout << "La nota media es: " << (n1+n2+n3+n4)/4.0 << endl;
	return 0;
}
