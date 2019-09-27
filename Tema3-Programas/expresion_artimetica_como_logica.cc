#include <iostream>

int main() {
  int x, y;
  std::cout << "Introduzca dos valores enteros: ";
  std::cin >> x >> y;
  if (x - y)
     std::cout << "Los valores son distintos\n";
  if (true)
     std::cout << "Este mensaje siempre aparece\n";
  return 0;
}

