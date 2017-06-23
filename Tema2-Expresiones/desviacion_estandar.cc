#include <iostream>
#include <cmath>

using namespace std;

/* Programa: DesviaciónEstándar
 * Entradas: 5 números reales
 * Salidas: La desviación estándar de los 5 números
 */

int main () {
	double n1, n2, n3, n4, n5;
	cout << "Introduzca 5 números separados por espacios: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	double media = (n1 + n2 + n3 + n4 + n5) / 5.0;
	double sumatoria = (n1-media)*(n1-media) + (n2-media)*(n2-media) + (n3-media)*(n3-media) +
	                   (n4-media)*(n4-media) + (n5-media)*(n5-media);
	double desviacion = sqrt (sumatoria/4.0);
	cout << "La desviación estándar de los 5 valores es: " << desviacion << endl;
	return 0;
}
