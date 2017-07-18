#include <iostream>
#include <string>

using namespace std;

/* Descripción: Dadas dos cadenas de caracteres devuelve la más larga.
 * Parámetros de entrada:
 *   - s1: una cadena de caracteres
 *   - s2: una cadena de caracteres
 * Valor de retorno: La cadena con más caracteres. Si las dos tienen el mismo número devuelve s1
                     (la primera cadena)
 */
string masLarga (string s1, string s2)
{
    if (s1.length () >= s2.length())
        return s1;
    return s2;
    // La función también se puede codificar como:
    // return s1.length() >= s2.length() ? s1 : s2;
}

int main () {
	cout << masLarga("abc", "abcd") << endl;
	cout << masLarga("12", "1") << endl;
	cout << masLarga("Hola", "Luis") << endl;
	return 0;
}
