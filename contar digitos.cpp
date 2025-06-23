#include <iostream>
using namespace std;
int contarDigitos(int n) {
    int contador = 0;
    if (n == 0) return 1;
    while (n != 0) {
        contador++;
        n /= 10;
    }
    return contador;
}
int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Numero de digitos: " << contarDigitos(numero) << endl;
    return 0;
}