#include <iostream>
#include <locale>

int main()
{
  setlocale(LC_ALL, "spanish");
  int numero;
  std::cout << "Introduzca un entero positivo: ";
  std::cin >> numero;
  bool noPrimo = false;
  for (int e = 2; e < numero; e++) {
    if (numero % e == 0)
       noPrimo = true;
  }
  if (noPrimo)
     std::cout << "El número " << numero << " no es primo\n";
  else
     std::cout << "El número " << numero << " es primo\n";
  return 0;
}

