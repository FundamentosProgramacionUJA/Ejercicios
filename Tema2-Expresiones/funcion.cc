#include <iostream>
#include <cmath>

/* Programa: Función
 * Entradas: Los valores x e y de una función
 * Salidas: El resultado de evaluar la función. Si el valor de y vale 1 o -1 se produce un error, pues la función no está
 *          definida para dicho valor
 */

int main ()
{
	double x, y;
	std::cout << "Introduzca los valores de x e y separados por espacios: ";
	std::cin >> x >> y;
	std::cout << "La función vale: " << sqrt(x) / (y*y - 1) << '\n';
	return 0;
}
