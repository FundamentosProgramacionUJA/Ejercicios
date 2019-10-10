#include <iostream>
#include <locale>

int main()
{
    char sexo;
    std::cout << "Sexo (m o f): ";
    std::cin >> sexo;
    while (sexo != 'm' && sexo != 'f') {
        std::cout << "Reintroduzca sexo (m o f): ";
        std::cin >> sexo;
    }
    std::cout << "El sexo introducido es " << sexo << std::endl;
    return 0;
}
