#include <iostream>
using namespace std;

const int NFILAS = 10;
const int NCOL = 10;

/* Descripci�n: Pone a libres todos los asientos de una sala
 * Par�metros de entrada y salida:
 *   - sala: La matriz representando la sala de cine
 */
void inicia(bool sala[][NCOL]) {
    for (int f = 0; f < NFILAS; f++)
        for (int c = 0; c < NCOL; c++)
            sala[f][c] = true;
}

/* Descripci�n: Muestra en la salida est�ndar la sala de cine
 * Par�metros de entrada:
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

/* Descripci�n: Cuenta el n�mero de asientos libres en la sala
 * Par�metros de entrada:
 *   - sala: La matriz representando la sala de cine
 * Valor de retorno: el n�mero de asientos libres
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

/* Descripci�n: Calcula las filas que tienen un cierto n�mero de asientos libres
 * Par�metros de entrada:
 *   - sala: La matriz representando la sala de cine
 *   - n: n�mero de asientos
 * Par�metros de salida:
 *   - filas: vector con los n�meros de filas que contienen n asientos libres
 * Valor de retorno: n�mero de filas con n asientos libres
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

/* Descripci�n: Reserva n asientos en una fila
 * Par�metros de entrada:
 *   - f: fila
 *   - n: n�mero de asientos
 * Par�metros de salida:
 *   - reservados: vector con los n�meros de asientos reservados
 * Par�metros de entrada y salida:
 *   - sala: La matriz representando la sala de cine
 * Precondiciones: la fila es correcta y contiene al menos n asientos libres
 */
void reservaFila(bool sala[][NCOL], int f, int n, int reservados[]) {
    int nReservados = 0; // n�mero de asientos reservados
    for (int c = 0; c < NCOL && nReservados < n; c++) {
        if (sala[f][c]) {
            sala[f][c] = false;
            reservados[nReservados] = c + f * 10;
            nReservados++;
        }
    }
}

/* Descripci�n: Si hay al menos n asientos libres los reserva
 * Par�metros de entrada:
 *   - n: n�mero de asientos
 * Par�metros de salida:
 *   - reservados: vector con los n�meros de asientos reservados
 * Par�metros de entrada y salida:
 *   - sala: La matriz representando la sala de cine
 * Valor de retorno: un valor l�gico indicando si la sala contiene al menos n
 *                   asientos libres
 */
bool reservaAsientos(bool sala[][NCOL], int n, int reservados[]) {
    if (libres(sala) < n)
        return false;
    int nReservados = 0; // n�mero de asientos reservados
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
