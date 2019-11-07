#include <iostream>
#include <locale>
using namespace std;

double maximo (double x, double y) {
   double m;
   if (x > y)
      m = x;
   else
      m = y;
   return m;
}

int main () {
  setlocale(LC_ALL, "spanish");
  double a, b;
  cout << "Introduzca dos números: ";
  cin >> a >> b;
  cout << "El máximo es: " << maximo(a, b) << endl;
  cout << "El máximo de " << a << " y 10 es: " << maximo(a, 10) << endl;
  a = 8;
  double z = 3 + maximo(a, a-1);
  cout << "z vale: " << z << endl;
  return 0;
}
