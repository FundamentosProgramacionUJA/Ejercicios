#include <iostream>
#include <cmath>
using namespace std;

/* Programa: SumatoriosProductorios
 * Entradas: Un valor entero positivo n
 * Salidas: Indica el valor de varios sumatorios y productorios en función del valor n
 */

int main ()
{
	int n;
	cout << "Introduzca el valor n: ";
	cin >> n;

	int sumatorio = 0;
	for (int i = 1; i <= n; i++)
		sumatorio += i;
	cout << "Primer sumatorio: " << sumatorio << endl;
	cout << "Primer sumatorio: " << (1 + n)*(n / 2.0) << endl; // utilizando la fórmula de una progresión aritmética
	
	sumatorio = 0;
	for (int i = 1; i <= n; i++)
		sumatorio += 2*i - 1;
	cout << "Segundo sumatorio: " << sumatorio << endl;
	
	int producto = 1;            // calcula el factorial de n
	for (int i = 1; i <= n; i++) // se puede empezar en i = 2
		producto *= i;
	cout << "Productorio: " << producto << endl;
	
	sumatorio = 0;
	for (int i = 1; i <= n; i++) {
		producto = 1;
		for (int factor = 1; factor <= i; factor++)
			producto *= factor;
		sumatorio += producto;
	}
	cout << "Tercer sumatorio: " << sumatorio << endl;
	
	// Tercer sumatorio calculado más eficientemente
	sumatorio = 0;
	producto = 1;
	for (int i = 1; i <= n; i++) {
		producto *= i;
		sumatorio += producto;
	}
	cout << "Tercer sumatorio calculado de una segunda forma: " << sumatorio << endl;
	
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += pow (2.0, i);
	cout << "Cuarto sumatorio: " << sum << endl;
	return 0;
}

