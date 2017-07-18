#include <iostream>
#include <string>

using namespace std;

/* Descripción: Calcula si un carácter es un dígito
 * Parámetros de entrada:
 *  - c: un carácter
 * Valor de retorno: un valor lógico indicando si c es un dígito
 */
bool letraDigito (char c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' ||
	    c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
		return true;
	return false;
}

/* Descripción: Calcula si un carácter es un dígito
 * Parámetros de entrada:
 *   - c: un carácter
 * Valor de retorno: un valor lógico indicando si c es un dígito
 */
bool letraDigito2 (char c)
{
	string digitos = "0123456789";
	for (int i = 0; i < digitos.length (); i++)
		if (c == digitos[i])
			return true;
	return false;
}

/* Descripción: Calcula si un carácter es un dígito
 * Parámetros de entrada:
 *   - c: un carácter
 * Valor de retorno: un valor lógico indicando si c es un dígito
 */
bool letraDigito3 (char c)
{
	switch (c) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			return true;
	}
	return false;
}

int main () {
	char c;
	cout << "Introduzca un carácter: ";
	cin >> c;
	if (letraDigito (c))
		cout << c << " es un dígito\n";
	else
		cout << c << " no es un dígito\n";
	cout << c << (letraDigito2 (c) ? "" : " no") << " es un dígito\n";
	cout << c << " dígito: " << (letraDigito3 (c) ? "sí" : "no") << '\n';
	return 0;
}
