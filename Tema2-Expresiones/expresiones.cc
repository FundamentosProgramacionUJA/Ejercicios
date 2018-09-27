#include <iostream>
#include <cmath>

/* Programa: Expresiones
 * Entradas: Ninguna
 * Salidas: El resultado de evaluar ciertas expresiones aritméticas
 */

using namespace std;

int main ()
{
    double a = 2, b = 1, c = -1, d = 4, e = 4, f = 2;
    // Expresión a)
    cout << a / b + 1 << endl;
    // Expresión b)
    cout << (a + b) / (c + d) << endl;
    // Expresión c)
    cout << (a + b/c) / (d + e/f) << endl;
    // Expresión d)
    cout << a + b / (c - d) << endl;
    // Expresión e)
    cout << (a + b) *  c / d << endl;

    return 0;
}
