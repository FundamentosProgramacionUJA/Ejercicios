#include <iostream>
#include <locale>
using namespace std;

int main () {
  setlocale(LC_ALL, "spanish");
   int n;
   cout << "N�mero: ";
   cin >> n;
   string s;
   cout << "Cadena: ";
   getline (cin, s);
   cout << n << ' ' << s << endl;
   return 0;
}
