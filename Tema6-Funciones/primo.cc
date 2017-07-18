#include <iostream>

using namespace std;

/* Descripcion: Calcula si un entero positivo es primo.
 * Parámetros de entrada:
 *   - n: un número entero positivo
 * Valor de retorno: un valor de tipo lógico indicando si es primo
 */
bool esPrimo(int n)
{
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int x;
	cout << "Introduzca un entero positivo: ";
	cin >> x;
	if (esPrimo (x))
		cout << x << " es primo\n";
	else
		cout << x << " no es primo\n";
	return 0;
}
