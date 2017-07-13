/* ---------------------------------------------------------------------------
 * Programa: numero_en_vector
 * Entradas: Un valor entero
 * Salidas:  Un mensaje indicando si el entero coincide con los elementos de
 *           un vector prefijado
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    const int NDATOS = 6;
    int datos[NDATOS]= {1, 3, 5, 7, 11, 20};
    int n;
    cout << "Introduzca un valor entero: ";
    cin >> n;
    bool esta = false;
    for (int i = 0; i < NDATOS; ++i) { // i < NDATOS && !esta más eficiente
        if (datos[i] == n)
            esta = true;
    }
    if (esta)
        cout << n << " se encuentra en el vector\n";
    else
        cout << n << " no se encuentra en el vector\n";
    return 0;
}
