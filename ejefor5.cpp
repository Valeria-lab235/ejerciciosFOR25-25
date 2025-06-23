#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1; 

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        factorial *= i; 
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    return 0;
}