#include <iostream>

int main ()
{
	int n;
	std::cout << "Introduzca el número de elementos de la serie: ";
	std::cin >> n;
	if (n < 0)
		return 0;
	int* serie = new int[n];
	if (serie == 0) {
	    std::cout << "No hay suficiente memoria dinámica para el vector. Se termina el programa\n";
        return 0;
	}
	if (n > 0)
		serie[0] = 0;
	if (n > 1)
		serie[1] = 1;
	for (int i = 2; i < n; ++i)
		serie[i] = serie[i-1] + serie[i-2];
	std::cout << "Valores de la serie:\n";
	for (int i = 0; i < n; ++i)
		std::cout << serie[i] << '\n';
	delete[] serie;
	return 0;
}
