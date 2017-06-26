#include <iostream>

/* Programa: M�ximoCuatroN�meros
 * Entradas: Cuatro n�meros reales
 * Salidas: El m�ximo de los cuatro n�meros
 */

int main ()
{
	double a, b, c, d;
	std::cout << "Introduzca cuatro n�meros separados por espacios: ";
	std::cin >> a >> b >> c >> d;
	// Forma 1: se va almacenando en la variable a el m�ximo
	if (b > a)
		a = b;
	if (c > a)
		a = c;
	if (d > a)
		a = d;
	std::cout << "El mayor es " << a << std::endl;
	// Forma 2
	if (a >= b && a >= c && a >= d) {
		std::cout << "Forma 2. El mayor es " << a << std::endl;
	} else if (b >= c && b >= d) {
		std::cout << "Forma 2. El mayor es " << b << std::endl;
	} else if (c >= d) {
		std::cout << "Forma 2. El mayor es " << c << std::endl;
	} else {
		std::cout << "Forma 2. El mayor es " << d << std::endl;
	}
	return 0;
}

