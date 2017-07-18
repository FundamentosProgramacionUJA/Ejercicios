#include <iostream>
#include <string>

using namespace std;

struct Persona {
	string nombre;
	int edad;
	string localidad_nac;
};

/* Descripción: Selecciona las personas que viven en una localidad
 * Parámetros de entrada:
 * - vp: vector de personas
 * - tamvp: tamaño de vp
 * - localidad: localidad de nacimiento de las personas a seleccionar
 * Parámetros de salida:
 * - tamsal: número de personas del vector vp que nacieron en la localidad recibida como parámetro
 * Valor de retorno: La dirección de inicio en memoria dinámica de un vector de tamaño tamsal que contiene a las personas
 *                   de vp que nacieron en la localidad recibida como parámetro
 */
Persona* selecciona (const Persona* vp, int tamvp, const string& localidad, int& tamsal)
{
	// se calculan el número de personas que nacieron en localidad
	tamsal = 0;
	for (int i = 0; i < tamvp; ++i)
		if (vp[i].localidad_nac == localidad)
			tamsal++;
	// se almacenan dichas personas en un vector en memoria dinámica
	Persona* vs = new Persona[tamsal];
	tamsal = 0;
	for (int i = 0; i < tamvp; ++i)
		if (vp[i].localidad_nac == localidad) {
			vs[tamsal] = vp[i]; // esta línea y la siguiente se puede codificar como: vs[tamsal++] = vp[i];
			tamsal++;
		}
	return vs;
}

int main ()
{
	const int TAM = 4;
	Persona personas[TAM] = { {"Luis", 42, "Jaén"}, {"Francisco", 23, "Granada"}, {"Ana", 14, "Jaén"}, {"Mario", 18, "Sabiote"} };
	int tamv;
	Persona* v = selecciona (personas, TAM, "Jaén", tamv);
	for (int i = 0; i < tamv; ++i)
		cout << v[i].nombre << " -- " << v[i].edad << " -- " <<  v[i].localidad_nac << '\n';
	delete[] v;
	return 0;
}
