#include <iostream>

using namespace std;

/* Programa: enRango
 * Entradas: Una edad (entero)
 * Salidas: Un mensaje indicando si la edad est� en el rango [18,25]
 */

int main ()
{
	int edad;
	cout << "Introduce una edad: ";
	cin >> edad;
	if (edad >= 18 && edad <= 25)
		cout << "La edad est� en el rango [18,25]\n";
	else
		cout << "La edad est� fuera del rango [18,25]\n";
	return 0;
}

