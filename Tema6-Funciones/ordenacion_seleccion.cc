#include <iostream>

using namespace std;

/* Descripción: Intercambia el valor de sus dos parámetros.
 * Parámetros de entrada y salida:
 *   - x: primer parámetro a intercambiar
 *   - y: segundo parámetro a intercambiar
 */
void intercambia (int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

/* Descripción: Calcula la posición del menor elemento del vector entre las posiciones [i,f]
 * Parametros de entrada:
 *  - v: el vector
 *  - i: posición inicial
 *  - f: posición final
 * Precondiciones: i <= f, i y f son posiciones válidas de v
 * Valor de retorno: la posición del menor elemento del vector entre las posiciones [i,f]
 */
int minimo(const int v[], int i, int f)
{
	int posmin = i;
	for (int x = i+1; x <= f; ++x)
		if (v[x] < v[posmin])
			posmin = x;
	return posmin;
}

/* Descripción: Ordena crecientemente mediante el algoritmo de selección el vector
 * Parametros de entrada:
 *  - tamv: el número de elementos del vector
 * Parametros de entrada y salida:
 *  - v: el vector a ordenar
 */
void seleccion(int v[], int tamv) {
	for (int i = 0; i < tamv - 1; ++i) {
		int posmin = minimo (v, i, tamv - 1);
		if (posmin != i)
			intercambia (v[i], v[posmin]);
   	}
}

/* Descripción: Muestra los elementos de un vector en una línea de la salida estándar
 * Parametros de entrada:
 *  - v: el vector
 *  - tamv: el número de elementos del vector
 */
void muestra(const int v[], int tamv) {
   for (int i = 0; i < tamv; ++i)
	   cout << v[i] << ' ';
	cout << '\n';
}

int main ()
{
	const int TAM = 10;
	int vec[TAM] = { 3, 4, 2, 1, 8, 8, -3, 4, 10, 5 };
	cout << "Vector sin ordenar: ";
	muestra (vec, TAM);
	seleccion (vec, TAM);
	cout << "Vector ordenado: ";
	muestra (vec, TAM);
	return 0;
}
