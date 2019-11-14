#include <iostream>
#include <locale>
using namespace std;

double maximo(double x, double y); // declaración de maximo

int main () {
   setlocale(LC_ALL, "spanish");
   double a = 6.5, b = 4.0;
   cout << "El máximo es: " << maximo(a, b) << endl;
   return 0;
}

double maximo(double x, double y) { // definición de maximo
   return (x > y) ? x : y;
}
