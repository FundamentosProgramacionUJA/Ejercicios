#include <iostream>

using namespace std;

/* Programa: M�ximoDosN�meros
 * Entradas: Dos n�meros reales
 * Salidas: El m�ximo de los dos n�meros
 */

int main ()
{
	double a, b;
	cout << "Introduzca dos n�meros separados por espacios: ";
	cin >> a >> b;
	if (a > b)
		cout << "El mayor es " << a << endl;
	else
		cout << "El mayor es " << b << endl;
	return 0;
}

