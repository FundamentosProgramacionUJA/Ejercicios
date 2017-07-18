#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/* Descripción: Calcula si dos strings son iguales sin tener en cuenta si las letras están 
*               en mayúsculas o en minúsculas
 * Parámetros de entrada:
 *   - s1: el primer string
 *   - s2: el segundo string
 * Valor de retorno: verdadero si s1 == s2 sin tener en cuenta si las letras de los strings están en
 *                   mayúsculas o en minúsculas. Falso en otro caso
 */
bool iguales(string s1, string s2)
{
	if (s1.length () != s2.length())
		return false;
	for (int i = 0; i < s1.length(); i++)
		if (toupper (s1[i]) != toupper (s2[i]))
			return false;
	return true;
}

int main()
{
	string s1, s2;
	cout << "Introduzca una cadena: ";
	getline(cin , s1);
	cout << "Introduzca una segunda cadena: ";
	getline(cin , s2);
	cout << (iguales(s1, s2) ? "Iguales\n" : "Diferentes\n");
	return 0;
}
