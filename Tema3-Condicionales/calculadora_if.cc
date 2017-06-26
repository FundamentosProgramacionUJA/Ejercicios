#include <iostream>

using namespace std;

/* Programa: MiniCalculadora
 * Entradas: Dos valores reales y un car�cter (+, -, / � *) indicando el tipo de operaci�n binaria
 * Salidas: El resultado de aplicar el tipo de operaci�n a los operandos
 */

int main ()
{
	float op1, op2; // operandos
	char operador;
	cout << "Introduzca primer operando operador segundo operando: ";
	cin >> op1 >> operador >> op2;
	if (operador == '+')
		cout << "Resultado: " << op1 + op2 << endl;
    else if (operador == '-')
		cout << "Resultado: " << op1 - op2 << endl;
	else if (operador == '*' || operador == 'x')
		cout << "Resultado: " << op1 * op2 << endl;
    else if (operador == '/')
        cout << "Resultado: " << op1 / op2 << endl;
    else
        cout << operador << ": operaci�n no contemplada\n";
	return 0;
}

