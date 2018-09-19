#include <iostream>
using namespace std;

const int NFILAS = 10;
const int NCOL = 10;

/* Descripción: Pone a libres todos los asientos de una sala
 * Parámetros de entrada y salida:
 *   - sala: La matriz representando la sala de cine
 */
void inicia(bool sala[][NCOL]) {
    for (int f = 0; f < NFILAS; f++)
        for (int c = 0; c < NCOL; c++)
            sala[f][c] = true;
}

/* Descripción: Muestra en la salida estándar la sala de cine
 * Parámetros de entrada:
 *   - sala: La matriz representando la sala de cine
 */
void visualiza(const bool sala[][NCOL]) {
    for (int f = 0; f < NFILAS; f++) {
        cout << f << ": ";
        for (int c = 0; c < NCOL; c++) {
            if (sala[f][c])
                cout << "L ";
            else
                cout << "O ";
        }
        cout << endl;
    }
}

/* Descripción: Cuenta el número de asientos libres en la sala
 * Parámetros de entrada:
 *   - sala: La matriz representando la sala de cine
 * Valor de retorno: el número de asientos libres
 */
int libres(const bool sala[][NCOL]) {
    int lib = 0;
    for (int f = 0; f < NFILAS; f++) {
        for (int c = 0; c < NCOL; c++) {
            if (sala[f][c])
                lib++;
        }
    }
    return lib;
}

/* Descripción: Calcula las filas que tienen un cierto número de asientos libres
 * Parámetros de entrada:
 *   - sala: La matriz representando la sala de cine
 *   - n: número de asientos
 * Parámetros de salida:
 *   - filas: vector con los números de filas que contienen n asientos libres
 * Valor de retorno: número de filas con n asientos libres
 */
int filasLibres(const bool sala[][NCOL], int n, int filas[]) {
    int nFilas = 0;
    for (int f = 0; f < NFILAS; f++) {
        int libres = 0;
        for (int c = 0; c < NCOL; c++) {
            if (sala[f][c])
                libres++;
        }
        if (libres >= n) {
            filas[nFilas] = f;
            nFilas++;
        }
    }
    return nFilas;
}

/* Descripción: Reserva n asientos en una fila
 * Parámetros de entrada:
 *   - f: fila
 *   - n: número de asientos
 * Parámetros de salida:
 *   - reservados: vector con los números de asientos reservados
 * Parámetros de entrada y salida:
 *   - sala: La matriz representando la sala de cine
 * Precondiciones: la fila es correcta y contiene al menos n asientos libres
 */
void reservaFila(bool sala[][NCOL], int f, int n, int reservados[]) {
    int nReservados = 0; // número de asientos reservados
    for (int c = 0; c < NCOL && nReservados < n; c++) {
        if (sala[f][c]) {
            sala[f][c] = false;
            reservados[nReservados] = c + f * 10;
            nReservados++;
        }
    }
}

/* Descripción: Si hay al menos n asientos libres los reserva
 * Parámetros de entrada:
 *   - n: número de asientos
 * Parámetros de salida:
 *   - reservados: vector con los números de asientos reservados
 * Parámetros de entrada y salida:
 *   - sala: La matriz representando la sala de cine
 * Valor de retorno: un valor lógico indicando si la sala contiene al menos n
 *                   asientos libres
 */
bool reservaAsientos(bool sala[][NCOL], int n, int reservados[]) {
    if (libres(sala) < n)
        return false;
    int nReservados = 0; // número de asientos reservados
    for (int f = 0; f < NFILAS && nReservados < n; f++) {
        for (int c = 0; c < NCOL && nReservados < n; c++) {
            if (sala[f][c]) {
                sala[f][c] = false;
                reservados[nReservados] = c + f * 10;
                nReservados++;
            }
        }
    }
    return true;
}

int main() {
    bool sala[NFILAS][NCOL];
    int posiblesFilas[NFILAS];
    int asientos[NFILAS*NCOL];
    inicia(sala);
    visualiza(sala);
    int nAsientos;
    while (libres(sala) > 0) {
        cout << "Cantidad de entradas: ";
        cin >> nAsientos;
        if (nAsientos > libres(sala)) {
            cout << "Lo siento, no hay tantos asientos libres\n";
        } else {
            int nFilas = filasLibres(sala, nAsientos, posiblesFilas);
            if (nFilas > 0) {
               int f = posiblesFilas[nFilas - 1];
               reservaFila(sala, f, nAsientos, asientos);
               cout << "Asientos reservados: ";
               for (int i = 0; i < nAsientos; i++)
                   cout << asientos[i] << " ";
               cout << endl;
           } else {
               reservaAsientos(sala, nAsientos, asientos);
               cout << "Asientos reservados: ";
               for (int i = 0; i < nAsientos; i++)
                   cout << asientos[i] << " ";
               cout << endl;
           }
        }
        visualiza(sala);
    }
    return 0;
}
