#include <iostream>
#include <string>

using namespace std;

struct Persona {
	string nombre;
	string dni;
	int edad;
};

/* Descripción: Calcula la primera posición del vector que contiene una persona cuyo DNI es igual o
 *              mayor que dni.
 * Parámetros de entrada:
 *   - dni: DNI utilizado para buscar la posición
 *   - v: vector con las personas
 *   - tamv: número de elementos de v
 * Precondiciones:
 *   - El vector v está ordenado por el DNI de las personas
 * Valor de retorno: La primera posición de v con una persona cuyo DNI es mayor o igual que dni. Si
 *                   no existe tal posición, es decir, si dni es mayor que todos los DNIs de las
 *                   personas del vector, devuelve tamv.
 */
int posicion(string dni, const Persona v[], int tamv)
{
	for (int i = 0; i < tamv; i++)
		if (v[i].dni >= dni)
			return i;
	return tamv;
}

/* Descripción: Desplaza una posición a la derecha a todos los elementos de un vector cuyo índice
 *              es igual a superior al índice pos
 * Parámetros de entrada:
 *   - pos: la posición del vector a partir de la cual se desplazan los elementos
 *   - tamv: número de elementos de v
 * Parámetros de entrada y salida:
 *   - v: el vector de datos de tipo Persona
 * Precondiciones:
 *   - El vector v tiene reservadas al menos tamv+1 posiciones
 */
void desplazaDer(int pos, Persona v[], int tamv)
{
	for (int i = tamv-1; i >= pos; i--)
		v[i+1] = v[i];
}

/* Descripción: Desplaza una posición a la izquierda a todos los elementos de un vector cuyo índice
 *              es mayor que el índice pos
 * Parámetros de entrada:
 *   - pos: la posición del vector a partir de la cual se desplazan los elementos
 *   - tamv: número de elementos de v
 * Parámetros de entrada y salida:
 *   - v: el vector de datos de tipo Persona
 */
void desplazaIzq(int pos, Persona v[], int tamv)
{
	for (int i = pos+1; i < tamv; i++)
		v[i-1] = v[i];
}

/* Descripción: Muestra en la salida estándar los elementos de un vector de personas
 * Parámetros de entrada:
 *   - v: vector con las personas
 *   - tamv: número de elementos de v
 */
void muestra(const Persona v[], int tamv)
{
	for (int i = 0; i < tamv; i++)
		cout << v[i].nombre << " --- " << v[i].dni << " --- " << v[i].edad << '\n';
}

/* Descripción: Lee de la entrada estándar los datos de una persona. El rango de edad admitida es
 *              [0,150]
 * Parámetros de salida:
 *   - per: estructura en la que se devuelve la persona leída
 */
void leePersona (Persona& per)
{
	cout << "Introduzca el nombre de la persona: ";
	getline (cin >> ws, per.nombre);
	cout << "Introduzca su DNI: ";
	cin >> per.dni;
	do {
		cout << "Introduzca su edad: ";
		cin >> per.edad;
	} while (per.edad < 0 || per.edad > 150);
}

/* Descripción: Muestra un menú con las opciones: 0. Introducir persona
 *                                                1. Eliminar persona
 *                                                2. Mostrar contenido del vector
 *                                                3. Salir.
 *              Lee la opción elegida por el usuario hasta que se introduce una opción válida.
 * Valor de retorno: la opción elegida por el usuario
 */
int menu ()
{
	int op;
	cout << "*******************************\n";
	cout << "0. Introducir persona\n";
	cout << "1. Eliminar persona\n";
	cout << "2. Mostrar contenido del vector\n";
	cout << "3. Salir\n";
	cout << "*******************************\n";
	do {
		cout << "Elija una opción: ";
		cin >> op;
	} while (op < 0 || op > 3);
	return op;
}

int main ()
{
	const int TAMMAX = 50;
	Persona v[TAMMAX];
	int tamv = 0; // tamaño lógico de v, es decir, número de elementos introducidos que contiene

	int opcion = 0;
	while (opcion != 3) {
		opcion = menu ();
		switch (opcion) {
			case 0: {
				if (tamv == TAMMAX) {
					cout << "Lo siento, el vector está lleno\n";
					break;
				}
				Persona p;
				leePersona (p);
				int pos = posicion (p.dni, v, tamv);
				if (v[pos].dni == p.dni) {
					cout << "Lo siento, ya existe una persona con ese DNI en el vector\n";
					break;
				}
				if (pos < tamv)
					desplazaDer (pos, v, tamv);
				v[pos] = p;
				tamv++;
				break;
			}
			case 1: {
				cout << "Introduzca el DNI de la persona a eliminar: ";
				string dni;
				cin >> dni;
				int pos = posicion (dni, v, tamv);
				if (v[pos].dni == dni) {
					desplazaIzq (pos, v, tamv);
					tamv--;
					cout << "Persona eliminada\n";
				} else {
					cout << "No existe una persona con el DNI " << dni << " en el vector\n";
				}
				break;
			}
			case 2: {
				muestra (v, tamv);
				break;
			}
		}
	}

	return 0;
}
