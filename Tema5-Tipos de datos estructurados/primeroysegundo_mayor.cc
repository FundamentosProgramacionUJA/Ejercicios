/* ---------------------------------------------------------------------------
 * Programa: primeroysegundo_mayor
 * Entradas: Un vector de números enteros de, al menos, dos elementos (realmente se define en el programa)
 * Salidas:  Los dos elementos mayores del vector
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
	const int N = 10;
	double v[N] = { 2, 10, 20, 7, 34.2, 5.4, 7.2, 8.8, 90.0, 2.0 };

	if (N < 2) {
		cout << "El vector debe tener al menos dos elementos\n";
		return 1;
	}
	double mayor, segundoMayor;
	if (v[0] > v[1]) {
		mayor = v[0];
		segundoMayor = v[1];
	} else {
		mayor = v[1];
		segundoMayor = v[0];
	}

	for (int i = 2; i < N; i++) {
		if (v[i] > mayor) {
			segundoMayor = mayor;
			mayor = v[i];
		} else if (v[i] > segundoMayor) {
			segundoMayor = v[i];
		}
	}
	cout << "El mayor es " << mayor << endl;
	cout << "El segundo mayor es " << segundoMayor << endl;
	return 0;
}
