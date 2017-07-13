/* ---------------------------------------------------------------------------
 * Programa: criba_eratostenes
 * Entradas: Un valor entero positivo n
 * Salidas:  Los valores primos menores o iguales que n
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
	const int N = 100000;
	bool primo[N+1];
	int n;
	
	do {
		cout << "Introduzca el valor N (máximo " << N << "): ";
		cin >> n;
	} while (n < 0 || n > N);

	for (int i = 2; i <= n; i++)
		primo[i] = true;
	for (int i = 2; i*i <= n; i++) {
		if (primo[i]) {
			for (int x = i+i; x <= n; x += i)
				primo[x] = false;
		}
	}
	
	cout << "Números primos del 2 al " << n << ":\n";
	for (int i = 2; i <= n; i++)
		if (primo[i])
			cout << i << '\n';
	return 0;
}
