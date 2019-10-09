#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    double dato, suma = 0;
    char continua;
    std::cout << "¿Quieres introducir un dato más (s/n): ";
    std::cin >> continua;
    while (continua == 's') {
        std::cout << "Introduce un número: ";
        std::cin >> dato;
        suma += dato; // Procesamiento del dato
        std::cout << "¿Quieres introducir un dato más (s/n): ";
        std::cin >> continua;
    }
    std::cout << "Suma: " << suma << std::endl;
    return 0;
}
