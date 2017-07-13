/* ---------------------------------------------------------------------------
 * Programa: palindromo
 * Entradas: Una palabra
 * Salidas:  Un mensaje indicando si la palabra es un palíndromo
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>
using namespace std;

int main () {
	string palabra;
	cout << "Introduzca una palabra: ";
	cin >> palabra;
	bool palindromo = true;
	int i = 0;
	int j = palabra.length () - 1;
	while (palindromo && (i < j)) {
		if (palabra[i] != palabra[j]) {
			palindromo = false;
		} else {
			i++;
			j--;
		}
	}
	cout << palabra << (palindromo ? "" : " no") << " es un palindromo\n";
	return 0;
}
