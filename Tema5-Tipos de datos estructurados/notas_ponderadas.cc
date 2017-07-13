/* ---------------------------------------------------------------------------
 * Programa: NotaPonderada
 * Entradas: Una matriz de notas de un examen y un vector de ponderación
 * Salidas:  Las notas ponderadas de los alumnos
 * --------------------------------------------------------------------------- */

#include <iostream>

int main ()
{
	float notas[5][3] = { 10,    5, 4.3,
	                      6.7,   9,   2,
	                      4.1, 2.5, 1.2,
	                      6.0, 6.0, 6.0,
	                      4.0, 6.0, 5.2 };
	float pesos[3] = { 0.2, 0.3, 0.5 };
	float alumno[5];

	for (int f = 0; f < 5; f++) {
		alumno[f] = 0.0f;
		for (int c = 0; c < 3; c++)
			alumno[f] += pesos[c]*notas[f][c];
	}
	for (int f = 0; f < 5; f++)
		std::cout << "Nota final del alumno " << f << ": " << alumno[f] << '\n';
	return 0;
}
