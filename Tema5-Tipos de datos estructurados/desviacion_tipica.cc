/* ---------------------------------------------------------------------------
 * Programa: desviacion_tipica
 * Entradas: n números reales, con 1 <= n <= 1000
 * Salidas:  La desviación típica de los n números según la fórmula especificada
 *           en el enunciado del ejercicio
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	const int N = 1000;
	double v[N];
	int n;
	do {
		cout << "Introduzca el número de elementos (máximo " << N << "): ";
		cin >> n;
	} while (n < 1 || n > N);
	double suma = 0.0;
	for (int i = 0; i < n; i++) {
		cout << "Introduzca un dato: ";
		cin >> v[i];
		suma += v[i];
	}
	double media = suma / n;
	suma = 0.0;
	for (int i = 0; i < n; i++)
		suma += pow (v[i]-media, 2);

	cout << "La nota desviación típica es " << sqrt (suma / (n-1)) << endl;
	return 0;
}
