#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "spanish");
    double x, y;
    cout << "Introduce un valor real: ";
    cin >> x;
    cout << "Introduce un segundo valor real: ";
    cin >> y;
    cout << "1: sumar valores\n";
    cout << "2: restar valores\n";
    cout << "3: multiplicar valores\n";
    char op;
    cout << "Elige opci�n (1-3): ";
    cin >> op;
    switch (op) {
      case '1':
          cout << "Suma: " << x + y << endl;
          break;
      case '2':
          cout << "Resta: " << x - y << endl;
          break;
      case '3':
          cout << "Multiplicaci�n: " << x * y << endl;
          break;
      default:
          cout << "Opci�n no v�lida\n";
    }
    return 0;
}

