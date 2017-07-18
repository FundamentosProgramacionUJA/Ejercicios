#include <iostream>
#include <string>

using namespace std;

/* Descripción: Muestra en la salida estándar las opciones del menú recibido en el vector opciones.
 *              Cada cadena del vector cadena indica una opción. Lee de la entrada estándar la opción
 *              elegida por el usuario hasta que se introduce una opción válida. Las opciones válidas
 *              son los enteros en el rango [0, nopciones-1]
 * Parámetros de entrada:
 *   - opciones: un vector con las distintas opciones del menú
 *   - nopciones: el tamaño del vector opciones, es decir, el número de opciones del menú
 * Valor de retorno: la opción elegida por el usuario (estará en el rango [0, nopciones-1])
 */
int menu (const string opciones[], int nopciones)
{
	int op;
	do {
		for (int i = 0; i < nopciones; i++)
			cout << i << ". " << opciones[i] << '\n';
		cout << "Elija una opción: ";
		cin >> op;
	} while (op < 0 || op >= nopciones);
	return op;
}

int main ()
{
	const int NOPCIONES = 3;
	const string opmenu[NOPCIONES] = { "Introducir palabra", "Adivinar palabra", "Salir" };
	const int NUMMAXFALLOS = 6;
	string palabra;
	string rellenado;
	int fallos;
	bool acertada;
	bool sePuedeJugar = false;
	int opMenu;
	char letra;
	do {
		opMenu = menu (opmenu, NOPCIONES);
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
