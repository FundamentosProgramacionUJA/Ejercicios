#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    double dato, suma = 0;
    char continua;
    std::cout << "�Quieres introducir un dato m�s (s/n): ";
    std::cin >> continua;
    while (continua == 's') {
        std::cout << "Introduce un n�mero: ";
        std::cin >> dato;
        suma += dato; // Procesamiento del dato
        std::cout << "�Quieres introducir un dato m�s (s/n): ";
        std::cin >> continua;
    }
    std::cout << "Suma: " << suma << std::endl;
    return 0;
}
