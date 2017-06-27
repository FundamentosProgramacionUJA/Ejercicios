#include <iostream>
using namespace std;

/* Programa: TablaMultiplicar
 * Entradas: Un entero del 1 al 10
 * Salidas: Su tabla de multiplicar
 */

int main ( )
{
    int n;
    cout << "Introduce un entero del 1 al 10: ";
    cin >> n;
    int i;
    for (i = 1; i <= 10; i++) {
        cout << n << "x" << i << " = " << n*i << endl;
    }
    return 0;
}
