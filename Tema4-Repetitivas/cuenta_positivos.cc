#include <iostream>
using namespace std;

/* ----------------------------------------------------------------------
 * Programa: CuentaPositivos
 * Entradas: Una serie de n�meros terminada con el n�mero cero
 * Salidas: La cantidad de n�meros introducidos que son mayores que cero
 * ---------------------------------------------------------------------- */

int main ()
{
	double valor;
	int cont = 0;
	cout << "Introduzca un n�mero (0 para terminar): ";
	cin >> valor;
	while (valor != 0) {
		if (valor > 0)
			cont++;
		cout << "Introduzca un n�mero (0 para terminar): ";
		cin >> valor;
	}
	cout << "El n�mero de valores positivos introducidos es " << cont << '\n';
	return 0;
}

