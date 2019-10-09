#include <iostream>
using namespace std;

int main()
{
    float valor, suma = 0;
    cout << "Introduzca un valor (0 para terminar): ";
    cin >> valor;
    while (valor != 0) {
        suma += valor;         // equivale a suma = suma + valor;
        cout << "Introduzca un valor (0 para terminar): ";
        cin >> valor;
    }
    cout << "El resultado de la suma es " << suma << endl;
    return 0;
}
