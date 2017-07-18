#include <iostream>

using namespace std;

/* Descripción: Cambia el signo de los elementos de un vector
 * Parámetros de entrada:
 *   - tamv: número de elementos del vector
 * Parámetros de entrada/salida:
 *   - v: el vector de elementos
 */
void cambiaSigno(double v[], int tamv)
{
    for (int i = 0; i < tamv; i++)
        v[i] = -v[i];
}

int main()
{
    const int TAM = 5;
    double vec[TAM] = {2, -3, -4, 1, 1};
    cout << "Elementos del vector original:\n";
    for (int i = 0; i < TAM; i++)
        cout << vec[i] << ' ';
    cout << '\n';
    cambiaSigno(vec, TAM);
    cout << "Elementos del vector tras cambiarles el signo:\n";
    for (int i = 0; i < TAM; i++)
        cout << vec[i] << ' ';
    cout << '\n';
    return 0;
}
