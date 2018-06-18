#include <iostream>
using namespace std;

/* ----------------------------------------------------------------------
 * Programa: TodosVocales
 * Entradas: Una serie de caracteres terminada en el carácter + o -
 * Salidas: Un mensaje indicando si todos los caracteres leídos eran vocales
 *          minúsculas
 * ---------------------------------------------------------------------- */

int main()
{
    bool todosVocales = true;
    char c;
    cout << "Introduzca un carácter (+ o - para terminar): ";
    cin >> c;
    while (c != '+' && c != '-') {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            todosVocales = false;
        cout << "Introduzca un carácter (+ o - para terminar): ";
        cin >> c;
    }
    if (todosVocales)
        cout << "Todos los caracteres han sido vocales minúsculas\n";
    else
        cout << "No todos los caracteres han sido vocales minúsculas\n";
    return 0;
}

