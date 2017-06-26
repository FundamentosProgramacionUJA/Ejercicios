#include <iostream>

using namespace std;

/* Programa: esMinuscula
 * Entradas: Un carácter
 * Salidas: Indica si el carácter es una vocal minúscula
 */

int main ()
{
	char letra;
	cout << "Introduce una letra: ";
	cin >> letra;
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra ==  'o' || letra == 'u')
		cout << "Has introducido una vocal minúscula\n";
	else
		cout << "No has introducido una vocal minúscula\n";

    // Otra forma de resolverlo
	switch (letra) {
        	case 'a':
        	case 'e':
        	case 'i':
        	case 'o':
        	case 'u':
            		cout << "Has introducido una vocal minúscula\n";
            		break;
        	default:
            		cout << "No has introducido una vocal minúscula\n";
    	}
	return 0;
}
