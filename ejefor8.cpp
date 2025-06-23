#include <iostream>
using namespace std;

int main() {
    int numero, divisores = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

}