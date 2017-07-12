#include <iostream>
using namespace std;

/* Programa: hastaEnRango
 * Entradas: Una serie de números hasta que se introduzca un valor en el rango [20,30]
 *           o el valor 0.
 * Salidas: El último valor introducido
 */

int main ( )
{
    int n;
    do {
        cout << "Introduce un valor en el rango [20,30] o el 0: ";
        cin >> n;
    } while (n > 30 || (n < 20 && n != 0));
    // Una condición alternativa es (n != 0 && !(n>=20 && n <= 30))
    cout << "El valor introducido correcto es " << n << endl;
    return 0;
}
