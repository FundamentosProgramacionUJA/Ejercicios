/* -----------------------------------------------------------------------------
 * Programa: calificacion_promedio
 * Entradas: El nombre y la nota de una serie de alumnos
 * Salidas:  La nota media de los alumnos y los nombres de los alumnos cuya nota
 *           supera la nota media
 * -----------------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

struct alumno {
	double nota;
	string nombre;
};

int main ()
{
	const int NALUMNOS = 10;
	// VERSIÓN 1: utiliza un vector de notas y otro vector de nombres
	double notas[NALUMNOS];
	string nombres[NALUMNOS];
	double suma_notas = 0.0;
	for (int i = 0; i < NALUMNOS; i++) {
		cout << "Nombre del alumno: ";
		getline (cin >> ws, nombres[i]);
		cout << "Nota del alumno: ";
		cin >> notas[i];
		suma_notas += notas[i];
	}
	double nota_media = suma_notas / NALUMNOS;
	cout << "La nota media es " << nota_media << endl;
	cout << "Alumnos que superaron la nota media:\n";
	for (int i = 0; i < NALUMNOS; i++)
		if (notas[i] > nota_media)
			cout << nombres[i] << endl;

	// VERSIÓN 2: utiliza un vector de estructuras
	alumno alumnos[NALUMNOS];
	suma_notas = 0.0;

	for (int i = 0; i < NALUMNOS; i++) {
		cout << "Nombre del alumno: ";
		getline (cin >> ws, alumnos[i].nombre);
		cout << "Nota del alumno: ";
		cin >> alumnos[i].nota;
		suma_notas += alumnos[i].nota;
	}
	nota_media = suma_notas / NALUMNOS;
	cout << "La nota media es " << nota_media << endl;
	cout << "Alumnos que superaron la nota media:\n";
	for (int i = 0; i < NALUMNOS; i++)
		if (alumnos[i].nota > nota_media)
			cout << alumnos[i].nombre << endl;
	return 0;
}
