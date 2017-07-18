#include <iostream>

using namespace std;

/* Descripción: Calcula el valor absoluto de un número
 * Parámetros de entrada:
 *   - n: un número
 * Valor de retorno: El valor absoluto de n
 */
double absoluto (double n)
{
    if (n >= 0)
        return n;
    return -n;
    // La función también se puede codificar como: return n >= 0 ? n : -n;
}

int main () {
	double num;
	cout << "Introduzca un número: ";
	cin >> num;
	cout << "Valor absoluto: " << absoluto(num) << endl;
	return 0;
}
