#include <iostream>
using namespace std;

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    float base, altura;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "area del triangulo: " << areaTriangulo(base, altura) << endl;
    return 0;
}