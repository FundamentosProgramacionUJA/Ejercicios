#include <iostream>
#include <limits>
using namespace std;

/* Programa: DescomposicionFactoresPrimos
 * Entradas: Un número entero
 * Salidas: Su descomposición en factores primos
 */

int main ()
{
    int numero;
    cout << "Introduzca un entero: ";
    cin >> numero;
    int factor = 2;
    while (numero > 1) {
        int exponente = 0;
        while (numero % factor == 0) {
            numero = numero / factor;  // También vale numero /= factor;
            exponente++;
        }
        if (exponente > 0)
            cout << factor << " ^ " << exponente << endl;
        factor++;
    }
    return 0;
}

