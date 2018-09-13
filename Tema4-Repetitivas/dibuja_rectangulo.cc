#include <iostream>

/* Programa: Dibuja rect�ngulo
 * Entradas: Un entero positivo n
 * Salidas: Dibuja un tri�ngulo rect�ngulo de base y altura n
 */
int main() {
    int n;
    do {
        std::cout << "Introduce un entero positivo: ";
        std::cin >> n;
    } while (n <= 0);
    for (int i = 1; i <= n; i++) {
        for (int x = 1; x <= i; x++)
            std::cout << "* ";
        std::cout << "\n";
    }
	return 0;
}
