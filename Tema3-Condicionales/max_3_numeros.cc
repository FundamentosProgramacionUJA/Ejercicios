#include <iostream>

using namespace std;

/* Programa: MáximoTresNúmeros
 * Entradas: Tres números reales
 * Salidas: El máximo de los tres números
 */

int main ()
{
	double a, b, c;
	cout << "Introduzca tres números separados por espacios: ";
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

