#include <iostream>
#include <string>

using namespace std;

/* Descripción: Calcula si una cadena de caracteres es lexicográficamente menor a otra
 * Parámetros de entrada:
 *   - s1: Una cadena de caracteres
 *   - s2: Una cadena de caracteres
 * Valor de retorno: Un valor lógico indicando si s1 es menor lexicográficamente que s2
 */
bool menor(string s1, string s2)
{
	int i = 0;
	while (i < s1.length() && i < s2.length()) {
		if (s1[i] != s2[i])
			return s1[i] < s2[i];
		i++;
	}
	return s1.length() < s2.length();
}

int main()
{
	string s1, s2;
	cout << "Introduzca una cadena de caracteres: ";
	getline(cin, s1);
	cout << "Introduzca una segunda cadena de caracteres: ";
	getline(cin, s2);
	cout << s1 << (menor(s1, s2) ? " < " : " >= ") << s2 << endl;
	return 0;
}
