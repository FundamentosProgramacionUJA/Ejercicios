#include <iostream>

/* Descripción: Suma los n primeros enteros positivos
 * Parámetros de entrada:
 * - n: número de enteros a sumar
 * Precondiciones: n >= 1
 * Valor de retorno: La suma de los primeros n enteros positivos
 */
int suma (int n)
{
	if (n == 1)
		return 1;
	return n + suma (n - 1);
}

int main ()
{
	int n;
	do {
		std::cout << "Introduzca un entero positivo: ";
		std::cin >> n;
	} while (n < 1);
	std::cout << "La suma es " << suma (n) << '\n';
	return 0;
}
