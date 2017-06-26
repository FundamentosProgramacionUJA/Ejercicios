#include <iostream>

using namespace std;

/* Programa: ParidadDivisible
 * Entradas: Tres valores enteros
 * Salidas: Indica la paridad del primer valor y si el tercer valor es un divisor del segundo valor
 */

int main ()
{
	int x, y;
	cout << "Introduzca un valor entero: ";
	cin >> x;
	if (x % 2 == 1)
		cout << x << " es impar\n";
	else
		cout << x << " es par\n";

	cout << "Introduzca dos enteros separados por espacios: ";
	cin >> x >> y;
	if (x % y != 0)
		cout << x << " no es un múltiplo de " << y << '\n';
	else
		cout << x << " es un múltiplo de " << y << '\n';
	return 0;
}

