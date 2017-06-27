#include <iostream>
using namespace std;

/* Programa: EstadísticaAccidentes
 * Entradas: Edad, sexo y código de registro de accidentados. Se termina con una edad de 0
 * Salidas: Porcentaje de conductores menores de 25 años.
 *          Porcentaje de mujeres
 *          De entre los conductores masculinos, porcentaje de conductores con edad en el rango [18,25]
 */

int main ()
{
	int edad;
	char sexo;
	int codigo;
	int total = 0;         // total de accidentes leídos
	int feminas = 0;       // total de mujeres implicadas en los accidentes
	int menor25 = 0;       // total de menores de 25 años implicados en los accidentes
	int varones18_25 = 0;  // total de varones de entre 18 y 25 años implicados en accidentes
	cout << "Introduce la edad (0 para terminar): ";
	cin >> edad;
	while (edad > 0) {
		cout << "Introduce el sexo (M o F): ";
		cin >> sexo;
		cout << "Introduce el código: ";
		cin >> codigo;
		total++;
		if (sexo == 'F')
			feminas++;
		if (edad < 25)
			menor25++;
		if (sexo == 'M' && edad >= 18 && edad <= 25)
			varones18_25++;
        cout << "Introduce la edad (0 para terminar): ";
		cin >> edad;
	}
	if (total == 0) {
		cout << "No se ha introducido ningún valor\n";
		return 0;
	}
	cout << "Porcentaje de mujeres: " << feminas * 100.0 / total << "%\n";
	cout << "Porcentaje de menores de 25: " << menor25 * 100.0 / total << "%\n";
	cout << "De los varones, porcentaje entre 18 y 25: ";
	if (total-feminas > 0)
		cout << varones18_25*100.0/(total-feminas) << "%\n";
	else
		cout << "no hay varones involucrados en accidentes\n";
	return 0;
}

