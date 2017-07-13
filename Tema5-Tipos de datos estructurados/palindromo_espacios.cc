/* ---------------------------------------------------------------------------
 * Programa: palindromo_espacios
 * Entradas: Una línea de texto
 * Salidas:  Si la línea contiene un palíndromo
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>
using namespace std;

int main () {
	string frase;
	cout << "Introduzca una frase: ";
	getline (cin, frase);
	bool palindromo = true;
	int i = 0;
	int j = frase.length () - 1;
	while (palindromo && (i < j)) {
		if (frase[i] == ' ') {
			i++;
		} else if (frase[j] == ' ') {
			j--;
		} else if (frase[i] != frase[j]) {
			palindromo = false;
		} else {
			i++;
			j--;
		}
	}
	cout << "\"" << frase << '"' <<(palindromo ? "" : " no") << " es un palindromo\n";
	return 0;
}
