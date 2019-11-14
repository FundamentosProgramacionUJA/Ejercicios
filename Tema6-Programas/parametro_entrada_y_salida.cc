#include <iostream>

void cuadrado(int& x) {
   x = x*x;
}

int main () {
   int valor;
   std::cout << "Introduzca un entero: ";
   std::cin >> valor;
   cuadrado(valor);
   std::cout << "Su cuadrado vale " << valor << '\n';
   return 0;
}
