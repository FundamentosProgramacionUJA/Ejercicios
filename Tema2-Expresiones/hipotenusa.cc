#include <iostream>
#include <cmath>     // para poder utilizar sqrt

/* Programa: Hipotenusa
 * Entradas: La longitud de los catetos de un triángulo rectángulo
 * Salidas: La longitud de la hipotenusa del triángulo
 */

int main ()
{
	double cateto1, cateto2;
	std::cout << "Introduzca los dos catetos separados por espacios: ";
	std::cin >> cateto1 >> cateto2;
	std::cout << "La hipotenusa vale: " << sqrt (cateto1*cateto1 + cateto2*cateto2) << '\n';
	return 0;
}
