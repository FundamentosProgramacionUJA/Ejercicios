#include <iostream>
#include <string>

using namespace std;

/* Descripción: Solicita memoria dinámica para un vector de strings de un tamaño dado
 * Parámetros de entrada:
 * - tam: el tamaño del vector
 * Precondiciones: tam >= 0
 * Valor de retorno: Dirección de inicio en memoria dinámica de un vector de strings solicitado.
 *                   0, si no hay suficiente memoria dinámica para almacenar el vector.
 */
string* reserva (int tam)
{
	return new string[tam];
}

/* Descripción: Rellena un vector de strings con valores leídos de la entrada estándar
 * Parámetros de entrada:
 * - tamv: tamaño del vector
 * Parámetros de salida:
 * - v: el vector de strings
 */
void rellena (string* v, int tamv)
{
	for (int i = 0; i < tamv; i++) {
		cout << "Introduzca una cadena: ";
		getline (cin >> ws, v[i]);
	}
}

/* Descripción: Muestra en la salida estándar el contenido de un vector de strings. Muestra cada string
 *              en una línea distinta
 * Parámetros de entrada:
 * - v: el vector de strings
 * - tamv: tamaño de v
 */
void muestra (const string v[], int tamv)
{
	for (int i = 0; i < tamv; i++)
		cout << v[i] << '\n';
}

/* Descripción: Solicita memoria dinámica para un nuevo vector de strings, inicia los valores del nuevo vector con los de otro vector
 *              ubicado en memoria dinámica. La memoria ocupada por este último vector se libera
 * Parámetros de salida:
 * - v: un vector ubicado en memoria dinámica
 * Parámetros de entrada:
 * - tam: el tamaño del vector v
 * - tamnuevo: tamaño del nuevo vector ubicado en memoria dinámica
 * Precondiciones: tamnuevo >= 0
 * Valor de retorno: Dirección de inicio en memoria dinámica del nuevo vector
 */
string* traslada (string* v, int tamv, int tamnuevo)
{
	if (tamnuevo == tamv)
		return v;
	string* n = new string[tamnuevo];
	int tammin = (tamv < tamnuevo) ? tamv : tamnuevo;
	for (int i = 0; i < tammin; i++)
		n[i] = v[i];
	delete[] v;
	return n;
}

/* Descripción: Copia un vector en otro vector situado en memoria dinámica
 * Parámetros de entrada:
 * - v: el vector a copiar
 * - tam: el tamaño del vector v
 * Precondiciones: tam >= 0
 * Valor de retorno: Dirección de inicio en memoria dinámica del vector copia del vector original
 */
string* copia (const string* v, int tamv)
{
	string* n = new string[tamv];
	for (int i = 0; i < tamv; i++)
		n[i] = v[i];
	return n;
}

int main ()
{
	int tamv;
	do {
		cout << "¿Con cuántos strings quiere trabajar? ";
		cin >> tamv;
	} while (tamv < 1);
	string* v = reserva (tamv);
	rellena (v, tamv);
	cout << "Valores del vector:\n";
	muestra (v, tamv);
	int tamn;
	do {
		cout << "Introduzca un nuevo número de elementos para el vector: ";
		cin >> tamn;
	} while (tamn < 1);
	v = traslada (v, tamv, tamn);
	if (tamn > tamv)
		rellena (&v[tamv], tamn-tamv); // rellena las posiciones nuevas de v
	cout << "Valores del nuevo vector:\n";
	muestra (v, tamn);

	v[0] = "vector 1";
	string* cop = copia (v, tamn);
	cop[0] = "vector 2";
	cout << "Valores del nuevo vector modificado:\n";
	muestra (v, tamn);
	cout << "Valores de la copia modificada:\n";
	muestra (cop, tamn);
	delete[] v;
	delete[] cop;
	return 0;
}
