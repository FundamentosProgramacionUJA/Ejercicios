#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main()
{
    setlocale(LC_ALL, "spanish");
    const int TAM = 1000; // m�ximo n�mero de datos
    Persona p[TAM];
    int nDatos;           // n�mero l�gico de datos
    do {
        cout << "N�mero de personas: ";
        cin >> nDatos;
    } while (nDatos < 1 || nDatos > TAM);
    for (int i = 0; i < nDatos; i++) {
        cout << "Nombre: ";
        getline(cin >> ws, p[i].nombre);
        cout << "Edad: ";
        cin >> p[i].edad;
    }
    // Procesamiento de los datos
    return 0;
}
