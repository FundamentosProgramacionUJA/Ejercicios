#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Introduzca una vocal: ";
    cin >> c;
    if (c == 'i' || c == 'u') {
        cout << "Introdujo una vocal cerrada" << endl;
    } else {
        if (c == 'a' || c == 'e' || c == 'o') {
            cout << "Introdujo una vocal abierta" << endl;
        } else {
            cout << "No introdujo una vocal" << endl;
        }
    }
    return 0;
}


