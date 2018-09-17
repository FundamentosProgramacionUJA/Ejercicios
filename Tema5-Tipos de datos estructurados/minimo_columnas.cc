#include <iostream>
using namespace std;

/* Programa: minimo_columnas
 * Entradas: Las dimensiones y elementos de una matriz.
 * Salidas: El m�nimo de los elementos de cada columna de la matriz
 */

int main () {
  const int MAXFILAS = 20;
  const int MAXCOL = 10;
  double m[MAXFILAS][MAXCOL];
  double minimos[MAXCOL];
  int nfilas, ncol;
  do {
    cout << "N�mero de filas (m�ximo " << MAXFILAS << "): ";
    cin >> nfilas;
  } while (nfilas < 0 || nfilas > MAXFILAS);

  do {
    cout << "N�mero de columnas (m�ximo " << MAXCOL << "): ";
    cin >> ncol;
  } while (ncol < 0 || ncol > MAXCOL);

  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << "Introduce elemento " << f << "," << c << ": ";
        cin >> m[f][c];
     }
  }

  for (int c = 0; c < ncol; c++) {
     double minimo = m[0][c];
     for (int f = 1; f < nfilas; f++) {
        if (m[f][c] < minimo)
           minimo = m[f][c];
     }
     minimos[c] = minimo;
  }

  cout << "La matriz es:\n";
  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << m[f][c] << " ";
     }
     cout << endl;
  }

  cout << "\nM�nimos:\n";
  for (int c = 0; c < ncol; c++) {
     cout << "El m�nimo de la columna " << c << " es " << minimos[c] << endl;
  }
  return 0;
}
