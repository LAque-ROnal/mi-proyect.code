#include <iostream>
using namespace std;

int main(){
    int contador = 0;
    float numero;
    float suma = 0;
    float maximo, minimo;
    float promedio;

    while (contador < 10) {
        cout << "Ingresa un numero (" << contador + 1 << " de 10): ";
        cin >> numero;

        suma = suma + numero;

        if (contador == 0) {
            maximo = numero;
            minimo = numero;
        } else {
            if (numero > maximo)
                maximo = numero;
            if (numero < minimo)
                minimo = numero;
        }

        contador = contador + 1;
    }

    promedio = suma / 10;

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Valor maximo: " << maximo << endl;
    cout << "Valor minimo: " << minimo << endl;

    return 0;
}