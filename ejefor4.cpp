#include <iostream>
using namespace std;

int main() {
    cout << "Números pares del 1 al 50:" << endl;

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}