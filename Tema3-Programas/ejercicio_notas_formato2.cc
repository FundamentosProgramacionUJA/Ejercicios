#include <iostream>
#include <locale>
using namespace std;

int main ()
{
  setlocale(LC_ALL, "spanish");
  double nota;
  cout << "Introduzca la nota: ";
  cin >> nota;
  if (nota < 0.0 || nota > 10.0) {
     cout << "Nota no válida" << endl;
  } else if (nota < 5.0) {
     cout << "Suspenso" << endl;
  } else if (nota < 7.0) {
     cout << "Aprobado" << endl;
  } else if (nota < 9.0) {
     cout << "Notable" << endl;
  } else {
     cout << "Sobresaliente" << endl;
  }
  return 0;
}

