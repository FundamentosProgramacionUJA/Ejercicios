#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "spanish");
    int dato;
    const int BUSCAR = 7;
    int ocurrencias = 0;
    std::cout << "Introduce un número (negativo para terminar): ";
    std::cin >> dato;
    while (dato >= 0) {
       if (dato == BUSCAR)
          ocurrencias++;
       std::cout << "Introduce un número (negativo para terminar): ";
       std::cin >> dato;
    }
    if (ocurrencias > 0)
       std::cout << BUSCAR << " estaba entre los datos\n";
    else
       std::cout << BUSCAR << " no estaba entre los datos\n";
    return 0;
}
