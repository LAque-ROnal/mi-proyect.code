#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    cout << "Ingresa el numero de estudiantes: ";
    cin >> N;

    int notas[N][3];
    srand(time(0));

    cout << "..................Notas generadas........................"<<endl;;
    for (int i = 0; i < N; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            notas[i][j] = rand() % 101;
            cout << notas[i][j] << " ";
        }
        cout << endl;
    }

    cout << "............Promedio por estudiante........................ "<< endl;
    for (int i = 0; i < N; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += notas[i][j];
        }
        float promedio = suma / 3.0;
        cout << "Estudiante " << i + 1 << ": " << promedio << endl;
    }
    cout << "...............Promedio por materia................. "<<endl;
    for (int j = 0; j < 3; j++) {
        int suma = 0;
        for (int i = 0; i < N; i++) {
            suma += notas[i][j];
        }
        float promedio = suma / (float)N;
        cout << "Materia " << j + 1 << ": " << promedio << endl;
    }

    int max = 0;
    int menores60 = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            if (notas[i][j] > max)
                max = notas[i][j];
            if (notas[i][j] < 60)
                menores60++;
        }
    }

    cout << "Calificacion maxima: " << max << endl;
    cout << "Cantidad de calificaciones menores a 60: " << menores60 << endl;

    return 0;
}