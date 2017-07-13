/* ---------------------------------------------------------------------------
 * Programa: muestra_vector_con_indices
 * Entradas: Una serie de números
 * Salidas:  Los elementos del vector con sus índices asociados
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
    const int TAM = 1000; // tamaño físico
    double v[TAM];        // se reserva un vector de TAM posiciones
    int tam;              // número de posiciones con las que se trabaja (tamaño lógico)
    do {
        cout << "Introduce el tamaño del vector: ";
        cin >> tam;
    } while (tam < 0 || tam > TAM);
    for (int i = 0; i < tam; i++) {
        cout << "Introduce el elemento en la posición " << i << ": ";
        cin >> v[i];
    }
    for (int i = 0; i < tam; i++)
        cout << "Posición (" << i << ") = " << v[i] << '\n';
    return 0;
}
