#include <iostream>

using namespace std;

/* Programa: MiniCalculadora
 * Entradas: Dos valores reales y un carácter (+, -, / ó *) indicando el tipo de operación binaria
 * Salidas: El resultado de aplicar el tipo de operación a los operandos
 */

int main ()
{
	float op1, op2; // operandos
	char operador;
	cout << "Introduzca primer operando operador segundo operando: ";
	cin >> op1 >> operador >> op2;
	switch (operador) {
		case '+':
			cout << "Resultado: " << op1 + op2 << endl;
			break;
		case '-':
			cout << "Resultado: " << op1 - op2 << endl;
			break;
		case '*':
        	case 'x':
			cout << "Resultado: " << op1 * op2 << endl;
			break;
		case '/':
			cout << "Resultado: " << op1 / op2 << endl;
			break;
		default:
			cout << operador << ": operación no contemplada\n";
	}
	return 0;
}
