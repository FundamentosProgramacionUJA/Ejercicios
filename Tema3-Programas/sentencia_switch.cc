#include <iostream>

int main () {
  int x;
  std::cout << "Introduzca un valor entero: ";
  std::cin >> x;
  switch (x) {
     case 1:
         std::cout << "Mensaje 1\n";
         break;
     case 2:
         std::cout << "Mensaje 2\n";
     case 3:
         std::cout << "Mensaje 3\n";
         break;
     case 4:
     case 5:
         std::cout << "Mensaje 4\n";
         break;
     default:
         std::cout << "Mensaje por defecto\n";
         break;
  }
  return 0;
}
