/* ---------------------------------------------------------------------------
 * Programa: Sistema D'Hont
 * Entradas: Un número de escaños y los votos obtenidos por las distintas listas
 * Salidas:  El número de escaños obtenido por cada lista.
 * --------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

struct lista {
    string nombre;
    int votos;
    int esc; // total de escaños
};

int main ()
{
    const int TAM = 100;
    lista l[TAM]; // listas electorales
    int nl; // número lógico de listas
    int ne; // número de escaños
    do {
        cout << "Introduce número de escaños: ";
        cin >> ne;
    } while (ne < 0);
    do {
        cout << "Introduce número de listas: ";
        cin >> nl;
    } while (nl <= 0 || nl > TAM);

    // lectura de las listas y sus votos
    for (int i = 0; i < nl; i++) {
        cout << "Nombre de la lista: ";
        getline(cin >> ws, l[i].nombre);
        cout << "Número de votos: ";
        cin >> l[i].votos;
        l[i].esc = 0;
    }

    // cálculo de escaños
    for (int i = 1; i <= ne; i++) {
        int posMaximo = 0;
        for (int j = 1; j < nl; j++) {
            if (l[j].votos / (l[j].esc + 1) > l[posMaximo].votos / (l[posMaximo].esc + 1))
                posMaximo = j;
        }
        l[posMaximo].esc++;
    }

    // listado de escaños
    for (int i = 0; i < nl; i++) {
        cout << "El partido " << l[i].nombre << " ha obtenido " << l[i].esc << " escaños\n";
    }
    return 0;
}
