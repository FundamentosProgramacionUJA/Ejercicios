#include <iostream>
#include <locale>
using namespace std;

int main ()
{
  setlocale(LC_ALL, "spanish");
  const int NFILAS = 10;
  const int NCOL = 10;
  double m[NFILAS][NCOL];
  int nfilas, ncol;
  do {
    cout << "Número de filas (máximo " << NFILAS << "): ";
    cin >> nfilas;
  } while (nfilas <= 0 || nfilas > NFILAS);
  do {
    cout << "Número de columnas (máximo " << NCOL << "): ";
    cin >> ncol;
  } while (ncol <= 0 || ncol > NCOL);
  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << "Introduce elemento " << f << "," << c << ": ";
        cin >> m[f][c];
     }
  }
  cout << "La matriz de trabajo es:\n";
  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << m[f][c] << " ";
     }
     cout << endl;
  }
  return 0;
}

