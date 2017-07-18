#include <iostream>

using namespace std;

/* Descripción: Calcula si un año es bisiesto
 * Parámetros de entrada:
 *   - anio: El año
 * Valor de retorno: Un valor lógico indicando si el año es bisiesto
 */
bool bisiesto (int anio)
{
	return (anio % 4 == 0) && (!(anio % 100 == 0) || (anio % 400 == 0));
}

int main () {
	int anio;
	cout << "Introduzca un año: ";
	cin >> anio;
	cout << anio << " es bisiesto: " << boolalpha << bisiesto (anio) << endl;
	return 0;
}
