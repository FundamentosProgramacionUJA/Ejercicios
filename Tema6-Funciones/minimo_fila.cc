#include <iostream>
#include <limits>

using namespace std;

/* Descripción: Devuelve el mínimo de los elementos de una fila de una matriz nx5
 * Parámetros de entrada:
 *   - m: una matriz nx5
 *   - fila: número de la fila de m (entre 0 y n-1) de la que se quiere calcular el mínimo
 * Precondiciones:
 *   - fila es una fila que existe realmente en la matriz
 *   - la matriz tiene al menos una columna
 * Valor de retorno: el menor elemento de la fila fila de m.
 */
double minimoFila(const double m[][5], int fila)
{
	double min = m[fila][0]; // se asigna el primer elemento de la fila
	for (int c = 1; c < 5; c++)
		if (m[fila][c] < min)
			min = m[fila][c];
	return min;
}


/* A continuación se resuelve el mismo problema utilizando un vector para almacenar la matriz. La
 * ventaja de la nueva función es que trabaja con una matriz de cualquier dimensión, mientras que
 * la función previa sólo trabaja con matrices de 5 columnas
 */

/* Descripción: Devuelve el mínimo de los elementos de una fila de una matriz bidimensional
 * Parámetros de entrada:
 *   - m: un vector representando a la matriz
 *   - ncol: número de columnas de m
 *   - fila: número de la fila de m de la que se quiere calcular el mínimo
 * Precondiciones:
 *   - fila es una fila que existe realmente en la matriz
 *   - la matriz tiene al menos una columna
 * Valor de retorno: el menor elemento de la fila fila de m.
 */
double minimoFila(const double m[], int ncol, int fila)
{
	double min = m[fila*ncol+0]; // se asigna el primer elemento de la fila
	for (int c = 1; c < ncol; c++)
		if (m[fila*ncol + c] < min)
			min = m[fila*ncol + c];
	return min;
}

int main ()
{
    double m1[3][5] = { 1,  2.3,    3,    4,    5,
                       10,    2,  1.1,  3.4,  7.7,
                        6,  2.9,  112,  4.4,    8 };
    double m2[3*5] = { 1,  2.3,    3,    4,    5,
                      10,    2,  1.1,  3.4,  7.7,
                       6,  2.9,  112,  4.4,    8 };
    cout << "Se invoca a la primera función:\n";
    for (int f = 0; f < 3; f++)
        cout << "El mínimo de la fila " << f << " es " << minimoFila (m1, f) << endl;

    cout << "Se invoca a la segunda función:\n";
    for (int f = 0; f < 3; f++)
        cout << "El mínimo de la fila " << f << " es " << minimoFila (m2, 5, f) << endl;
    return 0;
}
