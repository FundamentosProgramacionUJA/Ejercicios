/* ---------------------------------------------------------------------------
 * Programa: ocurrencias_vocales
 * Entradas: Una cadena de caracteres
 * Salidas:  Número de ocurrencias de cada vocal en la cadena
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>

using namespace std;

struct ocurrencias {
	char vocal;
	int ocu;
};

int main ()
{
	string cadena;
	cout << "Introduzca una cadena: ";
	getline (cin, cadena);

	// VERSIÓN 1: Utiliza una variable por vocal para acumular ocurrencias
	int ocu_a = 0, ocu_e = 0, ocu_i = 0, ocu_o = 0, ocu_u = 0;
	for (int i = 0; i < cadena.length(); ++i) {
        	switch (cadena[i]) {
            		case 'a':
                		ocu_a++;
                		break;
            		case 'e':
                		ocu_e++;
                		break;
            		case 'i':
                		ocu_i++;
                		break;
            		case 'o':
                		ocu_o++;
                		break;
            		case 'u':
                		ocu_u++;
                		break;
        	}
	}
	cout << "Salida de la versión 1 del programa:\n";
	cout << "Ocurrencias de la a: " << ocu_a << endl;
	cout << "Ocurrencias de la e: " << ocu_e << endl;
	cout << "Ocurrencias de la i: " << ocu_i << endl;
	cout << "Ocurrencias de la o: " << ocu_o << endl;
	cout << "Ocurrencias de la u: " << ocu_u << endl;

	// VERSIÓN 2: Solución más general
	const int NVOCALES = 5;
	ocurrencias v[NVOCALES] = { {'a', 0}, {'e', 0}, {'i', 0}, {'o', 0}, {'u', 0} };
	for (int i = 0; i < cadena.length (); i++) {
		for (int j = 0; j < NVOCALES; j++)
			if (cadena[i] == v[j].vocal) {
				v[j].ocu++;
				break;
			}
	}
	cout << "\nSalida de la versión 2 del programa:\n";
	for (int j = 0; j < NVOCALES; j++)
		cout << "Ocurrencias de la vocal " << v[j].vocal << ": " << v[j].ocu << endl;
	return 0;
}
