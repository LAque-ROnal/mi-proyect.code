#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    int sumaPositivos = 0;
    int cantidadCeros = 0;
    int sumaMayores10 = 0;
    int cantidadMayores10 = 0;

    cout << "Ingresa el tamaño del arreglo: ";
    cin >> N;

    int arreglo[N]; 
    srand(time(0));    

    cout << "\nArreglo generado:\n";
    for (int i = 0; i < N; i++) {
        arreglo[i] = (rand() % 101) - 50;  
        cout << arreglo[i] << " ";
    }

    for (int i = 0; i < N; i++) {
        if (arreglo[i] > 0) {
            sumaPositivos += arreglo[i];
        }
        if (arreglo[i] == 0) {
            cantidadCeros++;
        }
        if (arreglo[i] > 10) {
            sumaMayores10 += arreglo[i];
            cantidadMayores10++;
        }
    }
    float promedioMayores10 = 0;
    if (cantidadMayores10 > 0) {
        promedioMayores10 = (float)sumaMayores10 / cantidadMayores10;
    }
    cout << endl; 
    cout << "Suma de los positivos: " << sumaPositivos << endl;
    cout << "Cantidad de ceros: " << cantidadCeros << endl;
    cout << "Promedio de los numeros mayores a 10: " << promedioMayores10 << endl;

    return 0;
}