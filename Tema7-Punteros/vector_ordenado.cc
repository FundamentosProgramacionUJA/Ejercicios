#include <iostream>
#include <string>

using namespace std;

struct Persona {
	string nombre;
	int edad;
};

/* Descripción: Envía a la salida estándar una persona en una línea con el formato nombre(edad)
 * Parámetros de entrada:
 * - p: puntero a la persona
 */
void muestra (const Persona* p)
{
	cout << p->nombre << " (" << p->edad << ")\n";
}

int main ()
{
	const int TAM = 4;
	Persona v[TAM] = { {"Daniel", 20}, {"Luis", 17}, {"Eduardo", 19}, {"Ana", 18} };

	Persona* von[TAM] = { &v[3], &v[0], &v[2], &v[1] };
	cout << "Ordenados por nombre:\n";
	for (int i = 0; i < TAM; i++)
		muestra (von[i]);
	
	Persona* voe[TAM] = { &v[1], &v[3], &v[2], &v[0] };
	cout << "\nOrdenados por edad:\n";
	for (int i = 0; i < TAM; i++)
		muestra (voe[i]);
	return 0;
}
