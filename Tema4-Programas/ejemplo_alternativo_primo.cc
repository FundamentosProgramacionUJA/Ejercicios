#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int numero, i;
    bool divisores;
    std::cout << "Introduzca un entero positivo: ";
    std::cin >> numero;
    divisores = false;
    for (i = 2; i < numero && !divisores; i++) {
        if (numero % i == 0) // si el resto de la división entera es cero
            divisores = true;
    }
    if (divisores)
        cout << "El número " << numero << " no es primo" << endl;
    else
        cout << "El número " << numero << " es primo" << endl;
    return 0;
}
