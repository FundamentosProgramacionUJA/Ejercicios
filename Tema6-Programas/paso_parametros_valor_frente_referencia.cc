#include <iostream>

void f(int x, int& y) {
   x = 1;
   y = 1;
}

int main() {
   int a = 0, b = 0;
   std::cout << a  << ' ' << b << '\n';
   f(a, b);
   std::cout << a  << ' ' << b << '\n';
   return 0;
}
