#include <iostream>
using namespace std;

int main() {
  int x, y;
  cout << "Introduzca dos valores enteros: ";
  cin >> x >> y;
  if (x > y) {
     cout << "El primer valor es el mayor" << endl;
  } else {
     if (y > x) {
        cout << "El segundo valor es el mayor" << endl;
     } else {
        cout << "Los dos valores son iguales" << endl;
     }
  }
  return 0;
}
