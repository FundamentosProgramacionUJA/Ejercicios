#include <iostream>
#include <cmath>

using namespace std;

/* Programa: Ejercicio2
 * Entradas: Ninguna
 * Salidas: Calcula varias expresiones aritméticas y muestra su salida en pantalla
 */

int main ()
{
	double result = 3.0 * 5.0;
	cout << result << endl;

	double x = 2.0;
	double y = 3.0;
	result = pow(x, y) - x;
	cout << result << endl;

	result = 4.0;
	result = result * x;
	cout << result << endl;

	return 0;
}
