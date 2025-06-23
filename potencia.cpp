#include <iostream>
using namespace std;
long long potencia(int base, int exponente) {
    long long resultado = 1;
    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << base << "^" << exponente << " = " << potencia(base, exponente) << endl;
    return 0;
}