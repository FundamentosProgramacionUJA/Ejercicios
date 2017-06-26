#include <iostream>

using namespace std;

/* Programa: M�ximoTresN�meros
 * Entradas: Tres n�meros reales
 * Salidas: El m�ximo de los tres n�meros
 */

int main ()
{
	double a, b, c;
	cout << "Introduzca tres n�meros separados por espacios: ";
	cin >> a >> b >> c;
	// Forma 1
	if (a > b) {
		if (a > c) {
			cout << "El mayor es " << a << endl;
		} else {
			cout << "El mayor es " << c << endl;
		}
	} else {
		if (b > c) {
			cout << "El mayor es " << b << endl;
		} else {
			cout << "El mayor es " << c << endl;
		}
	}
	// Forma 2
	if (a >= b && a >= c) {
        cout << "El mayor calculado de la segunda forma es " << a << endl;
    } else if (b > c) {
 			cout << "El mayor calculado de la segunda forma es " << b << endl;
    } else {
		cout << "El mayor calculado de la segunda forma es " << c << endl;
    }
	// Forma 3
	double max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	cout << "El mayor calculado de la tercera forma: " << max << endl;
	return 0;
}

