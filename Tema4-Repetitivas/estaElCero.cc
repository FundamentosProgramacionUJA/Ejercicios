#include <iostream>
#include <limits>
using namespace std;

/* Programa: EstaElCero
 * Entradas: 10 números
 * Salidas: Un mensaje indicando si el 0 estaba entre los 10 números
 */

int main ()
{
    int numero;
    int esta = false;
    for (int i = 1; i <= 10; ++i) {
        cout << "Introduzca el número " << i << ": ";
        cin >> numero;
        if (numero == 0)
            esta = true;
    }
    if (esta)
        cout << "El cero estaba entre los números introducidos\n";
    else
        cout << "El cero no estaba entre los números introducidos\n";
    return 0;
}

