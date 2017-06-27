#include <iostream>
using namespace std;

/* ----------------------------------------------------------------------
 * Programa: CuentaPositivos
 * Entradas: Una serie de números terminada con el número cero
 * Salidas: La cantidad de números introducidos que son mayores que cero
 * ---------------------------------------------------------------------- */

int main ()
{
	double valor;
	int cont = 0;
	cout << "Introduzca un número (0 para terminar): ";
	cin >> valor;
	while (valor != 0) {
		if (valor > 0)
			cont++;
		cout << "Introduzca un número (0 para terminar): ";
		cin >> valor;
	}
	cout << "El número de valores positivos introducidos es " << cont << '\n';
	return 0;
}

