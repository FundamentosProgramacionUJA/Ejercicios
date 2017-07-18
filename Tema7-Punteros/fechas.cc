#include <iostream>

using namespace std;

struct Fecha {
	int dia, mes, anio;
};

/* Descripción: Solicita una fecha en la salida estándar y la lee de la entrada estándar
 * Parámetros de salida:
 * - f: puntero a la fecha leída de la entrada estándar
 */
void lecturaFecha (Fecha* f)
{
	cout << "Introduzca el día, mes y año separados por espacios: ";
	cin >> f->dia >> f->mes >> f->anio;
}

/* Descripción: Envía a la salida estándar una fecha con el formato día/mes/año
 * Parámetros de entrada:
 * - f: puntero a la fecha
 */
void muestra (const Fecha* f)
{
	cout << f->dia << '/' << f->mes << '/' << f->anio;
}

/* Descripción: Calcula si una fecha es anterior a otra
 * Parámetros de entrada:
 * - f1: puntero a la primera fecha
 * - f2: puntero a la segunda fecha
 * Valor de retorno: un valor lógico indicando si *f1 es anterior a *f2.
 */
bool fechaAnterior (const Fecha* f1, const Fecha* f2)
{
	return (f1->anio < f2->anio) ||
	       (f1->anio == f2->anio && f1->mes < f2->mes) ||
	       (f1->anio == f2->anio && f1->mes == f2->mes && f1->dia < f2->dia);
}

/* Descripción: Calcula si un año es bisiesto
 * Parámetros de entrada:
 * - anio: El año a calcular si es bisiesto
 * Valor de retorno: verdadero si el año es bisiesto y falso en otro caso.
 */
bool bisiesto (int anio)
{
	return (anio % 4 == 0) && (!(anio % 100 == 0) || (anio % 400 == 0));
}

/* Descripción: Incrementa una fecha en un año
 * Parámetros de entrada y salida:
 * - f: un puntero a la fecha cuyo año se incrementa
 */
void incrementaAnio (Fecha* f)
{
	if (bisiesto (f->anio) && f->mes == 2 && f->dia == 29)
		f->dia = 28; // un año después del 29/2/xxxx es el 28/2/xxxx+1. También valdría 1/3/xxxx+1
	f->anio += 1;
}

int main ()
{
	Fecha f1;
	lecturaFecha (&f1);
	Fecha f2;
	lecturaFecha (&f2);
	cout << "La fecha "; muestra (&f1); cout << " es ";
	cout << (fechaAnterior (&f1, &f2) ? "anterior" : "posterior");
	cout << " a la fecha "; muestra (&f2); cout << endl;
	incrementaAnio (&f1);
	cout << "La primera fecha incrementada un año es: "; muestra (&f1); cout << endl;
	return 0;
}
