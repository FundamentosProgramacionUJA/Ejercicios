/* ---------------------------------------------------------------------------
 * Programa: vector_pares_impares
 * Entradas: Un vector de enteros
 * Salidas:  Modifica el vector situando al principio los elementos pares
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main () {
	const int TAM = 10;
	int v[TAM] = { 2, 1, 3, 4, 6, 8, 5, 7, 9, 10 };
	int pares[TAM];
	int impares[TAM];
	int tamp = 0, tami = 0; // tamaño lógico del vector pares e impares respectivamente
    // Este ciclo trasvasa los elementos pares e impares a los vectores con ese nombre
	for (int i = 0; i < TAM; i++) {
		if (v[i] % 2 == 0) {
			pares[tamp] = v[i];
			tamp++;
		} else {
			impares[tami] = v[i];
			tami++;
        }
	}
	// copia los elementos de pares a v
	int pos = 0;
	for (int i = 0; i < tamp; i++) {
		v[pos] = pares[i];
		pos++;
	}
	// añade los elementos de impares al final de v
	for (int i = 0; i < tami; i++) {
		v[pos] = impares[i];
		pos++;
	}

	for (int i = 0; i < TAM; i++)
		cout << v[i] << '\n';
	return 0;
}
