#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {

        cout << "\n--- MENU DE SALUDOS ---" << endl;
        cout << "1. Buenos Dias en Ingles" << endl;
        cout << "2. Buenos Dias en Aleman" << endl;
        cout << "3. Buenos Dias en Frances" << endl;
        cout << "4. Buenos Dias en Quechua" << endl;
        cout << "5. Buenos Dias en Aymara" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Good Morning!" << endl;
        }
        else if (opcion == 2) {
            cout << "Guten Morgen!" << endl;
        }
        else if (opcion == 3) {
            cout << "Bonjour!" << endl;
        }
        else if (opcion == 4) {
            cout << "Rimaykullayki!" << endl;
        }
        else if (opcion == 5) {
            cout << "Jilatanaka waliki!" << endl;
        }
        else if (opcion == 0) {
            cout << "Hasta pronto :)" << endl;
        }
        else {
            cout << "Opción no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 0);
    return 0;
}