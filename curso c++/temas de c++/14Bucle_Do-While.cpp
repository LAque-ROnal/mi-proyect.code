/*DO-WHILE= HACER MIENTRAS
necesita ejecutarse al menos una vez el bucle
SINTAXIS:
do {cuerpo del bucle}

while(condicion a evaluar);
*/
#include <iostream>
using namespace std;
int main (){

    int opcion ;
    do{
        cout << "menu de opciones: \n";

        cout << "1. opcion 1\n";
        cout << "2. opcion 2\n";
        cout << "3. salir\n";
        cin >> opcion;
        if(opcion !=3 )cout<< "has elegido la opcion "<< opcion <<".\n";
        

    }while (opcion !=3);
    cout << "has elegido salir ";



    return 0;    
}