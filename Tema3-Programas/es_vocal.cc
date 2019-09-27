#include <iostream>
using namespace std;

int main()
{
    const char VOCAL = 'e';
    char vocal;
    cout << "Introduzca una vocal : ";
    cin >> vocal;
    if (vocal == VOCAL) {
        cout << "Felicidades, la ha acertado\n";
    } else {
        cout << "Mala suerte\n";
    }
    return 0;
}
