#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    const int N = 5;
    double dato, suma = 0;
    for (int i = 1; i <= N; i++) {
        std::cout << "Introduzca un número: ";
        std::cin >> dato;
        suma += dato;
    }
    std::cout << "Suma: " << suma << std::endl;
    return 0;
}
