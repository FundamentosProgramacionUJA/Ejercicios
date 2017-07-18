#include <iostream>

using namespace std;

/* Descripción: Calcula los primeros n números perfectos
 * Parámetros de entrada:
 *   - n: cantidad de números perfectos a calcular
 * Parámetros de salida:
 *   - sal: vector donde se almacenan los números perfectos
 * Precondiciones:
 *   - El vector sal tiene al menos tamaño n
 */
void perfectos(int n, int sal[])
{
	int cont = 0, num = 2;
	while (cont < n) {
		int suma = 0;
		for (int i = 1; i < num; i++)
			if (num % i == 0)
				suma += i;
		if (suma == num) {
			sal[cont] = num; // Esta línea y la siguiente se podrían codificar como: sal[cont++] = num;
			cont++;
		}
		num++;
	}
}

int main()
{
	const int TAM = 4;
	int v[TAM];
	perfectos (TAM, v);
	cout << "Los primeros " << TAM << " números perfectos son:\n";
	for (int i = 0; i < TAM; i++)
		cout << v[i] << endl;
	return 0;
}

