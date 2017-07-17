/* ---------------------------------------------------------------------------
 * Programa: minusvalia
 * Entradas: Un vector de personas. Sobre cada persona se almacena su nombre
 *           y si tiene algún tipo de minusvalía
 * Salidas:  Un vector con las personas con minusvalía y otra con las personas
 *           sin minusvalía
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>

using namespace std;

struct persona {
	string nombre;
	bool minusvalia;
};

int main ()
{
	const int TAMMAX = 10000;
	persona v[TAMMAX];
	int n = 0;
	const string CENTINELA = "FIN";
	string nombre;
	char c;

	cout << "Introduzca un nombre de persona (" << CENTINELA << " para acabar): ";
	getline (cin >> ws, nombre);
	while (n < TAMMAX && nombre != CENTINELA) {
		v[n].nombre = nombre;
		do {
            		cout << "Introduzca una s o n para indicar si tiene minusvalía: ";
            		cin >> c;
		} while (c != 's' && c != 'n');
		v[n].minusvalia = c == 's';
		n++;
		cout << "Introduzca un nombre de persona (" << CENTINELA << " para acabar): ";
		getline (cin >> ws, nombre);
	}

	persona minus[TAMMAX];
	persona sinMinus[TAMMAX];
	int tMinus = 0;    // tamaño del vector minus
	int tSinMinus = 0; // tamaño del vector sinMinus
	for (int i = 0; i < n; i++) {
		if (v[i].minusvalia) {
			minus[tMinus] = v[i]; // esta línea y la siguiente se pueden codificar con la sentencia: minus[tMinus++] = v[i];
			tMinus++;
		} else {
			sinMinus[tSinMinus] = v[i];
			tSinMinus++;
		}
	}
	cout << "Personas con minusvalía:\n";
	for (int i = 0; i < tMinus; i++)
		cout << minus[i].nombre << endl;
	cout << "Personas sin minusvalía:\n";
	for (int i = 0; i < tSinMinus; i++)
		cout << sinMinus[i].nombre << endl;
	return 0;
}
