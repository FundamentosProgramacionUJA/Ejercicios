#include <iostream>
#include <locale>
using namespace std;

void maxmin(double x, double y, double& max, double& min) {
   if (x > y) {
      max = x;
      min = y;
   } else {
      max = y;
      min = x;
   }
}

int main () {
  setlocale(LC_ALL, "spanish");
  double a, b, maximo, minimo;
  cout << "Introduzca dos números: ";
  cin >> a >> b;
  maxmin(a, b, maximo, minimo);
  cout << "Máximo: " << maximo << " Mínimo: " << minimo << endl;
  return 0;
}
