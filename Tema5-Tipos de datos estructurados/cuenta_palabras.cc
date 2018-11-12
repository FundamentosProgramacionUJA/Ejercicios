/* ---------------------------------------------------------------------------
 * Programa: cuenta_palabras
 * Entradas: Una línea de texto, las distintas palabras de la línea vienen
 *           separadas por uno o varios espacios en blanco
 * Salidas:  Número de palabras de la línea
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>
using namespace std;

int main () {
	string linea;
	cout << "Introduce una línea: ";
	getline (cin, linea);
	int npalabras = 0;
	for (int i = 0; i < linea.length (); ++i) {
		if (linea[i] != ' ') {
            		if (i == 0)
                		npalabras++;
            		else if (linea[i-1] == ' ')
                		npalabras++;
		}
	}
	cout << "Número de palabras: " << npalabras << '\n';

	/* A continuación se resuelve de otra forma. La idea es mantener un estado sobre si estamos
	   procesando una secuencia de espacios o una secuencia de "no espacios".
	   El estado del procesamiento lo alamacena la variable espacio.
	*/
	npalabras = 0;
	bool espacio = true; // estado del procesamiento
	for (int i = 0; i < linea.length (); ++i) {
        if (linea[i] != ' ' && espacio) {
            espacio = false;
            npalabras++;
        } else if (linea[i] == ' ' && !espacio) {
            espacio = true;
        }
	}
	cout << "Número de palabras: " << npalabras << '\n';

	return 0;
}
