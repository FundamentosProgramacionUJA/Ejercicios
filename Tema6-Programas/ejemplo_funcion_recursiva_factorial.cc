#include <iostream>

int factorial(int n) {
   if (n < 2)
      return 1;
   return n * factorial(n-1);
}

int main () {
   std::cout << "Factorial(5) =  " << factorial(5) << std::endl;
   return 0;
}
