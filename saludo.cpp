#include <iostream>
#include <string>

using namespace std;

// Función saludo personalizado
void saludar(string nombre) {
    cout << "Hola, " << nombre << " Bienvenido/a." << endl;
}

int main() {
    string nombreUsuario;

    cout << "Ingrese su nombre: ";
    getline(cin, nombreUsuario);  // Permite leer nombres con espacios

    saludar(nombreUsuario);  // Llamada a la función

}
