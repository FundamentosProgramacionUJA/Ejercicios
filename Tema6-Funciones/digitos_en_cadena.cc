#include <iostream>
#include <string>

using namespace std;

/* Descripción: Calcula si un carácter es un dígito
 * Parámetros de entrada:
 *   - c: un carácter
 * Valor de retorno: un valor lógico indicando si c es un dígito
 */
bool letraDigito(char c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' ||
	    c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
		return true;
	return false;
}

/* Descripción: Calcula cuántos dígitos tiene una cadena de caracteres
 * Parámetros de entrada:
 *   - s: cadena de caracteres
 * Valor de retorno: Número de dígitos que contiene s
 */
int nDigitosCadena(string s)
{
	int cont = 0;
	for (int i = 0; i < s.length (); ++i)
		if (letraDigito (s[i]))
			cont++;
	return cont;
}

int main () {
	string s;
	cout << "Introduzca una línea de texto: ";
	getline (cin, s);
	cout << "La línea contiene " << nDigitosCadena (s) << " dígitos\n";
	return 0;
}
