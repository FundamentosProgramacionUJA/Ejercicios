#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string nombre;
  const string ADIVINA = "Francisco";
  do {
     cout << "Avidina el nombre (FIN para terminar): ";
     cin >> nombre;
  } while (nombre != ADIVINA && nombre != "FIN");
  if (nombre == ADIVINA)
     cout << "Enhorabuena, lo adivinaste\n";
  else
     cout << "El nombre es: " << ADIVINA << '\n';
  return 0;
}
