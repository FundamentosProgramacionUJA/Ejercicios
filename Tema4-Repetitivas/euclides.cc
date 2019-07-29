#include <iostream>
#include <limits>
using namespace std;

/* Programa: Algoritmo de Euclides
 * Entradas: Dos números naturales
 * Salidas: Su máximo común divisor
 */

int main ()
{
    int num1, num2;
    cout << "Introduzca un entero positivo: ";
    cin >> num1;
    cout << "Introduzca otro entero positivo: ";
    cin >> num2;
    int M, m;
    if (num1 >= num2) {
        M = num1;
        m = num2;
    } else {
        M = num2;
        m = num1;
    }
    while (M % m != 0) {
        int resto = M % m;
        M = m;
        m = resto;
    }
    cout << "El máximo común divisor es " << m << endl;
    return 0;
}

