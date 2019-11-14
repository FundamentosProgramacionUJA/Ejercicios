#include <iostream>
#include <locale>

struct Maxmin {
  double max, min;
};

Maxmin maxmin (double x, double y) {
   Maxmin m;
   if (x > y) {
      m.max = x;
      m.min = y;
   } else {
      m.max = y;
      m.min = x;
   }
   return m;
}

int main () {
   setlocale(LC_ALL, "spanish");
   double a, b;
   std::cout << "Introduzca dos números: ";
   std::cin >> a >> b;
   Maxmin sol = maxmin (a, b);
   std::cout << "Máximo: " << sol.max << " Mínimo: " << sol.min << '\n';
   return 0;
}
