#include <iostream>

using namespace std;

/* Descripcion: Intercambia el valor de sus dos parámetros.
 * Parámetros de entrada y salida:
 *   - x: primer parámetro a intercambiar
 *   - y: segundo parámetro a intercambiar
 */
void intercambia (int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main ()
{
	int x = 4, y = 10;
	cout << x << ' ' << y << endl;
	cout << "Se invoca a intercambia\n";
	intercambia (x, y);
	cout << x << ' ' << y << endl;
	return 0;
}
