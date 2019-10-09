#include <iostream>

int main()
{
    int numero, i, fact = 1;
    std::cout << "Introduzca un entero positivo: ";
    std::cin >> numero;
    for (i = 2; i <= numero; i++) {
        fact *= i; // equivale a fact = fact * i;
    }
    std::cout << "El factorial de " << numero << " es " << fact << std::endl;
    return 0;
}
