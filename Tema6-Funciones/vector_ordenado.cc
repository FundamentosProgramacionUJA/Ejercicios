#include <iostream>

/* Descripción: Calcula si un vector está ordenado crecientemente
 * Parámetros de entrada:
 *   - v: el vector
 *   - tamv: el tamaño de v
 * Valor de retorno: valor lógico indicando si v está ordenado en orden creciente
 */
bool ordenado (const int v[], int tamv)
{
	for (int i = 1; i < tamv; ++i)
		if (v[i] < v[i-1])
			return false;
	return true;
}

int main ()
{
	const int TAM = 5;
	const int v1[TAM] = {1, 3, 5, 7, 9};

	if (ordenado (v1, TAM))
		std::cout << "Primer vector ordenado\n";
	else
		std::cout << "Primer vector no ordenado\n";
	const int v2[TAM] = {1, 5, 3, 7, 9};
	if (ordenado (v2, TAM))
		std::cout << "Segundo vector ordenado\n";
	else
		std::cout << "Segundo vector no ordenado\n";
	return 0;
}
