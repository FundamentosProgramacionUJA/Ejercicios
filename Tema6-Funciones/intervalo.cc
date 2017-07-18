#include <iostream>

using namespace std;

/* Descripción: Calcula si un valor pertenece a un intervalo cerrado
 * Parámetros de entrada:
 *   - a: extremo inferior del intervalo
 *   - b: extremo superior del intervalo
 *   - x: valor que se comprueba si pertenece al intervalo
 * Precondiciones: a <= b
 * Valor de retorno: verdadero si x pertenece al intervalo [a,b], falso en otro caso
 */
bool perteneceIntervalo (int a, int b, int x)
{
	return a <= x && x <= b;
}

int main ()
{
	int valor;
	cout << "Introduzca un valor entero para ver si pertenece al intervalo entero [5,10]: ";
	cin >> valor;
	cout << (perteneceIntervalo (5, 10, valor) ? "Pertenece\n" : "No pertenece\n");
	return 0;
}
