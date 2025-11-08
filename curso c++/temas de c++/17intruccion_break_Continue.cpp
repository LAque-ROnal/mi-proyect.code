/*break = romper 
se utiliza para terminar un bucle inmediatamente,sin importtar la condicion de bucle
Puede serivir para ahorrar recursos de la maquina
La instrucción  en C++ se usa dentro de bucles (for ,while  ,do while ) para saltar el resto del código en la iteración actual 
y pasar directamente a la siguiente iteración del bucle. Es especialmente útil cuando se desea omitir ciertos 
casos sin salir completamente del bucle.*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
  
    vector <string> nombre= {"maria", "carlos", "ana", "juan", "luisa"};

    string busscado ="ana";
    for (int i=0 ; i< nombre.size(); i++){

        if (nombre [i]==busscado){

            cout << "persona encontrada. nombre: "<< busscado<< " encontrada en la posicion: "<< i<<endl;
            break;
        }

    }
    cout << "has salido del bucle";


 // ejemplo para continue 

    vector <double> precios={50, 75, 100, 150, 56, 200 , 257};

    double descuento = 0.15;

    for (int i =0 ; i< precios.size(); i++){
        if (precios [i]<= 100){


            continue;
        }
        precios [i]-=precios[i]*descuento;
    }
    for (int i =0 ; i< precios.size(); i++){

        cout << "precio final del producto: "<< (i+1)<< ": " << precios[i]<< endl;
    }
    return 0;

}