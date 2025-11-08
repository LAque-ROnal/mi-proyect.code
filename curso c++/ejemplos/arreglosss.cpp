// como llenar  una arreglo desde el teclado y vizualizar el llenado ...
# include <iostream>
#include <cstdlib>
# include <ctime>
using namespace std;

int main (){

    srand (time(NULL)); // para que mis valores automaticos cambien cada vez que ejecuto

    int termux[3][2];
    cout << "introduce los datos de llenado del arreglo "<< endl;

    for  (int fila =0 ; fila<3 ; fila++){
        
        for (int columna = 0 ; columna < 2 ; columna ++){
            // escribir los datos desde el teclado
            // cin >> [fila][columna];
            termux [fila][columna] =rand()% 50; // para generar valores aleatorios 
        }

    }

    cout << "veremos o visualizamos ahora el llenado " << endl;

    // para poder ver el arreglo llenado
    for  (int fila =0 ; fila<3 ; fila++){       
        
        for (int columna = 0 ; columna < 2 ; columna ++){
            cout << termux [fila][columna]<< " ";
        }
      cout <<endl;
    }



    return 0;
}