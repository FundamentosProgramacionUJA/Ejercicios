#include <iostream>
#include <cmath>
using namespace std;

/* Programa: Aproximaci�nPI
 * Entradas: N�mero de t�rminos de la sumatoria especificada en el enunciado
 * Salidas: Una aproximaci�n al n�mero PI
 */

int main () {
    double suma = 0;
    int nterm;
    cout << "Introduzca el n�mero de t�rminos: ";
    cin >> nterm;
    for (int i = 1; i<= nterm; ++i) {
        suma = suma + 6/double(i*i); // tambi�n vale suma += 6/double(i*i)
    }
    cout << "La aproximaci�n es " << sqrt(suma) << '\n';
    return 0;
}
