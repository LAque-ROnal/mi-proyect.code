#include <iostream>
using namespace std;

int main() {
    int g, n, m;
    float calif, sumagrupo = 0;

    cout << "Numero de grupos: ";
    cin >> g;

    int i = 1;
    while (i <= g) {
        cout << "\nGrupo " << i << endl;
        cout << "Numero de alumnos: ";
        cin >> n;

        float sumaalumno = 0;
        int j = 1;

        while (j <= n) {
            cout << "\nAlumno " << j << endl;
            cout << "Cuantas materias? ";
            cin >> m;

            float sumamat = 0;
            int k = 1;

            while (k <= m) {
                cout << "Calificacion " << k << ": ";
                cin >> calif;
                sumamat += calif;
                k++;
            }

            float promAlumno = sumamat / (k - 1);
            cout << "Promedio alumno: " << promAlumno << endl;
            sumaalumno += promAlumno;
            j++;
        }

        float promGrupo = sumaalumno / (j - 1);
        cout << "Promedio grupo: " << promGrupo << endl;

        sumagrupo += promGrupo;
        i++;
    }

    float promTotal = sumagrupo / (i - 1);
    cout << "\nPromedio total: " << promTotal << endl;

    return 0;
}