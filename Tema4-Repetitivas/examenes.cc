#include <iostream>
using namespace std;

/* Programa: EstadísticaExamen
 * Entradas: Las notas de 5 alumnos en 3 exámenes
 * Salidas: La cantidad de alumnos que aprueban los 3 exámenes, que aprueban al menos uno y
 * que aprueban sólo el último
 */

int main ()
{
	float nota1, nota2, nota3;
	int aprueba3 = 0;     // cantidad de alumnos que aprueban los tres exámenes
	int aprueba1 = 0;     // cantidad de alumnos que aprueban al menos un examen
	int apruebaSolo3 = 0; // cantidad de alumnos que aprueban sólo el último examen
	for (int i = 1; i <= 5; ++i) {
		cout << "Introduca las 3 notas del alumno " << i << " separadas por espacios: ";
		cin >> nota1 >> nota2 >> nota3;
		if (nota1 >= 5.0f && nota2 >= 5.0f && nota3 >= 5.0f)
			aprueba3++;
		if (nota1 >= 5.0f || nota2 >= 5.0f || nota3 >= 5.0f)
			aprueba1++;
		if (nota1 < 5.0f && nota2 < 5.0f && nota3 >= 5.0f)
			apruebaSolo3++;
	}
	cout << "Número de alumnos que aprobaron los tres exámenes: " << aprueba3 << endl;
	cout << "Número de alumnos que aprobaron al menos un examen: " << aprueba1 << endl;
	cout << "Número de alumnos que aprobaron sólo el último examen: " << apruebaSolo3 << endl;
	return 0;
}

