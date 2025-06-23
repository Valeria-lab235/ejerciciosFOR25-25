#include <iostream>
using namespace std;

long long factorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    if (num < 0)
        cout << "Debe ser positivo." << endl;
    else
        cout << "Factorial: " << factorial(num) << endl;
    return 0;
}