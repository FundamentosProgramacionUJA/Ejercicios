/* ---------------------------------------------------------------------------
 * Programa: ahorcado2
 * Entradas: Un ínidce de palabra y distintas letras de la palabra
 * Salidas:  Se indica si se acertaron las letras de la palabra tras un número
 *           máximo de intentos
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>

using namespace std;

int main () {
    const int NUMPAL = 6;
    string palabras[NUMPAL] = {"ordenador", "cuchara", "letra", "lima", "calendario", "espina"};
	const int NUMMAXFALLOS = 6;
	int indice;
	string palabra;
	string rellenado;
	int fallos;
	bool acertada;
	bool sePuedeJugar = false;
	int opMenu;
	char letra;
	do {
		// muestra el menú
		cout << "1. Introducir palabra\n";
		cout << "2. Adivinar palabra\n";
		cout << "3. Salir\n";
		cout << "Elija una opción: ";
		cin >> opMenu;
		switch (opMenu) {
			case 1:
			    do {
				    cout << "Índice de palabra (0-" << NUMPAL << "): ";
				    cin >> indice;
			    } while (indice < 0 || indice >= NUMPAL);
			    palabra = palabras[indice];
				sePuedeJugar = true;
				break;
			case 2:
				if (!sePuedeJugar) {
					cout << "Debe introducir antes una palabra\n";
					break;
				}
				// se procede a jugar
				fallos = 0;
				rellenado = palabra;
				for (int i = 0; i < rellenado.length (); i++)
					rellenado[i] = '-';
				while (fallos < NUMMAXFALLOS && palabra != rellenado) {
					cout << rellenado << endl; // se muestra el fragmento de palabra acertada
					cout << "Introduzca una letra: ";
					cin >> letra;
					bool exito = false;
					for (int i = 0; i < palabra.length (); i++) {
						if (palabra[i] == letra) {
							rellenado[i] = palabra[i];
							exito = true;
						}
					}
					if (!exito) {
						fallos++;
						cout << "No está. Ya lleva " << fallos << " intentos\n";
					}
				}
				if (fallos < NUMMAXFALLOS)
					cout << "Ha acertado la palabra con sólo " << fallos << " fallos\n";
				else
					cout << "Lo siento, la palabra es: " << palabra << '\n';
				break;
		}

	} while (opMenu != 3);
	return 0;
}
