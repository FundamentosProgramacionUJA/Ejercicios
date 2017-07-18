#include <iostream>

using namespace std;

/* Descripción: Devuelve los elementos de un vector eliminando los repetidos
 * Parámetros de entrada:
 *   - v: un vector de enteros
 *   - tamv: número de elementos de v
 * Parámetros de salida:
 *   - sal: vector donde se almacenan los elementos de v sin repetidos
 * Precondiciones:
 *   - El vector sal tiene suficiente tamaño como para albergar los elementos no repetidos de v
 * Valor de retorno: el número de elementos de sal. Es decir, el número de elementos no 
 *                   repetidos en v
 */
int sinRepetidos(const int v[], int tamv, int sal[])
{
	int tamsal = 0;
	for (int i = 0; i < tamv; i++) {
		bool presente = false;  // indica si v[i] se encuentra en el vector sal
		for (int j = 0; j < tamsal && (!presente); j++)
			if (v[i] == sal[j])
				presente = true;
		if (!presente) {
			sal[tamsal] = v[i];
			tamsal++;
		}
	}
	return tamsal;
}

int main()
{
	const int TAM = 6;
	int v[TAM] = { 2, 4, 2, 7, 7, 2 };
	int sr[TAM];
	int tamsr = sinRepetidos (v, TAM, sr);
	for (int i = 0; i < tamsr; i++)
		cout << sr[i] << endl;
	return 0;
}

