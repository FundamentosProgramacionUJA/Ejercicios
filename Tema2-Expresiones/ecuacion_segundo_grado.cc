#include <iostream>
#include <cmath>

using namespace std;

/* Programa: EcuaciónSegundoGrado
 * Entradas: Los coeficientes y el término independiente de una ecuación de segundo grado
 * Salidas: Las dos soluciones. En caso de que la solución sea compleja no se calcula correctamente
 */

int main ()
{
	double a, b, c;
	cout << "Introduzca los valores de a, b y c separados por espacios: ";
	cin >> a >> b >> c;
	cout << "Primera raíz: " << (-b+sqrt(b*b - 4*a*c))/(2*a) << endl;
	cout << "Segunda raíz: " << (-b-sqrt(b*b - 4*a*c))/(2*a) << endl;
	return 0;
}
