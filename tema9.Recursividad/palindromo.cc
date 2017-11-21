#include <iostream>
#include <string>
using namespace std;


/* Descripción: Calcula si una subcadena es un palíndromo. La subcadena no
 *              contiene mayúsculas, ni signos de puntuación, ni espacios
 *              en blanco ni tildes.
 * Parámetros de entrada:
 * - cadena: la cadena de caracteres
 * - ini: la posición inicial de la subcadena
 * - fin: la posición final de la subcadena
 * Precondiciones: la subcadena no contiene mayúsculas, ni signos de
 *                 puntuación, ni espacios en blanco ni tildes.
 * Valor de retorno: un valor lógico indicando si la subcadena que ocupa las
 *                   posiciones [ini, fin] es un palíndromo.
 */
bool palindromo (string cadena, int ini, int fin)
{
	if (ini >= fin)
		return true;
	return cadena[ini] == cadena[fin] && palindromo (cadena, ini + 1, fin - 1);
}

/* Descripción: Calcula si una cadena es un palíndromo. La cadena no
 *              contiene mayúsculas, ni signos de puntuación, ni
 *              espacios en blanco ni tildes.
 * Parámetros de entrada:
 * - cadena: la cadena de caracteres
 * Precondiciones: cadena no contiene mayúsculas, ni signos de puntuación,
 *                 ni espacios en blanco ni tildes.
 * Valor de retorno: un valor lógico indicando si cadena es un palíndromo.
 */
bool palindromo (string cadena)
{
	return palindromo (cadena, 0, cadena.length () - 1);
}

int main () {
	string palabra;
	cout << "Introduzca una palabra: ";
	cin >> palabra;
	if (palindromo (palabra))
		cout << palabra << " es un palindromo\n";
	else
		cout << palabra << " no es un palindromo\n";
	return 0;
}
