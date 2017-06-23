#include <iostream>

using namespace std;

// Programa: Lee y Muestra datos
// Entrada: La edad, sexo y altura de una persona (se supone introducida correctamente)
// Salida: La edad, sexo y altura introducidos

int main ()
{
	int edad;
	char sexo;
	double altura;
	cout << "Introduzca la edad: ";
	cin >> edad;
	cout << "Introduzca el sexo (M o F): ";
	cin >> sexo;
	cout << "Introduzca la altura: ";
	cin >> altura;
	cout << "Edad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Altura: " << altura << endl;
	return 0;
}
