#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    if (numero >= 0 && numero <= 9) {
        cout << "Tiene 1 digito" << endl;
    }
    else if (numero >= 10 && numero <= 99) {
        cout << "Tiene 2 digitos" << endl;
    }
    else if (numero >= 100 && numero <= 999) {
        cout << "Tiene 3 digitos" << endl;
    }
    else if (numero >= 1000 && numero <= 9999) {
        cout << "Tiene 4 digitos" << endl;
    }
    else if (numero >= 10000 && numero <= 99999) {
        cout << "Tiene 5 digitos" << endl;
    }
    else {
        cout << "El numero tiene mas de 5 digitos" << endl;
    }

    return 0;
}