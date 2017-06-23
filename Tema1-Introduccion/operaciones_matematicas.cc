#include <iostream>

using namespace std;

// Programa: OperacionesMatemáticas
// Entrada: Dos números
// Salida: Su suma, resta, producto y división

int main ()
{
	double n1, n2;
	cout << "Introduzca un número: ";
	cin >> n1;
	cout << "Introduzca otro número: ";
	cin >> n2;
	cout << "Suma: " << n1+n2 << endl;
	cout << "Resta: " << n1-n2 << endl;
	cout << "Producto: " << n1*n2 << endl;
	cout << "División: " << n1/n2 << endl;
	return 0;
}
