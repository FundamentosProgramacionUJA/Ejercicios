#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    double dato, maximo = -1;
    std::cout << "Introduce número (negativo para terminar): ";
    std::cin >> dato;
    while (dato >= 0) {
        if (dato > maximo)
            maximo = dato;
        std::cout << "Introduce número (negativo para terminar): ";
        std::cin >> dato;
    }
    std::cout << "El máximo es " << maximo << std::endl;
    return 0;
}
