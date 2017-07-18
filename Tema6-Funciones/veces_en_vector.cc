#include <iostream>

using namespace std;

struct ocurrencias {
	int valor;
	int nveces;
};

/* Descripción: Devuelve el número de veces que aparecen los elementos de v.
 * Parámetros de entrada:
 *   - v: un vector de enteros
 *   - tamv: número de elementos de v a procesar
 * Parámetros de salida:
 *   - ocu: vector con las ocurrencias de los elementos de v.
 *   - tamocu: Número de elementos insertados en ocu
 * Precondiciones:
 *   - El vector ocu tiene el suficiente tamaño como para albergar todos los elementos no repetidos de v
 */
void vecesVector(const int v[], int tamv, ocurrencias ocu[], int& tamocu)
{
	tamocu = 0;
	for (int i = 0; i < tamv; i++) {
		bool encontrado = false;  // ¿se encuentra v[i] en ocu?
		for (int pos = 0; pos < tamocu && !encontrado; pos++) {
			if (v[i] == ocu[pos].valor) {   // si se encuentra acumulamos una nueva ocurrencia
				ocu[pos].nveces++;
				encontrado = true;
			}
		}
		if (!encontrado) {                 // si no se encuentra se añade un nuevo elemento a ocu
			ocu[tamocu].valor = v[i];
			ocu[tamocu].nveces = 1;
			tamocu++;
		}
	}
}

int main()
{
	const int TAM = 10;
	int vec[TAM] = {1, 2, 2, 1, 3, 4, 1, 6, 5, 3};
	ocurrencias o[TAM];
	int tamo;
	vecesVector(vec, TAM, o, tamo);
	for (int i = 0; i < tamo; i++)
		cout << "Valor: " << o[i].valor << ". Ocurrencias: " << o[i].nveces << endl;
	return 0;
}
