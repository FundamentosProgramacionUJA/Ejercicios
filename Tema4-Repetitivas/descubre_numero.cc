#include <iostream>
using namespace std;

/* Programa: DescubreNumero
 * Descripción: Este programa adivina un número que ha pensado el usuario.
 *              Cada vez que se propone al usuario el número a adivinar el
 *              usuario debe indicar si éste es igual, menor o mayor al número
 *              propuesto.
 */

int main ()
{
	int inferior = 1;
	int superior = 1000;
	int numero;
	char adivinado = 'x';
	int tentativa = 1;
	while (adivinado != 's') {
		numero = (inferior + superior) / 2;
		cout << "Tentativa " << tentativa << endl;
		cout << "¿Es el número el " << numero << "? (conteste s si es, m si es menor y M si es mayor): ";
		cin >> adivinado;
		if (adivinado != 's') {
			tentativa++;
			if (adivinado == 'm')
				superior = numero;
			else if (adivinado == 'M')
				inferior = numero;
		}
		if (tentativa == 11) {
			cout << "Me has introducido datos incoherentes\n";
			break;
		}
	}
	return 0;
}

