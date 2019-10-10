#include <iostream>

int main() {
    int dato;
    bool todosPares = true;
    std::cout << "Introduce un entero (negativo para terminar): ";
    std::cin >> dato;
    while (dato >= 0) {
       if (dato % 2 == 1)
          todosPares = false;
       std::cout << "Introduce un entero (negativo para terminar): ";
       std::cin >> dato;
    }
    if (todosPares)
        std::cout << "Todos los datos eran pares\n";
    else
        std::cout << "No todos los datos eran pares\n";
    return 0;
}
