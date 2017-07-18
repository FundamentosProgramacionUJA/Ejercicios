#include <iostream>

using namespace std;

/* Descripción: Calcula la suma de los dígitos de un entero positivo.
 * Parámetros de entrada:
 *   - n: un número entero positivo
 * Precondiciones: n >= 0
 * Valor de retorno: la suma de los dígitos de n
 */
int sumaDigitos(int n)
{
	int r = 0;
	while (n > 9) {
		r += n % 10; // también vale r = r + n%10;
		n = n / 10;  // también vale n /= 10;
	}
	return r + n;
}

int main()
{
	int x;
	do {
		cout << "Introduzca un entero positivo: ";
		cin >> x;
	} while (x < 0);
	cout << "La suma de los dígitos de " << x << " es " << sumaDigitos (x) << endl;
	return 0;
}
