#include <iostream>
#include <string>

using namespace std;

/* Descripción: Calcula la letra asociada a un número de DNI.
 * Parámetros de entrada:
 *   - num: un número de dni
 * Valor de retorno: la letra asociada al número de dni num
 */
char letraDNI(int num)
{
	string letras = "TRWAGMYFPDXBNJZSQVHLCKE";
	return letras[num % 23];
}

int main() {
	int dni;
	char letra_dni;
	do {
		cout << "Introduzca el número de DNI: ";
		cin >> dni;
		cout << "Introduzca la letra del DNI: ";
		cin >> letra_dni;
	} while (letraDNI (dni) != letra_dni);
	return 0;
}
