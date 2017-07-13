/* ---------------------------------------------------------------------------
 * Programa: lee_lineas
 * Entradas: Una serie de líneas de texto
 * Salidas:  - La línea más larga (si no se introduce ninguna se muestra una cadena vacía)
 *           - La línea menor lexicográficamente (si no se introduce ninguna se
 *             muestra la cadena FIN)
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	const string CENTINELA = "FIN";
	string masLarga = ""; // tiene longitud 0
	string linea;

	cout << "Introduzca una línea (" << CENTINELA << " para acabar): ";
	getline (cin, linea);
	string menor = linea; // se inicia la menor a la primera línea leída
	while (linea != CENTINELA) {
		if (linea.length () > masLarga.length ())
			masLarga = linea;
		if (linea < menor)
			menor = linea;
		cout << "Introduzca una línea (" << CENTINELA << " para acabar): ";
		getline (cin, linea);
	}

	cout << "Línea más larga: " << masLarga << endl;
	cout << "Línea menor lexicográficamente: " << menor << endl;
	return 0;
}
