/* ---------------------------------------------------------------------------
 * Programa: menor_diferencia
 * Entradas: Un vector de números reales de, al menos, dos elementos (realmente,
 *           se define en el programa)
 * Salidas:  El mínimo de las diferencias absolutas entre números contiguos en
 *           el vector
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	const int N = 10;
	double v[N] = { 2, 10, 20, 7, 34.2, 5.4, -1.2, 8.8, 90.0, 2.0 };

	if (N < 2) {
		cout << "El vector debe tener al menos dos elementos\n";
		return 1;
	}

	double menor = abs(v[0] - v[1]);
	for (int i = 2; i < N; i++)
		if (abs (v[i-1] - v[i]) < menor)
			menor = abs (v[i-1] - v[i]);
	cout << "La diferencia menor es " << menor << endl;
	return 0;
}
