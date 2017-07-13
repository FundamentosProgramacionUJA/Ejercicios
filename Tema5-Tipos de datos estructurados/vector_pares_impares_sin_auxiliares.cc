/* ---------------------------------------------------------------------------
 * Programa: vector_pares_impares_sin_auxiliares
 * Entradas: Un vector de enteros (realmente se define en el programa
 * Salidas:  Modifica el vector situando al principio los elementos pares
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main () {
	const int TAM = 10;
	int v[TAM] = { 2, 1, 3, 4, 6, 8, 5, 7, 9, 10 };
	int posp = 0; // Los elementos cuya posición en el vector es menor que posp son pares
	int posi = TAM - 1; // Los elementos cuya posición en el vector es mayor que posi son impares
	while (posp < posi) {
		while ((posp < posi) && (v[posp] % 2 == 0))
			posp++;
		while ((posp < posi) && (v[posi] % 2 == 1))
			posi--;
		if (posp < posi) {
			int tmp = v[posp];
			v[posp] = v[posi];
			v[posi] = tmp;
		}
	}
	for (int i = 0; i < TAM; i++)
		cout << v[i] << '\n';
	return 0;
}

/*
 * Otra implementación
int main () {
	const int TAM = 10;
	int v[TAM] = { 2, 1, 3, 4, 6, 8, 5, 7, 9, 10 };
	int posimpar = TAM; // posición más baja en el vector de un dato impar (inicialmente es mayor que cualquier posición del vector)
	for (int i = 0; i < TAM; i++) {
		if (v[i] % 2 == 0) {
			if (posimpar < i) {
				int tmp = v[i];
				v[i] = v[posimpar];
				v[posimpar] = tmp;
				posimpar++;
			}
		} else { // el valor es impar
			if (i < posimpar)
				posimpar = i;
		}
	}
	for (int i = 0; i < TAM; i++)
		cout << v[i] << '\n';
	return 0;
}
*/
