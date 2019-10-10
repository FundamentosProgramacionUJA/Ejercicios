#include <iostream>
using namespace std;

int main () {
  int v[6];
  cout << "Introduzca cinco enteros separados por espacios: ";
  for (int i = 0; i < 5; i++)
     cin >> v[i];
  v[5] = 10;
  cout << "Los enteros del vector son : " << endl;
  for (int i = 0; i < 6; i++)
     cout << v[i] << endl;
  return 0;
}
