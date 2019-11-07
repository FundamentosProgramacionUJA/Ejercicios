#include <iostream>
#include <locale>

const int TAM = 4;                  // constante global
float v[TAM] = { 5.2f, 5.4f, 3, 2}; // vector global
float maximo;                       // otra variable global

void max() {
   maximo = v[0];
   for (int i = 1; i < TAM; i++)
      if (v[i] > maximo)
         maximo = v[i];
}

int main() {
   setlocale(LC_ALL, "spanish");
   int v = 4;  // esta variable oculta al vector global v
   max ();     // calcula el máximo del vector y guárdalo en maximo
   std::cout << "Máximo: " << maximo << " v: " << v << std::endl;
   return 0;
}
