#include <iostream>

using namespace std;

/* Programa: MáximoDosNúmeros
 * Entradas: Dos números reales
 * Salidas: El máximo de los dos números
 */

int main ()
{
	double a, b;
	cout << "Introduzca dos números separados por espacios: ";
	cin >> a >> b;
	if (a > b)
		cout << "El mayor es " << a << endl;
	else
		cout << "El mayor es " << b << endl;
	return 0;
}

