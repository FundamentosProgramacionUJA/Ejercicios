#include <iostream>
#include <string>

using namespace std;

/* Descripci�n: Muestra en la salida est�ndar el contenido de un vector de enteros
 * Par�metros de entrada:
 * - v: el vector
 * - tam: tama�o de v
 */
void muestra (const int* v, int tamv)
{
	for (int i = 0; i < tamv; i++)
		cout << v[i] << '\n';
}

int main ()
{
	int tamv;
	do {
		cout << "�Con cu�ntos enteros quiere trabajar? ";
		cin >> tamv;
	} while (tamv < 1);
	int* v = new int[tamv];
	if (v == 0) {
	    cout << "No hay memoria din�mica para almacenar el vector. Se termina el programa\n";
	    return 0;
	}
	for (int i = 0; i < tamv; ++i) {
		cout << "Inserte el entero " << i+1 << ": ";
		cin >> v[i];
	}
	cout << "Los valores introducidos son:\n";
	muestra (v, tamv);
	delete[] v;
	return 0;
}
