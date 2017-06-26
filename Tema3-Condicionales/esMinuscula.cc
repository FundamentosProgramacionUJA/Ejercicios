#include <iostream>

using namespace std;

/* Programa: esMinuscula
 * Entradas: Un car�cter
 * Salidas: Indica si el car�cter es una vocal min�scula
 */

int main ()
{
	char letra;
	cout << "Introduce una letra: ";
	cin >> letra;
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra ==  'o' || letra == 'u')
		cout << "Has introducido una vocal min�scula\n";
	else
		cout << "No has introducido una vocal min�scula\n";

    // Otra forma de resolverlo
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Has introducido una vocal min�scula\n";
            break;
        default:
            cout << "No has introducido una vocal min�scula\n";
    }
	return 0;
}

