#include <iostream>
#include <locale>

int main()
{
    char sexo;
    do {
        std::cout << "Sexo (m o f): ";
        std::cin >> sexo;
    } while (sexo != 'm' && sexo != 'f');
    std::cout << "El sexo introducido es " << sexo << std::endl;
    return 0;
}
