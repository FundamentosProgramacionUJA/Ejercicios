#include <iostream>
using namespace std;

int main ()
{
  const int NFILAS = 10;
  const int NCOL = 10;
  double m[NFILAS][NCOL] = { {1, 2},
                              {2, 4},
                              {7}
                           };
  for (int f = 0; f < NFILAS; f++) {
     for (int c = 0; c < NCOL; c++) {
        cout << m[f][c] << " ";
     }
     cout << endl;
  }
  return 0;
}

