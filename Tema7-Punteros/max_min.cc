#include <iostream>

/* Descripción: Calcula el máximo y mínimo de un vector de reales
 * Parámetros de entrada:
 * - v: dirección de inicio del vector
 * - tamv: número de elementos de v
 * Parámetros de salida:
 * - max: máximo de los elementos de v
 * - min: mínimo de los elementos de v
 * Precondiciones:
 * - tamv >= 1
 */
void maxmin (const double* v, int tamv, double* min, double* max)
{
	*max = *min = v[0];
	for (int i = 1; i < tamv; ++i) {
		if (v[i] > *max)
			*max = v[i];
		if (v[i] < *min)
			*min = v[i];
	}
}

int main ()
{
	const int TAM = 6;
	double vec[TAM] = { 2.4, -2.3, 4.8, 0, -10.5, 0};
	double minimo, maximo;
	maxmin (vec, TAM, &minimo, &maximo);
	std::cout << "Máximo: " << maximo << '\n';
	std::cout << "Minimo: " << minimo << '\n';
	return 0;
}
