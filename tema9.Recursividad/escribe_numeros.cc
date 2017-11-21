#include <iostream>

/* Descripción: Muestra en una línea en la salida estándar una secuencia de números en orden creciente separados por 
 *              un espacio
 * Parámetros de entrada:
 * - ini, fin: los límites incial y final (respectivamente) de la secuenia
 * Precondiciones: ini <= fin
 */
void ascendente (int ini, int fin)
{
	if (ini == fin)
		std::cout << fin << '\n';
	else {
		std::cout << ini << ' ';
		ascendente (ini+1, fin);
	}
}

/* Descripción: Muestra en una línea en la salida estándar una secuencia de números en orden descendiente separados por 
 *              un espacio
 * Parámetros de entrada:
 * - ini, fin: los límites incial y final (respectivamente) de la secuenia
 * Precondiciones: ini <= fin
 */
void descendente (int ini, int fin)
{
	if (ini == fin)
		std::cout << ini << '\n';
	else {
		std::cout << fin << ' ';
		descendente (ini, fin-1);
	}
}

int main ()
{
	ascendente (3, 15);
	descendente (3, 15);
	return 0;
}
