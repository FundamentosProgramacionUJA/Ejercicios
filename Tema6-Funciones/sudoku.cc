#include <iostream>
#include <fstream>

using namespace std;

/* Descripcion: Calcula si una fila de un Sudoku es correcta.
 * Parámetros de entrada:
 *   - sud: matriz con el sudoku
 *   - f: la fila a comprobar
 * Precondiciones:
 *   - Se supone que todos elementos de una fila son números en el rango [1,9]
 * Valor de retorno: un valor de tipo lógico indicando si la fila f del Sudoku sud es correcta
 */
bool filaCorrecta (const int sud[9][9], int f)
{
	bool val[9]; // val[i] almacena si el número i+1 aparece en la fila f del sudoku
	for (int i = 0; i < 9; i++)
		val[i] = false;
	for (int i = 0; i < 9; i++)
		val[sud[f][i]-1] = true;
	for (int i = 0; i < 9; i++)
		if (!val[i])
			return false;
	return true;
}

/* Descripcion: Calcula si una columna de un Sudoku es correcta.
 * Parámetros de entrada:
 *   - sud: matriz con el sudoku
 *   - c: la columna a comprobar
 * Precondiciones:
 *   - Se supone que todos elementos de una columna son números en el rango [1,9]
 * Valor de retorno: un valor de tipo lógico indicando si la columna c del Sudoku sud es correcta
 */
bool columnaCorrecta (const int sud[9][9], int c)
{
	bool val[9]; // val[i] almacena si el número i+1 aparece en la columna c del sudoku
	for (int i = 0; i < 9; i++)
		val[i] = false;
	for (int i = 0; i < 9; i++)
		val[sud[i][c]-1] = true;
	for (int i = 0; i < 9; i++)
		if (!val[i])
			return false;
	return true;
}

/* Descripcion: Calcula si una caja de un Sudoku es correcta.
 * Parámetros de entrada:
 *   - sud: matriz con el sudoku
 *   - f: primera fila de la caja a comprobar
 *   - c: primera columna de la caja a comprobar
 * Precondiciones:
 *   - Se supone que todos elementos de una fila son números en el rango [1,9]
 * Valor de retorno: un valor de tipo lógico indicando si la caja cuya primera fila y columna es f y c respectivamente 
 *                   es correcta
 */
bool cajaCorrecta (const int sud[9][9], int f, int c)
{
	bool val[9]; // val[i] almacena si el número i+1 aparece en la caja a procesar
	for (int i = 0; i < 9; i++)
		val[i] = false;
	for (int i = f; i < f+3; i++)
		for (int j = c; j < c+3; j++)
		val[sud[i][j]-1] = true;
	for (int i = 0; i < 9; i++)
		if (!val[i])
			return false;
	return true;
}

/* Descripcion: Calcula si un Sudoku es correcto.
 * Parámetros de entrada:
 *   - sud: matriz con el sudoku
 * Precondiciones:
 *   - Se supone que todos elementos de la matriz sud contiene números en el rango [1,9]
 * Valor de retorno: un valor de tipo lógico indicando si el Sudoku sud es correcto
 */
bool valido (const int sud[9][9])
{
	for (int i = 0; i < 9; i++)
		if (!filaCorrecta (sud, i))
			return false;
	for (int i = 0; i < 9; i++)
		if (!columnaCorrecta (sud, i))
			return false;
	for (int i = 0; i < 9; i = i + 3)
		for (int j = 0; j < 9; j = j + 3)
			if (!cajaCorrecta (sud, i, j))
				return false;
	return true;
}

int main () {
	int sud[9][9] = {	1, 2, 3, 4, 5, 6, 7, 8, 9,
						4, 5, 6, 7, 8, 9, 1, 2, 3,
						7, 8, 9, 1, 2, 3, 4, 5, 6,
						2, 1, 4, 3, 6, 5, 8, 9, 7,
						3, 6, 5, 8, 9, 7, 2, 1, 4,
						8, 9, 7, 2, 1, 4, 3, 6, 5,
						5, 3, 1, 6, 4, 2, 9, 7, 8,
						6, 4, 2, 9, 7, 8, 5, 3, 1,
						9, 7, 8, 5, 3, 1, 6, 4, 2 };
	cout << boolalpha << valido (sud) << endl;  
	return 0;
}
