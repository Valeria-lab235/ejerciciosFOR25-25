#include <iostream>
using namespace std;

// Función suma de dos numeros
int sumar(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Llamamos a la función y mostramos el resultado
    int resultado = sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;

}