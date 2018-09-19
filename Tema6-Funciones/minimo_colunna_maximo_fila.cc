#include <iostream>

using namespace std;

const int MAXFILAS = 10;
const int MAXCOL = 10;

/* Descripción: Calcula el mínimo estricto de una columna de una matriz
 * Parámetros de entrada:
 *   - m: La matriz
 *   - nf: número de filas de la matriz
 *   - c: el índice de la columna
 * Parámetros de salida:
 *   - minimo: el valor del mínimo en la columna
 * Valor de retorno: indica si el mínimo es único
 */
bool minimoCol(const double m[][MAXCOL], int nf, int c, double& minimo) {
    bool unico = true;
    minimo = m[0][c];
    for (int f = 1; f < nf; f++) {
        if (m[f][c] < minimo) {
            minimo = m[f][c];
            unico = true;
        } else if (m[f][c]== minimo) {
            unico = false;
        }
    }
    return unico;
}

/* Descripción: Calcula el máximo estricto de una fila de una matriz
 * Parámetros de entrada:
 *   - m: La matriz
 *   - nc: número de columnas de la matriz
 *   - f: el índice de la fila
 * Parámetros de salida:
 *   - maximo: el valor del maximo de la fila
 * Valor de retorno: indica si el maximo es único
 */
bool maximoFila(const double m[][MAXCOL], int nc, int f, double& maximo) {
    bool unico = true;
    maximo = m[f][0];
    for (int c = 1; c < nc; c++) {
        if (m[f][c] > maximo) {
            maximo = m[f][c];
            unico = true;
        } else if (m[f][c]== maximo) {
            unico = false;
        }
    }
    return unico;
}

/* Descripción: Calcula si hay algún elemento de la matriz que sea el mínimo de
 *              su columna y máximo de su fila (mínimo y máximo estrictos)
 * Parámetros de entrada:
 *   - m: La matriz
 *   - nf: número de filas de la matriz
 *   - nc: número de columnas de la matriz
 * Parámetros de salida:
 *   - valor: el valor del elemento que es mínimo y máximo (si lo hay)
 * Valor de retorno: valor lógico indicando si existe mínimo de columna y
 *                   máximo de fila
 */
bool minimoMaximo(const double m[][MAXCOL], int nf, int nc, double& valor) {
    for (int f = 0; f < nf; f++) {
        for (int c = 0; c < nc; c++) {
            double minimo, maximo;
            if (minimoCol(m, nf, c, minimo) && maximoFila(m, nc, f, maximo)) {
                if (minimo == m[f][c] && maximo == m[f][c]) {
                    valor = m[f][c];
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
  double m[MAXFILAS][MAXCOL];
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

  cout << "La matriz es:\n";
  for (int f = 0; f < nfilas; f++) {
     for (int c = 0; c < ncol; c++) {
        cout << m[f][c] << " ";
     }
     cout << endl;
  }

  double valor;
  if (minimoMaximo(m, nfilas, ncol, valor)) {
      cout << "El valor el " << valor << endl;
  } else {
      cout << "La matriz no tiene ningún valor que cumpla lo establecido\n";
  }

  return 0;
}
