#include <iostream>

/* Programa: Intercambio de variables
 * Entradas: Dos valores numéricos
 * Salidas: Los valores intercambiados

 */

int main ()
{
	double x, y;
	std::cout << "Introduzca dos valores numéricos: ";
	std::cin >> x >> y;
	std::cout << "Valores introducidos:\n x = " << x << " y = " << y << '\n';
	double temp = x;
	x = y;
	y = temp;
	std::cout << "Valores intercambiados:\n x = " << x << " y = " << y << '\n';
	return 0;
}
