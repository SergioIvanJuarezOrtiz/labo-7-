#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un numero para ver su tabla de multiplicar: ";
    cin >> numero;

    int i = 1;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    while (i <= 10) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
        i++;
    }

    return 0;
}