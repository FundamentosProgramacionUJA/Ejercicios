#include <iostream>
#include <locale>
using namespace std;

int main ()
{
  setlocale(LC_ALL, "spanish");
  char v[5] = { 'a', 'e', 'i', 'o', 'u' };
  int i;
  cout << "Introduzca un índice (-1 para terminar): ";
  cin >> i;
  while (i != -1) {
    cout << "Elemento v[" << i << "] = " << v[i] << endl;
    cout << "Introduzca un índice (-1 para terminar): ";
    cin >> i;
  }
  return 0;
}
