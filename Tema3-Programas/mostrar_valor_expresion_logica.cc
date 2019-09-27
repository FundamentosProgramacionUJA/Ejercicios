#include <iostream>
using namespace std;

int main () {
  int x = 7;
  // forma 1
  if (x % 2 == 1)
    cout << "El entero es impar\n";
  else
    cout << "El entero es par\n";
  // forma 2
  cout << "El entero es " << (x % 2 == 1 ? "im" : "") << "par\n";
  // forma 3
  cout << "Impar: " << (x % 2 == 1) << endl;
  // forma 4
  cout << "Impar: " << boolalpha << (x % 2 == 1) << endl;
  return 0;
}

