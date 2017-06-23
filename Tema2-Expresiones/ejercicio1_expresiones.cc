#include <iostream>
#include <cmath>
using namespace std;
/* Programa: Expresiones
 * Entradas: Ninguna
 * Salidas: El resultado de evaluar ciertas expresiones aritméticas
 */

int main ()
{
    // Expresión a)
	double a = 2, b = 1;
	cout << a / b + 1 << endl;
    // Expresión b)
	double c = 1, d = 4;
	cout << (a + b) / (c + d) << endl;
    // Expresión c)
	double e = 4, f = 2;
	cout << (a + b/c) / (d + e/f) << endl;
    // Expresión d)

	return 0;
}
