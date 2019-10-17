#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string nombre;
  cout << "Introduzca su nombre completo: ";
  getline(cin, nombre);
  cout << "Nombre completo: " << nombre << endl;
  cout << "Introduzca su nombre completo: ";
  cin >> nombre;           // Solo lee una palabra
  cout << "Nombre completo: " << nombre << endl;
  return 0;
}
