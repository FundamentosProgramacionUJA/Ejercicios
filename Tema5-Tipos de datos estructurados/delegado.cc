/* ---------------------------------------------------------------------------
 * Programa: delegado
 * Entradas: - Número de candidatos
 *           - Datos de cada candidato
 *           - Voto emitido por cada persona del electorado
 * Salidas:  - Número de votos
 *           - Número de votos en blanco
 *           - Número de votos nulos
 *           - Número de votos obtenidos por cada candidato (junto con el nombre del candidato)
 *           - Delegado y subdelegado (con sus datos personales)
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>

using namespace std;

struct Fecha {
	int dia, mes, anio;
};

struct Candidato {
	string nombre;
	string dni;
	Fecha fechaNac;
	int nvotos;
};

int main ()
{
	int const TAM = 100;
	Candidato cand[TAM];
	int n; // numero de candidatos

	// Lectura de los candidatos
	do {
		cout << "Introduzca el número de candidatos (3-" << TAM << "): ";
		cin >> n;
	} while (n < 3 || n > TAM);

	for (int i = 0; i < n; i++) {
		cand[i].nvotos = 0;
		cout << "Introduzca el nombre del candidato " << i+1 << ": ";
		getline (cin >> ws, cand[i].nombre);
		cout << "Introduzca el dni del candidato " << i+1 << ": ";
		cin >> cand[i].dni;
		cout << "Introduzca la fecha de nacimiento del candidato " << i+1 << " (dia mes año): ";
		cin >> cand[i].fechaNac.dia >> cand[i].fechaNac.mes >> cand[i].fechaNac.anio;
	}

	// Lectura de la votación
	int voto;
	int votosBlanco = 0;
	int votosNulos = 0;
	int nvotos = 0;
	cout << "Introduzca el siguiente voto (-1 para terminar): ";
	cin >> voto;
	while (voto != -1) {
		nvotos++;
		if (voto == 0) {
			votosBlanco++;
		} else if (voto < 0 || voto > n) {
			votosNulos++;
		} else {
			cand[voto-1].nvotos++;
		}
		cout << "Introduzca el siguiente voto (-1 para terminar): ";
		cin >> voto;
	}

	// Se muestra información sobre el número de votos total, en blanco, nulos y de cada candidato
	cout << "Número de votos: " << nvotos << endl;
	cout << "Número de votos en blanco: " << votosBlanco << endl;
	cout << "Número de votos nulos: " << votosNulos << endl;
	cout << "Votos de los cantidatos:\n";
	for (int i = 0; i < n; i++) {
		cout << cand[i].nombre << " --> " << cand[i].nvotos << endl;
	}

	// Se calcula delegado y subdelegado
	int posdelegado, possubdelegado;    // índices en el vector cand del delegado y subdelegado
	if (cand[0].nvotos > cand[1].nvotos) {
		posdelegado = 0;
		possubdelegado = 1;
	} else {
		posdelegado = 1;
		possubdelegado = 0;
	}
	for (int i = 2; i < n; i++) {
		if (cand[i].nvotos > cand[posdelegado].nvotos) {
			possubdelegado = posdelegado;
			posdelegado = i;
		} else if (cand[i].nvotos > cand[possubdelegado].nvotos) {
			possubdelegado = i;
		}
	}
	// Se muestra la información del delegado y subdelegado
	cout << "Datos del delegado:\n";
	cout << "Nombre: " << cand[posdelegado].nombre << endl;
	cout << "Dni: " << cand[posdelegado].dni << endl;
	cout << "Fecha nacimiento: " << cand[posdelegado].fechaNac.dia << '/' << cand[posdelegado].fechaNac.mes << '/'
	                             << cand[posdelegado].fechaNac.anio <<endl;
	cout << "Datos del subdelegado:\n";
	cout << "Nombre: " << cand[possubdelegado].nombre << endl;
	cout << "Dni: " << cand[possubdelegado].dni << endl;
	cout << "Fecha nacimiento: " << cand[possubdelegado].fechaNac.dia << '/' << cand[possubdelegado].fechaNac.mes << '/'
	                             << cand[possubdelegado].fechaNac.anio <<endl;
	return 0;
}
