#include <iostream>
using namespace std;

int main()
{
    double dividendo, divisor;;
    cout << "Introduzca dividendo: ";
    cin >> dividendo;
    do {
        cout << "Introduzca divisor: ";
        cin >> divisor;
    } while (divisor == 0);
    cout << "El resultado es " << dividendo / divisor << endl;
    return 0;
}
