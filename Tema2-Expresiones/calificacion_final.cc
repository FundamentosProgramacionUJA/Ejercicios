#include <iostream>

using namespace std;

/* Programa: CalificaciónFinal
 * Entradas: La calificación de la nota de teoría, prácticas y participación de un alumno
 * Salidas: La nota final del alumno teniendo en cuenta que la teoría cuenta un 60% de la nota, las prácticas un 30%  y la participación un 10%
 */

int main ()
{
	double practicas, teoria, participacion;
	cout << "Introduzca la nota de prácticas, teoría y participación en ese orden: ";
	cin>> practicas >> teoria >> participacion;
	cout << "La nota final es: " << practicas * 0.3 + teoria * 0.6 + participacion * 0.1 << endl;
	return 0;
}
