#include <iostream>
using namespace std;

void cuadrado(int v[], int tam) {
   for (int i = 0; i < tam; i++)
      v[i] *= v[i]; // equivale a v[i] = v[i]*v[i];
}

void muestra(const int v[], int tam) {
   for (int i = 0; i < tam; i++)
      cout << v[i] << ' ';
   cout << endl;
}

int main () {
   const int TAM = 3;
   int vec[TAM] = { 1, 2, 3 };
   cuadrado(vec, TAM);
   muestra(vec, TAM);
   return 0;
}
