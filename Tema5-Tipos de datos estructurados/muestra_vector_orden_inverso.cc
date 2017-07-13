/* ---------------------------------------------------------------------------
 * Programa: muestra_vector_orden_inverso
 * Entradas: Un vector de números (aunque realmente se define en el programa)
 * Salidas:  Los elementos del vector en orden inverso
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main ()
{
    const int TAM = 5;
    double v[TAM] = { 1, 1.5, 2, 0, 4};
    for (int i = TAM-1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
