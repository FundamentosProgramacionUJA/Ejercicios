#include <iostream>
#include <cmath>

using namespace std;

/* Programa: CalculaFactura
 * Entradas: Una factura de luz de este año y un número de años
 * Salidas: El precio de la factura dentro de ese número de años suponiendo que la luz sube un 3% cada año
 */

int main ()
{
	double factura;
	int anios;
	cout << "Introduzca el precio de la factura: ";
	cin >> factura;
	cout << "Introduzca el numero de años: ";
	cin >> anios;
	cout << "Precio dentro de " << anios << " años: " << factura*pow(1.03, anios) << endl;
	return 0;
}
