#include <iostream>
using namespace std;

int main ()
{
   const int TAM = 3;
   float v1[TAM] = {1, 2, 3};
   float v2[TAM];
   for (int i = 0; i < TAM; i++) // copia los elementos
   	  v2[i] = v1[i];
   for (int i = 0; i < TAM; i++) // muestra los elementos de v2
   	  cout << v2[i] << '\n';
   bool iguales = true;
   for (int i = 0; i < TAM; i++) // compara los elementos de v1 y v2
   	  if (v1[i] != v2[i])
   	      iguales = false;
   if (iguales)
      cout << "Vectores iguales\n";
   else
      cout << "Vectores distintos\n";
   return 0;
}
