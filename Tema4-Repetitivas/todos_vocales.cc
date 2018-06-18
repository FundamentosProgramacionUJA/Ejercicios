#include <iostream>
using namespace std;

/* ----------------------------------------------------------------------
 * Programa: TodosVocales
 * Entradas: Una serie de caracteres terminada en el car�cter + o -
 * Salidas: Un mensaje indicando si todos los caracteres le�dos eran vocales
 *          min�sculas
 * ---------------------------------------------------------------------- */

int main()
{
    bool todosVocales = true;
    char c;
    cout << "Introduzca un car�cter (+ o - para terminar): ";
    cin >> c;
	while (c != '+' && c != '-') {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            todosVocales = false;
        cout << "Introduzca un car�cter (+ o - para terminar): ";
        cin >> c;
    }
    if (todosVocales)
        cout << "Todos los caracteres han sido vocales min�sculas\n";
    else
        cout << "No todos los caracteres han sido vocales min�sculas\n";
    return 0;
}

