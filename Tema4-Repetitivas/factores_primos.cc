#include <iostream>

/* Programa: DescomponeEnFactoresPrimos
 * Entradas: Un entero positivo
 * Salidas: Su descomposición en factores primos
 */

int main ()
{
	int n;
	std::cout << "Introduzca un número entero positivo: ";
	std::cin >> n;
	int divisor = 2;
	while (n > 1) {
		int veces = 0;
		while (n % divisor == 0) {
			veces++;
			n = n / divisor;
		}
		if (veces > 0)
			std::cout << divisor << '^' << veces << std::endl;
		divisor++;
	}
	return 0;
}

