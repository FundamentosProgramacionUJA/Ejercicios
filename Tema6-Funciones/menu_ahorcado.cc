#include <iostream>
#include <string>

using namespace std;

/* Descripción: Muestra un menú con las opciones: 0. Introducir palabra
 *                                                1. Adivinar palabra
 *                                                2. Salir
 *              Lee la opción elegida por el usuario hasta que se introduce una opción válida.
 * Valor de retorno: la opción elegida por el usuario
 */
int menu ()
{
	int op;
	do {
		cout << "0. Introducir palabra\n";
		cout << "1. Adivinar palabra\n";
		cout << "2. Salir\n";
		cout << "Elija una opción: ";
		cin >> op;
	} while (op < 0 || op > 2);
	return op;
}

int main ()
{
	const int NUMMAXFALLOS = 6;
	string palabra;
	string rellenado;
	int fallos;
	bool acertada;
	bool sePuedeJugar = false;
	int opMenu;
	char letra;
	do {
		opMenu = menu ();
		switch (opMenu) {
			case 0:
				cout << "Palabra: ";
				cin >> palabra;
				sePuedeJugar = true;
				break;
			case 1:
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
		
	} while (opMenu != 2);
	return 0;
}
