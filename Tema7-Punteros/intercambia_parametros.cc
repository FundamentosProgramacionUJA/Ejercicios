#include <iostream>

/* Descripcion: Intercambia el valor de sus dos parámetros.
 * Parámetros de entrada y salida:
 * - x: dirección del primer valor a intercambiar
 * - y: dirección del segundo valor a intercambiar
 */
void intercambia (int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main () {
	int x = 4, y = 10;
	std::cout << x << ' ' << y << std::endl;
	std::cout << "Se invoca a intercambia\n";
	intercambia (&x, &y);
	std::cout << x << ' ' << y << std::endl;
	return 0;
}
