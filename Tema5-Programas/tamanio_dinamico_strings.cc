#include <iostream>
#include <string>
using namespace std;

int main () {
   string s;
   cout << s << '\n';
   s = "hola";
   cout << s << '\n';
   cin >> s;
   cout << s << '\n';
   s = "hola";
   s[20] = 'X';
   return 0;
}
