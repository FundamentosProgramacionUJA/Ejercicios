#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    double dato, maximo = -1;
    std::cout << "Introduce n�mero (negativo para terminar): ";
    std::cin >> dato;
    while (dato >= 0) {
        if (dato > maximo)
            maximo = dato;
        std::cout << "Introduce n�mero (negativo para terminar): ";
        std::cin >> dato;
    }
    std::cout << "El m�ximo es " << maximo << std::endl;
    return 0;
}
