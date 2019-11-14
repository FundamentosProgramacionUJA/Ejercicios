#include <iostream>
using namespace std;

const int NFILAS = 3;
const int NCOL = 2;

void cuadrado(int m[][NCOL], int nfilas, int ncol) {
   for (int i = 0; i < nfilas; i++)
      for (int j = 0; j < ncol; j++)
         m[i][j] *= m[i][j]; // equivale a m[i][j] = m[i][j]*m[i][j];
}

void muestra(const int m[][NCOL], int nfilas, int ncol) {
   for (int i = 0; i < nfilas; i++) {
      for (int j = 0; j < ncol; j++)
         cout << m[i][j] << ' ';
      cout << '\n';
   }
}


int main () {
   int mat[NFILAS][NCOL] = { {1, 1}, {2, 2}, {3, 3} };
   cuadrado(mat, NFILAS, NCOL);
   muestra(mat, NFILAS, NCOL);
   return 0;
}
