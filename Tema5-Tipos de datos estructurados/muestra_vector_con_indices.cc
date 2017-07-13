/* ---------------------------------------------------------------------------
 * Programa: muestra_vector_con_indices
 * Entradas: Una serie de de n�meros
 * Salidas:  Los elementos del vector con sus �ndices asociados
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
    const int TAM = 1000; // tama�o f�sico
    double v[TAM];        // se reserva un vector de TAM posiciones
    int tam;              // n�mero de posiciones con las que se trabaja (tama�o l�gico)
    do {
        cout << "Introduce el tama�o del vector: ";
        cin >> tam;
    } while (tam < 0 || tam > TAM);
    for (int i = 0; i < tam; i++) {
        cout << "Introduce el elemento en la posici�n " << i << ": ";
        cin >> v[i];
    }
	for (int i = 0; i < tam; i++)
        cout << "Posici�n (" << i << ") = " << v[i] << '\n';
	return 0;
}
