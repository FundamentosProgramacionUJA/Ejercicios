#include <iostream>

using namespace std;

/* Programa: esMinusculaoMayuscula
 * Entradas: Un carácter
 * Salidas: Indica si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal
 */

int main ()
{
    char letra;
    cout << "Introduce una letra: ";
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra ==  'o' || letra == 'u')
	cout << "Has introducido una vocal minúscula\n";
    else if (letra == 'A' || letra == 'E' || letra == 'I' || letra ==  'O' || letra == 'U')
	cout << "Has introducido una vocal mayúscula\n";
    else
        cout << "No has introducido una vocal\n";

    // Otra forma de resolverlo
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Has introducido una vocal minúscula\n";
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Has introducido una vocal mayúscula\n";
            break;
        default:
            cout << "No has introducido una vocal\n";
    }
	return 0;
}

