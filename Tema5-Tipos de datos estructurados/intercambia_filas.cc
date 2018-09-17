#include <iostream>
using namespace std;

/* Programa: intercambia_filas
 * Entradas: Las dimensiones y elementos de una matriz.
 * Salidas: La matriz intercambianod su primera fila por la última, la segunda
 *          por la penúltima y así sucesivamente.
 */

int main () {
  const int MAXFILAS = 20;
  const int MAXCOL = 10;
  double m[MAXFILAS][MAXCOL];
  double minimos[MAXCOL];
  int nfilas, ncol;

  do {
    cout << "Número de filas (máximo " << MAXFILAS << "): ";
    cin >> nfilas;
  } while (nfilas < 0 || nfilas > MAXFILAS);

  do {
    cout << "Número de columnas (máximo " << MAXCOL << "): ";
    cin >> ncol;
  } while (ncol < 0 || ncol > MAXCOL);

  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << "Introduce elemento " << f << "," << c << ": ";
        cin >> m[f][c];
     }
  }

  cout << "La matriz original es:\n";
  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << m[f][c] << " ";
     }
     cout << endl;
  }

  int filainicial = 0;
  int filafinal = nfilas - 1;
  while (filainicial < filafinal) {
     for (int c = 0; c < ncol; c++) {
        double temp = m[filainicial][c];
        m[filainicial][c] = m[filafinal][c];
        m[filafinal][c] = temp;
     }
     filainicial++;
     filafinal--;
  }

  cout << "La matriz con filas intercambiadas es:\n";
  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << m[f][c] << " ";
     }
     cout << endl;
  }

  return 0;
}
