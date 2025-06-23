#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (esPrimo(numero))
        cout << "Es un numero primo." << endl;
    else
        cout << "No es un nuymero primo." << endl;
    return 0;
}