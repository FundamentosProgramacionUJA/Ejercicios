#include <iostream>

using namespace std;

/* Programa: coincideNumerosAnteriores
 * Entradas: Cuatro n�meros
 * Salidas: Un mensaje indicando si el �ltimo n�mero coincide con alguno de los 3 primeros
 */

int main ()
{
	double n1, n2, n3, n4;
	cout << "Introduce tres n�meros separados por espacios: ";
	cin >> n1 >> n2 >> n3;
	cout << "Introduce un n�mero m�s: ";
	cin >> n4;
	if (n4 == n1 || n4 == n2 || n4 == n3)
		cout << "El �ltimo n�mero coincide con uno de los 3 primeros\n";
	else
		cout << "El �ltimo n�mero NO coincide con uno de los 3 primeros\n";
	return 0;
}

