/* ---------------------------------------------------------------------------
 * Programa: MáximoVector
 * Entradas: Un vector de números enteros de, al menos, un elemento
 * Salidas:  El máximo de sus elementos
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main ()
{
    const int TAMMAX = 1000;
    int v[TAMMAX];
    int nel; // número de elementos del vector (tamaño lógico)
    // lectura del tamaño lógico
    do {
        cout << "Introduzca el número de elementos del vector: ";
        cin >> nel;
    } while (nel < 1 || nel > TAMMAX);

    // lectura de los elementos del vector
    for (int i = 0; i < nel; ++i) {
	cout << "Introduzca el elemento " << i+1 << ": ";
	cin >> v[i];
    }
    // cálculo del máximo
    double maximo = v[0];
    for (int i = 1; i < nel; ++i) {
	if (v[i] > maximo)
	    maximo = v[i];
	}
    cout << "El máximo es " << maximo << endl;
    return 0;
}
