/* ---------------------------------------------------------------------------
 * Programa: busca_nombre
 * Entradas: Un nombre de persona sin espacios en blanco
 * Salidas:  Se indica si el nombre se encuentra entre una serie de nombres
 *           prefijados
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>

int main ()
{
	const std::string nombres[5] = { "Julia", "Alfredo", "Mariano", "Pedro", "Ana" };
	std::string nombre;
	std::cout << "Introduce un nombre (sin espacios en blanco): ";
	std::cin >> nombre;
	bool encontrado = false;
	for (int i = 0; i < 5 && !encontrado; i++) {
		if (nombres[i] == nombre) {
			encontrado = true;
		}
	}
	if (encontrado)
		std::cout << "El nombre se encuentra entre los elementos del vector\n";
	else
		std::cout << "El nombre no se encuentra entre los elementos del vector\n";
	return 0;
}
