#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 11; i++) {
        if (i == 5)
            continue;
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
