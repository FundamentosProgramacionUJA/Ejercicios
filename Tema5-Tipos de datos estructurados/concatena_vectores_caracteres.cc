/* ---------------------------------------------------------------------------
 * Programa: concatena_vectores_caracteres
 * Entradas: Dos vectores de caracteres (realmente se definen en el programa)
 * Salidas:  Un vector con los elementos del primer vector seguido de los 
 *           elementos del segundo vector
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main ()
{
	int const TAM1 = 8;
	int const TAM2 = 3;
	char v1[TAM1] = { 'F', 'r', 'a', 'n', 'z', ' ', 'K', 'a' };
	char v2[TAM2] = { 'f', 'k', 'a' };
	char r[TAM1+TAM2]; // vector resultado de la concatenación

	int ir = 0; // índice de trabajo en el vector r
	for (int i = 0; i < TAM1; i++) {
             r[ir] = v1[i];
             ir++;
	}
	for (int i = 0; i < TAM2; i++) {
            r[ir] = v2[i];
            ir++;
	}
	cout << "El vector contatenado es: ";
	for (int i = 0; i < ir; i++)
            cout << r[i];
        cout << '\n';
	return 0;
}
