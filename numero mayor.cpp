#include <iostream>
using namespace std;

// Función numero mayor
int mayor(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int resultado = mayor(num1, num2);
    cout << "El numero mayor es: " << resultado << endl;

}