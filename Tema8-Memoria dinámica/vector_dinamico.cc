#include <iostream>

using namespace std;

struct vectordin{
    int* p;  // puntero a la memoria dinámica
    int tl;  // tamaño lógico del vector
    int tf;  // tamaño físico del vector (número de elementos reservados)
};

/* Descripción: Inicia un vector dinámico
 * Parámetros de entrada:
 * - v: el vector
 * - tam: el tamaño físico del vector
 */
void inicia(vectordin& v, int tam)
{
    v.tl = 0;
    v.tf = tam;
    v.p = new int[tam];
}

/* Descripción: Consulta un elemento del vector
 * Parámetros de entrada:
 * - v: el vector
 * - pos: el índice del elemento a consultar
 * Precondiciones: pos es una posición válida del vector
 * Valor de retorno: el elemento consultado
 */
int consulta(const vectordin& v, int pos)
{
	return v.p[pos];
}

/* Descripción: Destruye un vector dinámico
 * Parámetros de entrada y salida:
 * - v: el vector
 */
void destruye(vectordin& v)
{
    delete[] v.p;
    v.tl = 0;
    v.tf = 0;
}

/* Descripción: Añade un dato al final del vector
 * Parámetros de entrada y salida:
 * - v: el vector
 * Parámetros de entrada:
 * - dato: el dato a insertar
 */
void mete(vectordin& v, int dato)
{
	if (v.tl < v.tf) {
	    v.p[v.tl] = dato;
        v.tl++;
    } else {
        int* tmp = new int[v.tf + 5];
        for (int i = 0; i < v.tf; i++)
            tmp[i] = v.p[i];
        delete[] v.p;
        v.p = tmp;
        v.tf += 5;
        v.p[v.tl] = dato;
        v.tl++;
    }
}

int main ()
{
    vectordin v;
    inicia(v, 5);
    int dato;
    cout << "Introduce un entero (negativo para terminar): ";
    cin >> dato;
    while (dato >= 0) {
        mete(v, dato);
        cout << "Introduce un entero (negativo para terminar): ";
        cin >> dato;
    }

    for (int i = 0; i < v.tl; i++)
        cout << consulta(v, i) << endl;
	destruye(v);
	return 0;
}
