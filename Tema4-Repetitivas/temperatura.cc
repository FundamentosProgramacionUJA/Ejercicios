#include <iostream>
#include <limits>
using namespace std;

/* Programa: EstadísticaTemperaturas
 * Entradas: Una serie de  6 tomas de temperatura realizadas en un día
 * Salidas: El máximo, mínimo y media de las tomas
 */

int main ()
{
	const int NTOMAS = 6;                         // número de tomas.
	double max = -numeric_limits<double>::max (); // temp. máxima. Se inicia al menor double posible
	double min = numeric_limits<double>::max ();  // temp. mínima. Se inicia al mayor double posible
	double media = 0;
	for (int i = 1; i <= NTOMAS; i++) {
		double temperatura;
		cout << "Introduzca la temperatura " << i << ": ";
		cin >> temperatura;
		if (temperatura > max)
			max = temperatura;
		if (temperatura < min)
			min = temperatura;
		media += temperatura;
	}
	cout << "Temperatura máxima: " << max << endl;
	cout << "Temperatura mínima: " << min << endl;
	cout << "Temperatura media: " << media / NTOMAS << endl;
	return 0;
}

