#include <iostream>

using namespace std;

// Programa: OperacionesMatem�ticas
// Entrada: Dos n�meros
// Salida: Su suma, resta, producto y divisi�n

int main ()
{
	double n1, n2;
	cout << "Introduzca un n�mero: ";
	cin >> n1;
	cout << "Introduzca otro n�mero: ";
	cin >> n2;
	cout << "Suma: " << n1+n2 << endl;
	cout << "Resta: " << n1-n2 << endl;
	cout << "Producto: " << n1*n2 << endl;
	cout << "Divisi�n: " << n1/n2 << endl;
	return 0;
}
