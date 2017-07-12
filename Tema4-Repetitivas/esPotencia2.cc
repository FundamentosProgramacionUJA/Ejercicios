#include <iostream>
#include <limits>
using namespace std;

/* Programa: EsPotencia2
 * Entradas: Un número entero
 * Salidas: Un mensaje indicando si el número es una potencia de dos
 */

int main ()
{
    int numero;
    cout << "Introduzca un entero: ";
    cin >> numero;
    int x = 1;
    while (x < numero)
        x = x * 2;      // también vale x *= 2;
    if (x == numero)
        cout << numero << " es una potencia de dos\n";
    else
        cout << numero << " no es una potencia de dos\n";
    return 0;
}

