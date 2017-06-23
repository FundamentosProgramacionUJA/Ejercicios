#include <iostream>

using namespace std;

/* Programa: CalculaVuelta
 * Entradas: El precio de una cajetilla de tabaco y el dinero introducido en la máquina para comprarlo.
 *           Ambos valores se introducen en céntimos. El dinero introducido tiene que ser mayor o igual 
 *           que el precio de la cajetilla
 * Salidas: El cambio que devuelve la máquina. Se hace de tal forma que se minimiza el número de monedas devueltas
 */

int main ()
{
	int precio, introducido;
	cout << "Indique el precio de la cajetilla en céntimos: ";
	cin >> precio;
	cout << "Indique el dinero introducido en céntimos: ";
	cin >> introducido;
	int sobra = introducido - precio;
	int m50 = sobra / 50;
	sobra = sobra % 50;
	int m20 = sobra / 20;
	sobra = sobra % 20;
	int m10 = sobra / 10;
	sobra = sobra % 10;
	int m5 = sobra / 5;
	cout << "Monedas de 50: " << m50 << endl;
	cout << "Monedas de 20: " << m20 << endl;
	cout << "Monedas de 10: " << m10 << endl;
	cout << "Monedas de 5: " << m5 << '\n';
	return 0;
}
