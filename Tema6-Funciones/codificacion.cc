#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct CodCar {
	char car; // carácter
	char cod; // su codificación
};
const int TAM = 26;
// Una codificación será un vector (de tamaño 26, alfabeto inglés) de estructuras CodCar. Por ejemplo: CodCar cod[TAM];

/* Descripción: Lee una codificación de la entrada estándar.
 * Parámetros de entrada:
 *   - tam: tamaño del vector cod
 * Parámetros de salida:
 *   - cod: vector donde se guarda la codificación
 */
void leeCodificacion (CodCar cod[], int tam)
{
	for (int i = 0; i < tam; ++i) {
		cout << "Introduzca una letra y su codificiación separada por un espacio: ";
		cin >> cod[i].car >> cod[i].cod;
	}
}

/* Descripción: Dada una posible codificación calcula si es correcta.
 * Parámetros de entrada:
 *   - cod: vector donde se guarda la codificación
 *   - tam: tamaño del vector cod
 * Valor de retorno: valor lógico indicando si la codificación es correcta
 */
bool correcta (const CodCar cod[], int tam)
{
	if (tam != TAM)
		return false;
	string caracteres = "abcdefghijklmnopqrstuvwxyz";
	int ocu[TAM];
	for (int i = 0; i < TAM; ++i) 
		ocu[i] = 0;
	for (int i = 0; i < TAM; ++i)
		for (int j = 0; j < TAM; ++j)
			if (caracteres[i] == cod[j].car)
				ocu[i]++;
	for (int i = 0; i < TAM; ++i)
		if (ocu[i] != 1)
			return false;
	for (int i = 0; i < TAM; ++i)
		for (int j = 0; j < TAM; ++j)
			if (caracteres[i] == cod[j].cod)
				ocu[i]++;
	for (int i = 0; i < TAM; ++i)
		if (ocu[i] != 2)
			return false;
	return true;
}

/* Descripción: Dada una codificación y una cadena la traduce utilizando la codificación. Los caracteres que no forman parte
 *              de la codificación se dejan sin modificar.
 * Parámetros de entrada:
 *   - cod: vector con la codificación
 *   - tam: tamaño del vector cod
 * Parámetros de entrada y salida:
 *   - cadena: cadena a traducir
 * Precondiciones: la codificación es correcta
 */
void traduce (string& cadena, const CodCar cod[], int tam)
{
	for (int i = 0; i < cadena.length (); ++i) {
		for (int j = 0; j < tam; j++) {
			if (cadena[i] == cod[j].car) {
				cadena[i] = cod[j].cod;
				break;
			}
		}
	}
}

/* Descripción: Dada una codificación, lee líneas de la entrada estándar y las escribe codificadas en la salida estándar.
 * Parámetros de entrada:
 *   - cod: vector con la codificación
 *   - tam: tamaño del vector cod
 * Precondiciones: la codificación es correcta
 */
void traduceLineas (const CodCar cod[], int tam)
{
	string linea;
	cout << "Introduzca una línea (FIN para terminar): ";
	cin >> linea;
	while (linea != "FIN") {
		traduce (linea, cod, tam);
		cout << linea << '\n';
		cout << "Introduzca una línea (FIN para terminar): ";
		cin >> linea;
	}
}

int main()
{
	CodCar cod[TAM] = { {'a','b'}, {'b','c'}, {'c','d'}, {'d','e'}, {'e','f'}, {'f','g'}, {'g','h'}, {'h','i'}, {'i','j'}, {'j','k'}, {'k','l'},
	                    {'l','m'}, {'m','n'}, {'n','o'}, {'o','p'}, {'p','q'}, {'q','r'}, {'r','s'}, {'s','t'}, {'t','u'}, {'u','v'}, {'v','w'},
					    {'w','x'}, {'x','y'}, {'y','z'}, {'z','a'} }; // codificación por defecto
	char respuesta;
	do {
		cout << "¿Quiere trabajar con la codificación por defecto (s/n): ";
		cin >> respuesta;
	} while (respuesta != 's' && respuesta != 'n');
	if (respuesta == 'n')
		leeCodificacion (cod, TAM);
	if (correcta (cod, TAM))
		traduceLineas (cod, TAM);
	else
		cout << "La codificación es incorrecta\n";
	return 0;
}
