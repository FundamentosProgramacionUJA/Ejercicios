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
        if (numero % i == 0) // si el resto de la divisi�n entera es cero
            divisores = true;
    }
    if (divisores)
        cout << "El n�mero " << numero << " no es primo" << endl;
    else
        cout << "El n�mero " << numero << " es primo" << endl;
    return 0;
}
