#include <iostream>
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    int N;
    int sumaTotal = 0;
    int minimo = 100;
    int maximo = 1;
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    cout << "Ingresa el tamaño de la matriz: ";
    cin >> N;
    int matriz[N][N];

    srand(time(0));

    cout << "Matriz generada: ";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100 +1 ; 
            cout << matriz[i][j] << " ";

            sumaTotal += matriz[i][j];

            if (matriz[i][j] < minimo)
                minimo = matriz[i][j];

            if (matriz[i][j] > maximo)
                maximo = matriz[i][j];

            if (i == j)
                sumaDiagonalPrincipal += matriz[i][j];

            if (i + j == N - 1)
                sumaDiagonalSecundaria += matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nSuma total de todos los elementos: " << sumaTotal << endl;
    cout << "Valor minimo: " << minimo << endl;
    cout << "Valor maximo: " << maximo << endl;
    cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaDiagonalSecundaria << endl;

    return 0;
}