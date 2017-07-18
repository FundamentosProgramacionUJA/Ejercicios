#include <iostream>

using namespace std;

/* Descripción: Calcula la suma de los elementos de un vector.
 * Parámetros de entrada:
 *   - v: el vector
 *   - tamv: número de elementos de v
 * Valor de retorno: la suma de los elementos de v
 */
double suma (const double v[], int tamv)
{
    double sum = 0;
    for (int i = 0; i < tamv; i++)
        sum += v[i];
    return sum;
}

int main ()
{
    double vec[5] = {2, 2, 3.5, 1, 1};
    cout << "La suma de los elementos del vector es " << suma(vec, 5) << endl;
    return 0;
}
