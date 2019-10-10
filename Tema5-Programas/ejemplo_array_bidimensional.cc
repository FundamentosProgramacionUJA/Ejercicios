#include <iostream>
using namespace std;

int main ()
{
  int m[2][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
  m[0][0] = -1;
  for (int f = 0; f < 2; f++) {
     cout << "Fila " << f << ": ";
     for (int c = 0; c < 5; c++)
        cout << m[f][c] << ' ';
     cout << endl;
  }
  return 0;
}
