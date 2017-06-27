#include <iostream>
using namespace std;

/* Programa: Potencia
 * Entradas: Una base y un exponente enteros mayores o iguales a cero
 * Salidas: El resultado de elevar la base al exponente
 */

int main ()
{
	int base, exponente;
	cout << "Introduzca la base y el exponente separados por espacios: ";
	cin >> base >> exponente;
	int resultado = 1;
	for (int i = 1; i <= exponente; i++)
		resultado = resultado * base; // también vale resultado *= base;
	cout << base << '^' << exponente << " = " << resultado << endl;
	return 0;
}

