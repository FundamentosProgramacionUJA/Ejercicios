#include <iostream>

/* Descripción: Calcula el máximo común divisor de dos enteros
 * Parámetros de entrada:
 * - x, y: los enteros
 * Precondiciones: x >= y
 * Valor de retorno: El máximo común divisor de x e y
 */
int mcd (int x, int y)
{
	return (y == 0) ? x : mcd (y, x % y);
}

int mcd_iterativo (int x, int y)
{
	while (y > 0) {
		int resto = x % y;
		x = y;
		y = resto;
	}
	return x;
}

int main ()
{
	int x, y;
	std::cout << "Introduzca dos enteros (el primero el mayor): ";
	std::cin >> x >> y;
	std::cout << "Mcd (cáculo recursivo): " << mcd (x, y) << '\n';
	std::cout << "Mcd (cáculo iterativo): " << mcd_iterativo (x, y) << '\n';
	return 0;
}
