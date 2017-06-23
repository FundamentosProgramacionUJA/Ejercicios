#include <iostream>

using namespace std;

// Programa: Iva
// Entrada: El precio de un prodcuto sin IVA
// Salida: El precio del producto tras aplicarle un IVA fijo del 21%

int main ()
{
	double precio;
	cout << "Introduzca un precio: ";
	cin >> precio;
	cout << "El precio con IVA es " << precio*1.21 << endl;
	return 0;
}
