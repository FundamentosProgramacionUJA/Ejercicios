/* ---------------------------------------------------------------------------
 * Programa: MasOcurrenciasVector
 * Entradas: Un vector de caracteres (realmente se define en el programa)
 * Salidas:  El carácter que aparece más veces en el vector. Si el máximo
             es compartido por más de un carácter se muestra el que aparece
             primero.
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main ()
{
    const int TAM = 10;
    int v[TAM] = { 'a', 'j', 'm', 'a', 'x', 'j', 'z', 'j', 'm','o'};
    int maximo = 0;
    char valorMaximo = '-';
    for (int i = 0; i < TAM; i++) {
        int cont = 0;
        for (int j = i + 1; j < TAM; j++)
            if (v[i] == v[j])
                cont++;
        if (cont > maximo) {
            maximo = cont;
            valorMaximo = v[i];
        }
    }
    cout << "El carácter que aparece más veces es " << valorMaximo << endl;
    // Otra forma de hacerlo: dado un carácter, se cuentan sus ocurrencias solo si es el primer
    // carácter en el vector
    maximo = 0;
    valorMaximo = '-';
    for (int i = 0; i < TAM; i++) {
        bool esPrimero = true;
        for (int j = 0; j < i && esPrimero; j++)
            if (v[j] == v[i])
                esPrimero = false;
        if (esPrimero) {
            int cont = 0;
            for (int j = i + 1; j < TAM; j++)
                if (v[i] == v[j])
                    cont++;
            if (cont > maximo) {
                maximo = cont;
                valorMaximo = v[i];
            }
        }
    }
    cout << "El carácter que aparece más veces es " << valorMaximo << endl;
    return 0;
}
