#include <iostream>

/* Programa: MáximoCuatroNúmeros
 * Entradas: Cuatro números reales
 * Salidas: El máximo de los cuatro números
 */

int main ()
{
	double a, b, c, d, mayor;
	std::cout << "Introduzca cuatro números separados por espacios: ";
	std::cin >> a >> b >> c >> d;
	// Forma 1: se va almacenando en la variable mayor el máximo
	mayor = a;
	if (b > mayor)
		mayor = b;
	if (c > mayor)
		mayor = c;
	if (d > mayor)
		mayor = d;
	std::cout << "El mayor es " << mayor << std::endl;
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

