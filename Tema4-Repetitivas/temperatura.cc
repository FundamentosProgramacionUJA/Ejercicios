#include <iostream>
#include <limits>
using namespace std;

/* Programa: Estad�sticaTemperaturas
 * Entradas: Una serie de  6 tomas de temperatura realizadas en un d�a
 * Salidas: El m�ximo, m�nimo y media de las tomas
 */

int main ()
{
	const int NTOMAS = 6;                         // n�mero de tomas.
	double max = -numeric_limits<double>::max (); // temp. m�xima. Se inicia al menor double posible
	double min = numeric_limits<double>::max ();  // temp. m�nima. Se inicia al mayor double posible
	double media = 0;
	for (int i = 1; i<= NTOMAS; i++) {
		double temperatura;
		cout << "Introduzca la temperatura " << i << ": ";
		cin >> temperatura;
		if (temperatura > max)
			max = temperatura;
		if (temperatura < min)
			min = temperatura;
		media += temperatura;
	}
	cout << "Temperatura m�xima: " << max << endl;
	cout << "Temperatura m�nima: " << min << endl;
	cout << "Temperatura media: " << media / NTOMAS << endl;
	return 0;
}

