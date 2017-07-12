#include <iostream>
#include <cmath>
using namespace std;

/* Programa: AproximaciónPI
 * Entradas: Número de términos de la sumatoria especificada en el enunciado
 * Salidas: Una aproximación al número PI
 */

int main () {
    double suma = 0;
    int nterm;
    cout << "Introduzca el número de términos: ";
    cin >> nterm;
    for (int i = 1; i <= nterm; ++i) {
        suma = suma + 6/double(i*i); // también vale suma += 6/double(i*i)
    }
    cout << "La aproximación es " << sqrt(suma) << '\n';
    return 0;
}
