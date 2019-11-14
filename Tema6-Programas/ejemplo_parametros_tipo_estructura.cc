#include <iostream>
using namespace std;

struct Complejo {
   double real, imaginaria;
};

Complejo suma(Complejo x, Complejo y) {
   x.real += y.real;
   x.imaginaria += y.imaginaria;
   return x;
}

void muestra(Complejo c) {
   cout << "(" << c.real << "," << c.imaginaria << ")" << endl;
}

int main () {
   Complejo x = { 1, 2 }, y = { 3, 3 };
   Complejo z = suma(x, y);
   muestra(z);
   muestra(x);
   muestra(y);
   return 0;
}
