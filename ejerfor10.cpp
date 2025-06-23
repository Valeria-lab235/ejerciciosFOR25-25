#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, siguiente;
    cout << "Ingrese la cantidad de términos de la serie Fibonacci: ";
    cin >> n;

    cout << "Serie Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << endl;
    return 0;
}