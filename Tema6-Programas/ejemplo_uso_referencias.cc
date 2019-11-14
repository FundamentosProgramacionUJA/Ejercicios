#include <iostream>

int main () {
   int x = 6;
   int v[] = {1, 2};
   int& r1 = x;
   int& r2 = v[0];
   std::cout << x << ' ' << v[0] << ' ' << v[1] << '\n';
   r1 = 4;
   r2++;
   std::cout << x << ' ' << v[0] << ' ' << v[1] << '\n';
   std::cout << r1 << ' ' << r2 << '\n';
   return 0;
}
