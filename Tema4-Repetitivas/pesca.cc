#include <iostream>
using namespace std;

/* Programa: Pesca
 * Entradas: El máximo de kilos a pescar y los pesos de las distintas presas.
 *           Se termina con un peso de cero
 * Salidas: La suma acumulada de las presas y un mensaje si se excedió el máximo de kilos a pescar
 */

int main ()
{
	float maximo;            // máxima cantidad de kilos a pescar en un día
	float total_pescado = 0; // cantidad total de kilos pescados
	float presa;             // peso de la última presa introducida
	cout << "Introduzca la cantidad de kilos máxima en un día: ";
	cin >> maximo;
	cout << "Introduzca el peso en kilos de la siguiente presa (0 para terminar): ";
	cin >> presa;
	while (presa != 0 && (total_pescado + presa <= maximo)) {
		total_pescado += presa;
		cout << "\n\bTotal acumulado: " << total_pescado << '\n';
		cout << "Introduzca el peso en kilos de la siguiente presa (0 para terminar): ";
		cin >> presa;
	}
	if (presa != 0)
		cout << "Se excedió el máximo de kilos (" << total_pescado + presa << " kg.)\n";
	return 0;
}

