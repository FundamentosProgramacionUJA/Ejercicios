/* ---------------------------------------------------------------------------
 * Programa: congresistas
 * Entradas: Una matriz con los asistentes los distintos días de un congreso a
 *           las distintas salas
 * Salidas:  Cantidad de asistentes cada día. Cantidad total de asistentes a cada sala.
 *           Media de asistentes a cada sala por día. Media de asistentes diarios al
 *           congreso
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
	const int NDIAS = 5;
	const int NSALAS = 5;
	int asis[NDIAS][NSALAS] = { 30, 32, 45, 40, 23, // las filas representan días y las columnas salas
	                            40, 54, 66, 57, 40,
	                            23, 30, 33, 35, 25,
	                            55, 60, 75, 50, 44,
	                            18, 20, 20, 25, 23 };
	int totalDia[NDIAS];   // totales de asistencia cada día
	int totalSala[NSALAS]; // totales de asistencia a cada sala
	                   
	for (int i = 0; i < NDIAS; i++)
		totalDia[i] = 0;
	for (int i = 0; i < NSALAS; i++)
		totalSala[i] = 0;
	for (int dia = 0; dia < NDIAS; dia++) {
		for (int sala = 0; sala < NSALAS; sala++) {
			totalDia[dia] += asis[dia][sala];
			totalSala[sala] += asis[dia][sala];
		}
	}
	int total = 0;
	for (int i = 0; i < NDIAS; i++) {
		cout << "Total de asistentes el día " << i+1 << ": " << totalDia[i] << endl;
		total += totalDia[i];
	}
	cout << "Media de asistencia diaria: " << total / (double) NDIAS << endl;
	for (int i = 0; i < NSALAS; i++) {
		cout << "Total de asistentes a la sala " << i+1 << ": " << totalSala[i];
		cout << ". Media diaria: " << totalSala[i] / double (NDIAS) << endl;
	}
	return 0;
}
