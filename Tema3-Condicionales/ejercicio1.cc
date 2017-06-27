#include<iostream>

using namespace std;

int main()
{
   bool a = true, b = true, c = false, d = false;
   cout << boolalpha << (c || !a && b) << endl;
   cout << boolalpha << (!(a || b) || b && !c) << endl;
   cout << boolalpha << (!(!(!(a && c || d)))) << endl;
   cout << boolalpha << (!(5<3) && a || !(d || c)) << endl;
   cout << boolalpha << (a && !(d || !c && a) || !(!c || b)) << endl;
   return 0;
}
