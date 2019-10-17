#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main ()
{
  setlocale(LC_ALL, "spanish");
  const string FRASE = "Burro grande, ande o no ande";
  int cont = 0;
  char c;
  cout << "Introduzca un carácter: ";
  cin >> c;
  for (int i = 0; i < FRASE.length(); i++)
     if (c == FRASE[i])
         cont++;
  cout << cont << " apariciones de " << c << " en: " << FRASE << endl;
  return 0;
}
