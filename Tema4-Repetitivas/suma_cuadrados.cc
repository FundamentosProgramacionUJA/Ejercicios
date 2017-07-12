#include <iostream>

/* Programa: Suma10PrimerosCuadrados
 * Entradas:
 * Salidas: La suma de los cuadrados de los primeros diez enteros positivos
 */

int main ()
{
	int suma = 0;
	for (int i = 1; i <= 10; ++i)
		suma += i*i; // También vale suma = suma + i*i;
	std::cout << "La suma de los cuadrados de los 10 primeros enteros positivos es " << suma << '\n';
	return 0;
}

