#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    int nDatos;
    std::cout << "Indica la cantidad de datos a leer: ";
    std::cin >> nDatos;
    double dato, suma = 0;
    for (int i = 1; i <= nDatos; i++) {
        std::cout << "Introduzca un número: ";
        std::cin >> dato;
        suma += dato;
    }
    std::cout << "Suma: " << suma << std::endl;
    return 0;
}
