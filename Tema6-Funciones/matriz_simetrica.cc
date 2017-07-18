#include <iostream>

using namespace std;

/* Descripción: Calcula si una matriz es simétrica.
 * Parámetros de entrada:
 *   - m: una matriz nx3 de elementos
 *   - nfilas: número de filas de m
 *   - ncol: número de columnas de m
 * Valor de retorno: un valor lógico indicando si m es simétrica.
 */
bool esSimetrica(const double m[][3], int nfilas, int ncol)
{
    if (nfilas != ncol)
        return false;
    for (int f = 1; f < nfilas; f++)
	for (int c = 0; c < f; c++)
	    if (m[f][c] != m[c][f])
	        return false;
    return true;
}

/* Descripción: Calcula si una matriz cuadrada, almacenada en un vector, es simétrica.
 * Parámetros de entrada:
 *   - m: el vector donde se almacena la matriz (la matriz se almacena por filas en el vector)
 *   - nfilas: número de filas de la matriz
 *   - ncol: número de columnas de la matriz
 * Valor de retorno: un valor lógico indicando si m es simétrica.
 */
/* Nota: la ventaja de esta función sobre la anterior es que trabaja con matrices de dimensión
 * arbitraria. La función anterior sólo podía trabajar con matrices de 3 columnas */
bool esSimetrica(const double m[], int nfilas, int ncol)
{
    if (nfilas != ncol)
        return false;
    for (int f = 1; f < nfilas; f++)
	for (int c = 0; c < f; c++)
  	    if (m[f*ncol + c] != m[c*ncol + f])
	        return false;
    return true;
}

int main ()
{
    const int N = 3;
    double m1[N][N] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };
    double m2[N*N] = { 1, 2, 3,
                       2, 5, 8,
                       3, 8, 9 };

   if (esSimetrica (m1, N, N))
       cout << "m1 es simétrica\n";
   else
       cout << "m1 no es simétrica\n";
    cout << "m2" << (esSimetrica (m2, N, N) ? " " : " no ") << "es simétrica\n";
    return 0;
}
