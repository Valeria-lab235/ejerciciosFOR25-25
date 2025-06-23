#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "Letras de la palabra:" << endl;
    for (int i = 0; i < palabra.length(); i++) {
        cout << palabra[i] << endl;
    }

    return 0;
}