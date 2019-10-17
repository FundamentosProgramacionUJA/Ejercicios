#include <iostream>
using namespace std;

int main () {
   string s;   // si no se asigna valor, la cadena queda vacía
   cout << s << " - " << s.length() << " caracteres\n";
   s = "Meursault";
   cout << s << " - " << s.length() << " caracteres\n";
   s = "";     // la cadena queda vacía
   cout << s << " - " << s.length() << " caracteres\n";
   return 0;
}
