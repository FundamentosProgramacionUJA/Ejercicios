#include <iostream>
#include <string>

using namespace std;

/* Descripción: Calcula la primera posición de inicio horizontal y en el sentido de izquierda a derecha de una palabra en 
 *              una sopa de letras. 
 * Parámetros de entrada:
 *   - sl: matriz representando la sopa de letras
 *   - nfilas: número de filas de la matriz
 *   - ncol: número de columnas de la matriz
 *   - palabra: palabra a buscar
 * Parámetros de salida:
 *   - f, c: f vale -1 si la palabra no está en la sopa de letras, en otro caso (f,c) es la posición de inicio de la primera 
 *           ocurrencia horizontal y en el sentido de izquierda a derecha de la palabra en la sopa de letras
 */
void posicion (const char sl[9][9], int nfilas, int ncol, const string& palabra, int& f, int&c)
{
	for (int fila = 0; fila < nfilas; fila++) {
		for (int col = 0; col + palabra.length () <= ncol; col++) {
			bool encontrada = true;
			int pos = col;
			for (int i = 0; encontrada && i < palabra.length (); i++)
				if (palabra[i] != sl[fila][pos])
					encontrada = false;
				else
					pos++;
			if (encontrada) {
				f = fila;
				c = col;
				return;
			}
		}
	}
	f = -1;
}

int main ()
{
	const int NFILAS = 9;
	const int NCOL = 9;
	const char sopa[NFILAS][NCOL] = { 	'A', 'C', 'F', 'L', 'U', 'I', 'M', 'A', 'R',
										'B', 'M', 'T', 'U', 'M', 'D', 'I', 'F', 'G',
										'J', 'Z', 'U', 'I', 'O', 'L', 'S', 'C', 'I',
										'E', 'Z', 'S', 'S', 'B', 'A', 'O', 'L', 'S',
										'S', 'T', 'M', 'A', 'R', 'I', 'O', 'G', 'A',
										'I', 'E', 'R', 'R', 'A', 'F', 'I', 'J', 'T',
										'J', 'Z', 'U', 'I', 'O', 'L', 'S', 'C', 'I',
										'S', 'A', 'L', 'B', 'E', 'R', 'T', 'O', 'S',
										'A', 'M', 'I', 'N', 'O', 'T', 'E', 'N', 'I' };
	for (int f = 0; f < NFILAS; f++) {
		for (int c = 0; c < NCOL; c++)
			cout << sopa[f][c] << ' ';
		cout << '\n';
	}
	string palabra;
	cout << "Introduce una palabra a buscar (en mayúsculas): ";
	cin >> palabra;
	int fila, col;
	posicion (sopa, NFILAS, NCOL, palabra, fila, col);
	if (fila == -1)
		cout << "La palabra no está en la sopa de letras\n";
	else
		cout << "La primera ocurrencia horizontal comienza en la posición (" << fila << ',' << col << ")\n";
	return 0;
}
