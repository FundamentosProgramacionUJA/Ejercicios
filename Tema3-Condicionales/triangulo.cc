#include <iostream>

using namespace std;

/* Programa: TipoTriángulo
 * Entradas: La longitud de los tres lados de un triángulo
 * Salidas: Indica el tipo de triángulo según las características de sus ángulos
 */


int main ()
{
	float a, b, c;
	cout << "Introduzca los lados de un triángulo separados por espacios (el primero debe ser el más largo: ";
	cin >> a >> b >> c;
	if (a >= b + c) {
		cout << "No es un triángulo\n";
	} else if (a*a == b*b + c*c) {
		cout << "Rectángulo\n";
	} else if (a*a < b*b + c*c) {
		cout << "Acutángulo\n";
	} else {
		cout << "Obtusángulo\n";
	}
	// Otra forma sería la siguiente
	if (a >= b + c) {
		cout << "No es un triángulo\n";
	} else {
		if (a*a == b*b + c*c) {
			cout << "Rectángulo\n";
		} else {
			if (a*a < b*b + c*c) {
				cout << "Acutángulo\n";
			} else {
				cout << "Obtusángulo\n";
			}
		}
	}
	return 0;
}

