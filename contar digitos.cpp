#include <iostream>
using namespace std;
//Contar digitos de un numero
int contarDigitos(int numero) {
    if (numero == 0) return 1;
    int contador = 0;
    numero = abs(numero);
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}