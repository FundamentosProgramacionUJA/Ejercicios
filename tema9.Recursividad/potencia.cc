#include <iostream>

/* Se utiliza la siguiente recurrencia:
 * x^y =  1, si y vale 0
 *        x * x^(y-1), en otro caso
 */

/* Descripción: Calcula x^y
 * Parámetros de entrada:
 * - x: número a elevar
 * - y: potencia a elevar
 * Precondiciones: y >= 0
 * Valor de retorno: x^y
 */
double potencia (double x, int y)
{
	if (y == 0)
		return 1;
	return x * potencia (x, y - 1);
}

int main ()
{
	std::cout << potencia (2, 7) << '\n';
	return 0;
}
