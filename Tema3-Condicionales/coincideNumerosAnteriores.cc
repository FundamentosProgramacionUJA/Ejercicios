#include <iostream>

using namespace std;

/* Programa: coincideNumerosAnteriores
 * Entradas: Cuatro números
 * Salidas: Un mensaje indicando si el último número coincide con alguno de los 3 primeros
 */

int main ()
{
	double n1, n2, n3, n4;
	cout << "Introduce tres números separados por espacios: ";
	cin >> n1 >> n2 >> n3;
	cout << "Introduce un número más: ";
	cin >> n4;
	if (n4 == n1 || n4 == n2 || n4 == n3)
		cout << "El último número coincide con uno de los 3 primeros\n";
	else
		cout << "El último número NO coincide con uno de los 3 primeros\n";
	return 0;
}

