#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float r, r1, r2;
    float realPart, imagPart;

    cout << "Ingrese el coeficiente A: ";
    cin >> a;
    cout << "Ingrese el coeficiente B: ";
    cin >> b;
    cout << "Ingrese el coeficiente C: ";
    cin >> c;

    float discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        r1 = (-b + sqrt(discriminante)) / (2 * a);
        r2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raiz 1: " << r1 << endl;
        cout << "Raiz 2: " << r2 << endl;
    }
    else if (discriminante == 0) {
        r = -b / (2 * a);
        cout << "Raiz 1 = Raiz 2: " << r << endl;
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminante) / (2 * a);
        cout << "Raiz 1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Raiz 2: " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}