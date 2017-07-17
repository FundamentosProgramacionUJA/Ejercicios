/* ---------------------------------------------------------------------------
 * Programa: imc_personas
 * Entradas: Nombre, peso y altura de una serie de personas
 * Salidas:  Distintas estadísticas sobre los datos leídos como el IMC de cada 
 *           persona
 * --------------------------------------------------------------------------- */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Persona {
	string nombre;
	double altura, peso;
};

int main ()
{
	const int TAMMAX = 10000;
	Persona p[TAMMAX];
	int np;  // número de personas con las que se trabajan
	do {
        	cout << "Indica el número de personas que vas a introducir: ";
        	cin >> np;
	} while (np < 0 || np > TAMMAX);
	// LECTURA DE LOS DATOS
	for (int i = 0; i < np; ++i) {
        	cout << "Datos de la persona " << i+1 << ":\n";
        	cout << "\tNombre: ";
        	getline(cin >> ws, p[i].nombre);
        	cout << "\tAltura en metros: ";
        	cin >> p[i].altura;
        	cout << "\tPeso en kilogramos: ";
        	cin >> p[i].peso;
	}
	// SE MUESTRAN LOS DATOS DE LAS PERSONAS Y SE CALCULAN ESTADÍSTICAS
	double imcMax = 0;        // mayor IMC
	int indImcMax;            // índice de la persona con mayor IMC
	double imcMin = 10000;    // menor IMC
	int indImcMin;            // índice de la persona con menor IMC
	int indAlturaMinima = 0;  // indice de la persona más baja

	cout << "\nListado de personas:\n";
	for (int i = 0; i < np; ++i) {
        	double imc = p[i].peso/pow(p[i].altura,2);
        	cout << '\t' << p[i].nombre << " (" << p[i].altura << "m, " << p[i].peso
             	     << "kg). IMC = " << imc << endl;
        	if (imc > imcMax) {
            		imcMax = imc;
            		indImcMax = i;
        	}
        	if (imc < imcMin) {
            		imcMin = imc;
            		indImcMin = i;
        	}
        	if (p[i].altura < p[indAlturaMinima].altura)
            		indAlturaMinima = i;
	}
	cout << "\nEstadísticas de las personas:\n";
	cout << "\tLa persona con mayor IMC es " << p[indImcMax].nombre << '\n';
	if (indAlturaMinima == indImcMin)
        	cout << "\tLa persona más baja tiene el IMC menor\n";
    	else
        	cout << "\tLa persona más baja no tiene el IMC menor\n";

    	// SE CALCULA LAS PERSONAS QUE SUPERAN UNA ALTURA
    	cout << "\nIntroduce una altura: ";
    	double altura;
    	cin >> altura;
    	cout << "\nPersonas con más de " << altura << " metros:\n";
	for (int i = 0; i < np; ++i)
        if (p[i].altura > altura)
        	cout << '\t' << p[i].nombre << '\n';
	return 0;
}
