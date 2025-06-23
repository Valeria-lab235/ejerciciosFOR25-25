#include <iostream>
using namespace std;

float celsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float c;
    cout << "Ingrese temperatura en celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << celsiusAFahrenheit(c) << " °F" << endl;
    return 0;
}