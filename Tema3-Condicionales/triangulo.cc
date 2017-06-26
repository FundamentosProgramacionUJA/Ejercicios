#include <iostream>

using namespace std;

/* Programa: TipoTri�ngulo
 * Entradas: La longitud de los tres lados de un tri�ngulo
 * Salidas: Indica el tipo de tri�ngulo seg�n las caracter�sticas de sus �ngulos
 */


int main ()
{
	float a, b, c;
	cout << "Introduzca los lados de un tri�ngulo separados por espacios (el primero debe ser el m�s largo: ";
	cin >> a >> b >> c;
	if (a >= b + c) {
		cout << "No es un tri�ngulo\n";
	} else if (a*a == b*b + c*c) {
		cout << "Rect�ngulo\n";
	} else if (a*a < b*b + c*c) {
		cout << "Acut�ngulo\n";
	} else {
		cout << "Obtus�ngulo\n";
	}
	// Otra forma ser�a la siguiente
	if (a >= b + c) {
		cout << "No es un tri�ngulo\n";
	} else {
		if (a*a == b*b + c*c) {
			cout << "Rect�ngulo\n";
		} else {
			if (a*a < b*b + c*c) {
				cout << "Acut�ngulo\n";
			} else {
				cout << "Obtus�ngulo\n";
			}
		}
	}
	return 0;
}

