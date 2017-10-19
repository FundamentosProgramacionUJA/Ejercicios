/* ---------------------------------------------------------------------------
 * Programa: ElementoIgualSumaResto
 * Entradas: Un vector de números (realmente se define en el programa)
 * Salidas:  Se indica si hay algún número igual a la suma del resto, y en su caso,
 *           el número en cuestión.
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main ()
{
    const int TAM = 4;
    int v[TAM] = { 1, 2, 6, 3};
    // se suman los números
    int suma = 0;
    for (int i = 0; i < TAM; i++)
        suma += v[i];
    // se calcula si existe el número
    int solucion;
    bool existe = false;
    for (int i = 0; i < TAM && !existe; i++) {
        if (v[i] == suma - v[i]) {
            solucion = v[i];
            existe = true;
        }
    }
    if (existe)
        cout << "El número es " << solucion << endl;
    else
        cout << "No existe ningún número igual a la suma del resto\n";
    // Otra forma de hacerlo.
    existe = false;
    for (int i = 0; i < TAM && !existe; i++) {
        suma = 0; // suma del resto de números
        for (int j = 0; j < TAM; j++) {
                if (i != j)
                    suma += v[j];
        }
        if (v[i] == suma) {
            solucion = v[i];
            existe = true;
        }
    }
    if (existe)
        cout << "El número es " << solucion << endl;
    else
        cout << "No existe ningún número igual a la suma del resto\n";
    return 0;
}
