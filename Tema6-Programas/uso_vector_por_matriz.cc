#include <iostream>

void cuadrado(int m[], int nfilas, int ncol) {
   for (int i = 0; i < nfilas; i++)
      for (int j = 0; j < ncol; j++)
         m[i*ncol + j] *= m[i*ncol+ j];
}

void muestra(const int m[], int nfilas, int ncol) {
   for (int i = 0; i < nfilas; i++) {
      for (int j = 0; j < ncol; j++)
         std::cout << m[i*ncol + j] << ' ';
      std::cout << '\n';
   }
}

int main () {
   const int NFILAS = 3;
   const int NCOL = 2;
   int mat[NFILAS*NCOL] = { 1, 1, 2, 2, 3, 3 };
   cuadrado(mat, NFILAS, NCOL);
   muestra(mat, NFILAS, NCOL);
   int mat2[2*4] = { 1, 1, 1, 1, 2, 2, 2, 2};
   muestra (mat2, 2, 4);
   return 0;
}
