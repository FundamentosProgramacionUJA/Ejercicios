#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    const int TAM = 1000; // máximo número  de datos
    Persona p[TAM];
    int nDatos = 0;       // número lógico de datos
    string n;
    cout << "Nombre (FIN para terminar): ";
    getline(cin >> ws, n);
    while (n != "FIN" && nDatos < TAM) {
        p[nDatos].nombre = n;
        cout << "Edad: ";
        cin >> p[nDatos].edad;
        nDatos++;
        cout << "Nombre (FIN para terminar): ";
        getline(cin >> ws, n);
    }
    // Procesamiento de los datos
    return 0;
}
