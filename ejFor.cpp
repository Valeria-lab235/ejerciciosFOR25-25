#include<iostream>
using namespace std;
int main ()
{
    //Listas o arrays. Vector
    string nombre = "Margarita Lasso";
    int edades[10] = {18, 30, 55, 24, 12, 45, 26, 27, 34, 5}
    string colores[5] = {"negro", "azul", "verde", "amarillo", "rojo"};
    cout << "la octava letra del nombre es: " << nombre [7] << endl;
    cout << "la edad del 5to elemento es: " << edades [4] << endl;
    cout << "la color del 3er elemento es: " << colores [2] << endl;

    cout << endl;
    cout << "Incremento" << endl;
    for (int i = 0; < 10; i++){
        cout << "la edad del elemento " << i << "es: " << edades[i] << endl;
    }
    cout << endl;
    cout << "Decremento" << endl;
    for (int i = 9; i > -1; i--){
 cout << "la edad del elemento " << i << "es: " << edades[i] << endl;
    }
}