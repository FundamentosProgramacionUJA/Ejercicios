#include <iostream>
#include <locale>
using namespace std;

int main ()
{
   setlocale(LC_ALL, "spanish");
   const int TAM = 1000;
   float v[TAM];
   int tam;
   float media = 0.0f;
   do {
      cout << "Número de datos [1," << TAM << "]: ";
      cin >> tam;
   } while (tam < 1 || tam > TAM);
   for (int i = 0; i < tam; i++) {
      cout << "Introduzca dato " << i << ": ";
      cin >> v[i];
      media += v[i]; // equivale a media = media + v[i];
   }
   media /= tam;     // equivale a media = media / tam;
   cout << "Valores mayores que la media (" << media << "):\n";
   for (int i = 0; i < tam; i++)
      if (v[i] > media)
         cout << v[i] << '\n';
   return 0;
}
