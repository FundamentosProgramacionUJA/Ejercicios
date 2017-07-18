#include <iostream>

using namespace std;

struct Fecha {
	int dia, mes, anio;
};

/* Descripción: Calcula si un año es bisiesto
 * Parámetros de entrada:
 *   - anio: El año a calcular si es bisiesto
 * Valor de retorno: Un valor lógico indicando si el año es bisiesto
 */
bool bisiesto (int anio)
{
	return (anio % 4 == 0) && (!(anio % 100 == 0) || (anio % 400 == 0));
}

/* Descripción: Calcula si una fecha es correcta
 * Parámetros de entrada:
 *   - f: la fecha a calcular si es correcta
 * Valor de retorno: Un valor lógico indicando si la fecha es correcta
 */
bool fechaCorrecta (const Fecha& f)
{
	int maxdiasmes;
	switch (f.mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			maxdiasmes = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			maxdiasmes = 30;
			break;
		case 2:
			maxdiasmes = bisiesto (f.anio) ? 29 : 28;
			break;
		default:
			return false; // mes no válido
			break;
	}
	if (f.dia < 1 || f.dia > maxdiasmes)
		return false;
	return true;
}

/* Descripción: Solicita una fecha en la salida estándar y lee la fecha de la entrada estándar hasta que se introduce 
 *              una fecha correcta
 * Parámetros de salida:
 *   - f: la fecha correcta leída de la entrada estándar
 */
void lecturaFecha (Fecha& f)
{
	do {
		cout << "Introduzca el día, mes y año separados por espacios: ";
		cin >> f.dia >> f.mes >> f.anio;
	} while (!fechaCorrecta (f));
}

/* Descripción: Envía a la salida estándar una fecha con el formato día/mes/año
 * Parámetros de entrada:
 *   - f: la fecha
 */
void muestra (const Fecha& f)
{
	cout << f.dia << '/' << f.mes << '/' << f.anio;
}

/* Descripción: Calcula si una fecha es anterior a otra
 * Parámetros de entrada:
 *   - f1: la primera fecha
 *   - f2: la segunda fecha
 * Valor de retorno: un valor lógico indicando si f1 es anterior a f2.
 */
bool fechaAnterior (const Fecha& f1, const Fecha& f2)
{
	return (f1.anio < f2.anio) ||
	       (f1.anio == f2.anio && f1.mes < f2.mes) ||
	       (f1.anio == f2.anio && f1.mes == f2.mes && f1.dia < f2.dia);
}

/* Descripción: Incrementa una fecha en un año. Si la fecha se corresponde con un 29 de Febrero, entonces se supone 
 *              que un año después es el 28 de Febrero y no el 1 de Marzo.
 * Parámetros de entrada y salida:
 *   - f: la fecha cuyo año se incrementa
 */
void incrementaAnio (Fecha& f)
{
	if (bisiesto (f.anio) && f.dia == 29)
		f.dia = 28;
	f.anio++;
}

int main ()
{
	Fecha f1;
	lecturaFecha (f1);
	Fecha f2;
	lecturaFecha (f2);
	cout << "La fecha "; muestra (f1); cout << " es ";
	if (fechaAnterior (f1, f2))
		cout << "anterior";
	else
		cout << "posterior";
	cout << " a la fecha "; muestra (f2); cout << endl;
	incrementaAnio (f1);
	cout << "La primera fecha incrementada un año es: "; muestra (f1); cout << endl;
	return 0;
}
