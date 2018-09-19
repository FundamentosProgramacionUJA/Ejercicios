#include <iostream>

using namespace std;

const int MAXFILAS = 10;
const int MAXCOL = 10;

/* Descripci�n: Calcula el m�nimo estricto de una columna de una matriz
 * Par�metros de entrada:
 *   - m: La matriz
 *   - nf: n�mero de filas de la matriz
 *   - c: el �ndice de la columna
 * Par�metros de salida:
 *   - minimo: el valor del m�nimo en la columna
 * Valor de retorno: indica si el m�nimo es �nico
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

/* Descripci�n: Calcula el m�ximo estricto de una fila de una matriz
 * Par�metros de entrada:
 *   - m: La matriz
 *   - nc: n�mero de columnas de la matriz
 *   - f: el �ndice de la fila
 * Par�metros de salida:
 *   - maximo: el valor del maximo de la fila
 * Valor de retorno: indica si el maximo es �nico
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

/* Descripci�n: Calcula si hay alg�n elemento de la matriz que sea el m�nimo de
 *              su columna y m�ximo de su fila (m�nimo y m�ximo estrictos)
 * Par�metros de entrada:
 *   - m: La matriz
 *   - nf: n�mero de filas de la matriz
 *   - nc: n�mero de columnas de la matriz
 * Par�metros de salida:
 *   - valor: el valor del elemento que es m�nimo y m�ximo (si lo hay)
 * Valor de retorno: valor l�gico indicando si existe m�nimo de columna y
 *                   m�ximo de fila
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
      cout << "La matriz no tiene ning�n valor que cumpla lo establecido\n";
  }

  return 0;
}
