#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    int N;

    cout << " Cuantos numeros quieres en el arreglo?: ";
    cin >> N;

    int arreglo[N];

    srand(time(0));

    // 4. Llenamos el arreglo con números aleatorios entre 1 y 100
    for (int i = 0; i < N; i++) {
        arreglo[i] = rand() % 100 + 1;
    }

    cout << "Arreglo original: ";
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < N - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < N; j++) {
            if (arreglo[j] < arreglo[menor]) {
                menor = j;
            }
        }

        int temporal = arreglo[i];
        arreglo[i] = arreglo[menor];
        arreglo[menor] = temporal;
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}