#include <iostream>
#include <locale>
using namespace std;

double maximo(double x, double y); // declaraci�n de maximo

int main () {
   setlocale(LC_ALL, "spanish");
   double a = 6.5, b = 4.0;
   cout << "El m�ximo es: " << maximo(a, b) << endl;
   return 0;
}

double maximo(double x, double y) { // definici�n de maximo
   return (x > y) ? x : y;
}
