#include <iostream>

using namespace std;

struct Fecha {
	int dia, mes, anio;
};

/* Descripción: Envía a la salida estándar una fecha con el formato día/mes/año
 * Parámetros de entrada:
 * - f: puntero a la fecha
 */
void muestra (const Fecha* f)
{
	cout << f->dia << '/' << f->mes << '/' << f->anio;
}

/* Descripción: Comprueba si dos fechas son iguales
 * Parámetros de entrada:
 * - f1: primera fecha
 * - f2: segunda fecha
 * Valor de retorno: Un valor lógico indicando si las dos fechas son iguales
 */
bool iguales (const Fecha& f1, const Fecha& f2)
{
	return f1.dia == f2.dia && f1.mes == f2.mes && f1.anio == f2.anio;
}

/* Descripción: Calcula la dirección en memoria de la primera fecha de un vector
 * Parámetros de entrada:
 * - vf: vector de fechas
 * - tamvf: número de elementos de vf
 * - f: fecha a buscar
 * Valor de retorno: la dirección de memoria del primer elemento del vector vf igual a f. El valor 0 si f no se encuentra en vf
 */
Fecha* direccion (Fecha vf[], int tamvf, const Fecha& f)
{
	for (int i = 0; i < tamvf; i++)
		if (iguales (vf[i], f))
			return &vf[i];
	return 0;
}

/* Descripción: Calcula el número de veces que una fecha está en un vector
 * Parámetros de entrada:
 * - vf: vector de fechas
 * - tamvf: número de elementos de vf
 * - f: fecha a buscar
 * Valor de retorno: Número de veces que la fecha f aparece en vf
 */
int ocurrencias (Fecha vf[], int tamvf, const Fecha& f)
{
	int nveces = 0;
	Fecha* pos = direccion (vf, tamvf, f);
	while (pos != 0) {
		nveces++;
//		cout << tamvf - (pos-&vf[0]+1) << '\n';
		pos = direccion (pos + 1, tamvf - (pos-&vf[0]+1), f);
	}
	return nveces;
}

int main ()
{
	const int TAM = 6;
	Fecha v[TAM] = { {1, 1, 1971}, {16, 4, 1970}, {20, 12, 1992}, {24, 10, 2000}, {20, 12, 1992}, {1, 10, 2010} };
	Fecha existente = {20, 12, 1992};
	Fecha inexistente = {2, 2, 2002};
	if (direccion (v, TAM, existente) != 0) {
		muestra (&existente);
		cout << " está en el vector. Posición " << (direccion (v, TAM, existente) - &v[0]) << '\n';
	}
	if (direccion (v, TAM, inexistente) == 0) {
		muestra (&inexistente);
		cout << " no está en el vector\n";
	}
	Fecha* pos = direccion (&v[TAM/2], TAM - TAM/2, existente);
	if ( pos != 0) {
		muestra (&existente);
		cout << " está en la segunda mitad del vector. Posición " << (pos - &v[0]) << '\n';
	} else {
		muestra (&existente);
		cout << " no está en el vector\n";
	}
	cout << ocurrencias (v, TAM, existente) << '\n';
	cout << ocurrencias (v, TAM, inexistente) << '\n';
	return 0;
}
