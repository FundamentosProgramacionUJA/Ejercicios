/* ---------------------------------------------------------------------------
 * Programa: suma_elementos_vector
 * Entradas: Un vector de n�meros (aunque realmente se define en el programa)
 * Salidas:  La suma de los elementos del vector
 * --------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main ()
{
    const int TAM = 5;
    double v[TAM] = { 1, 1.5, 2, 0, 4};
    double suma = 0;
	for (int i = 0; i < TAM; i++)
        suma = suma + v[i]; // tambi�n vale: suma += v[i];
	cout << "La suma de los elementos del vector es " << suma << endl;
	return 0;
}
