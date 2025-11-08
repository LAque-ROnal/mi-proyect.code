#include <iostream>
using namespace std;

int main() {
    int a1, r, n;
    int suma;

    cout << "Ingrese el primer termino (a1): ";
    cin >> a1;

    cout << "Ingrese la razon (r): ";
    cin >> r;

    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;


    suma = (n * (2 * a1 + (n - 1) * r)) / 2;

    cout << "La suma de los primeros " << n << " terminos es: " << suma << endl;

    return 0;
}