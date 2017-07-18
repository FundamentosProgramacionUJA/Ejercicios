#include <iostream>

using namespace std;

/* Descripción: Selecciona los elementos impares de un vector de enteros.
 * Parámetros de entrada:
 *   - v: el vector de enteros
 *   - tamv: número de elementos de v
 * Parámetros de salida:
 *   - impares: el vector con los elementos impares de v
 * Valor de retorno: el número de elementos impares de v (es decir, el tamaño 
 *                   lógico del vector impares)
 */
int impares(const int v[], int tamv, int impares[])
{
    int tamImpares = 0;
    for (int i = 0; i < tamv; i++) {
        if (v[i] % 2 == 1) {
            impares[tamImpares] = v[i];
            tamImpares++;
        }
    }
    return tamImpares;
}

int main ()
{
    const int TAM = 5;
    int vec[TAM] = {2, 2, 3, 6, 1};
    cout << "Elementos del vector:\n";
    for (int i = 0; i < TAM; i++)
        cout << vec[i] << ' ';
    cout << '\n';

    int imp[TAM];
    int timp = impares(vec, TAM, imp);
    cout << "Elementos impares:\n";
    for (int i = 0; i < timp; i++)
        cout << imp[i] << ' ';
    cout << '\n';
    return 0;
}
