#include <iostream>
#include <string>

using namespace std;

/* Descripción: Dadas dos cadenas de caracteres devuelve la más larga y la más corta.
 * Parámetros de entrada:
 *   - s1: una cadena de caracteres
 *   - s2: una cadena de caracteres
 * Parámetros de salida:
 *   - corta: la cadena más corta entre s1 y s2 (s1 si tienen el mismo número de caracteres)
 *   - larga: la cadena más larga entre s1 y s2 (s2 si tienen el mismo número de caracteres)
 */
void masCortayLarga(string s1, string s2, string& corta, string& larga)
{
    if (s1.length() <= s2.length()) {
        corta = s1;
        larga = s2;
    } else {
        corta = s2;
        larga = s1;
    }
}

int main() {
    string corta, larga;
    masCortayLarga("abc", "xyz", corta, larga);
    cout << "Corta: " << corta << ". Larga: " << larga << endl;
    masCortayLarga("abc", "Hola", corta, larga);
    cout << "Corta: " << corta << ". Larga: " << larga << endl;
    masCortayLarga("abc", "su", corta, larga);
    cout << "Corta: " << corta << ". Larga: " << larga << endl;
    return 0;
}
