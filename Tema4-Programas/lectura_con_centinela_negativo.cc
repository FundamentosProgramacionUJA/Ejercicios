#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    double dato, suma = 0;
    std::cout << "Introduce n�mero (negativo para terminar): ";
    std::cin >> dato;
    while (dato >= 0) {
        suma += dato; // Procesamiento del dato
        std::cout << "Introduce n�mero (negativo para terminar): ";
        std::cin >> dato;
    }
    std::cout << "Suma: " << suma << std::endl;
    return 0;
}
