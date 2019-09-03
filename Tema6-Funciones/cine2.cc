#include <iostream>
using namespace std;

const int NFILAS = 10;
const int NCOL = 10;
const int NSALAS = 5;

/* Descripción: Pone a libres todos los asientos de un cine
 * Parámetros de entrada y salida:
 *   - cine: El array representando al cine
 *   - nsalas: el número de salas que contiene el cine
 */
void inicia(bool cine[][NFILAS][NCOL], int nsalas) {
    for (int s = 0; s < nsalas; s++)
        for (int f = 0; f < NFILAS; f++)
            for (int c = 0; c < NCOL; c++)
                cine[s][f][c] = true;
}

/* Descripción: Muestra en la salida estándar la ocupación del cine
 * Parámetros de entrada:
 *   - cine: El array representando al cine
 *   - nsalas: el número de salas que contiene el cine
 */
void visualiza(bool cine[][NFILAS][NCOL], int nsalas) {
    for (int f = 0; f < NFILAS; f++) {
        for (int s = 0; s < nsalas; s++) {
            cout << f << ": ";
            for (int c = 0; c < NCOL; c++) {
                if (cine[s][f][c])
                    cout << "L ";
                else
                    cout << "O ";
            }
            cout << " ";
        }
        cout << endl;
    }
}

/* Descripción: Cuenta el número de asientos libres en una sala
 * Parámetros de entrada:
 *   - cine: El array representando al cine
 *   - sala: El número de sala
 * Precondiciones: el número de sala es correcto
 * Valor de retorno: el número de asientos libres en la sala
 */
int libres(const bool cine[][NFILAS][NCOL], int sala) {
    int lib = 0;
    for (int f = 0; f < NFILAS; f++) {
        for (int c = 0; c < NCOL; c++) {
            if (cine[sala][f][c])
                lib++;
        }
    }
    return lib;
}

/* Descripción: Cuenta el número de asientos libres en un cine
 * Parámetros de entrada:
 *   - cine: El array representando al cine
 *   - nsalas: El número de salas del cine
 * Valor de retorno: el número de asientos libres en el cine
 */
int libresTotal(const bool cine[][NFILAS][NCOL], int nsalas) {
    int lib = 0;
    for (int s = 0; s < nsalas; s++)
        lib += libres(cine, s);
    return lib;
}
/* Descripción: Calcula las filas que tienen un cierto número de asientos libres en una sala
 * Parámetros de entrada:
 *   - cine: El array representando al cine
 *   - sala: El número de sala
 *   - n: número de asientos
 * Parámetros de salida:
 *   - filas: vector con los números de filas que contienen n asientos libres
 * Precondiciones: el número de sala es correcto
 * Valor de retorno: número de filas con n asientos libres
 */
int filasLibres(const bool cine[][NFILAS][NCOL], int sala, int n, int filas[]) {
    int nFilas = 0;
    for (int f = 0; f < NFILAS; f++) {
        int libres = 0;
        for (int c = 0; c < NCOL; c++) {
            if (cine[sala][f][c])
                libres++;
        }
        if (libres >= n) {
            filas[nFilas] = f;
            nFilas++;
        }
    }
    return nFilas;
}

/* Descripción: Reserva n asientos en una fila de una sala
 * Parámetros de entrada:
 *   - sala: la sala
 *   - f: fila
 *   - n: número de asientos
 * Parámetros de salida:
 *   - reservados: vector con los números de asientos reservados
 * Parámetros de entrada y salida:
 *   - cine: El array representando al cine
 * Precondiciones: la sala y la fila es correcta y contiene al menos n asientos libres
 */
void reservaFila(bool cine[][NFILAS][NCOL], int sala, int f, int n, int reservados[]) {
    int nReservados = 0; // número de asientos reservados
    for (int c = 0; c < NCOL && nReservados < n; c++) {
        if (cine[sala][f][c]) {
            cine[sala][f][c] = false;
            reservados[nReservados] = c + f * 10;
            nReservados++;
        }
    }
}

/* Descripción: Si hay al menos n asientos libres en una sala los reserva
 * Parámetros de entrada:
 *   - sala: el número de sala
 *   - n: número de asientos
 * Parámetros de salida:
 *   - reservados: vector con los números de asientos reservados
 * Parámetros de entrada y salida:
 *   - cine: El array representando al cine
 * Precondiciones: el número de sala es correcto
 * Valor de retorno: un valor lógico indicando si la sala contiene al menos n
 *                   asientos libres
 */
bool reservaAsientos(bool cine[][NFILAS][NCOL], int sala, int n, int reservados[]) {
    if (libres(cine, sala) < n)
        return false;
    int nReservados = 0; // número de asientos reservados
    for (int f = 0; f < NFILAS && nReservados < n; f++) {
        for (int c = 0; c < NCOL && nReservados < n; c++) {
            if (cine[sala][f][c]) {
                cine[sala][f][c] = false;
                reservados[nReservados] = c + f * 10;
                nReservados++;
            }
        }
    }
    return true;
}

int main() {
    bool cine[NSALAS][NFILAS][NCOL];
    int nsalas;
    do {
        cout << "Introduce número de salas (máximo " << NSALAS << "): ";
        cin >> nsalas;
    } while (nsalas < 1 || nsalas > NSALAS);
    inicia(cine, nsalas);
    visualiza(cine, nsalas);
    int posiblesFilas[NFILAS];
    int asientos[NFILAS*NCOL];
    int nAsientos;
    int sala;
    while (libresTotal(cine, nsalas) > 0) {
        do {
          cout << "Introduce la sala: ";
          cin >> sala;
        } while (sala < 0 || sala >= nsalas);
        cout << "Cantidad de entradas: ";
        cin >> nAsientos;
        if (nAsientos < 0)
            break;
        if (nAsientos > libres(cine, sala)) {
            cout << "Lo siento, no hay tantos asientos libres en dicha sala\n";
        } else {
            int nFilas = filasLibres(cine, sala, nAsientos, posiblesFilas);
            if (nFilas > 0) {
               int f = posiblesFilas[nFilas - 1];
               reservaFila(cine, sala, f, nAsientos, asientos);
               cout << "Asientos reservados: ";
               for (int i = 0; i < nAsientos; i++)
                   cout << asientos[i] << " ";
               cout << endl;
           } else {
               reservaAsientos(cine, sala, nAsientos, asientos);
               cout << "Asientos reservados: ";
               for (int i = 0; i < nAsientos; i++)
                   cout << asientos[i] << " ";
               cout << endl;
           }
        }
        visualiza(cine, nsalas);
    }
    return 0;
}
