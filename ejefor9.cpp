#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;
    int suma = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 0; i < numero.length(); i++) {
        suma += numero[i] - '0'; 
    }

    cout << "La suma de los dígitos es: " << suma << endl;
    return 0;
}