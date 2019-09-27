#include <iostream>
#include <locale>
using namespace std;

int main ()
{
  setlocale(LC_ALL, "spanish");
  double nota;
  cout << "Introduzca la nota: ";
  cin >> nota;
  if (nota < 0 || nota > 10) {
     cout << "Nota no válida\n";
  } else {
     if (nota < 5.0) {
        cout << "Suspenso\n";
     } else {
        if (nota < 7.0) {
           cout << "Aprobado\n";
        } else {
           if (nota < 9.0) {
               cout << "Notable\n";
           } else {
               cout << "Sobresaliente\n";
           }
        }
     }
  }
  return 0;
}

