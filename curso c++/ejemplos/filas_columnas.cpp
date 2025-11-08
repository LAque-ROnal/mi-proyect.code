#include <iostream>
using namespace std;
int main (){
 int fila , columna;
  // como visulizar un dibujo con columnas y filas  
    cout << "ingrese la cantidad de filas: ";
    cin >> fila ;
    cout << "ingrese la cantidad de columnas: ";
    cin >>columna;

    for (int i =0 ; i<fila ; i++){
        for (int j =0 ;j < columna ; j++){

            cout << "# ";

        }
        cout << endl;
        
    }
    cout << "TRIANGULO RECTANGULO " << endl;
    for (int i=0 ; i < fila ; i++){
        for (int j =0; j <=i ; j++){

            cout << " % ";
        }
        cout << endl;
    }
     

    return 0;
}