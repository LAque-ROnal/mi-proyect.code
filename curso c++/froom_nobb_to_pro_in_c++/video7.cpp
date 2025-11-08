#include <iostream>
using namespace std;
int main (){

    //constantes
    const int UnMetro = 1000;
    const int UnDecimetro = 100;
    const int UnCentimetro = 10;
    //variables
    int cantMilimetros,residuo,metros,decimetros,centimetros,milimetros;
    //entrada
    cout << "cantidad de MILIMETROS a convertir: ";
    cin>> cantMilimetros;
    //proceso
    metros = cantMilimetros / UnMetro;
    residuo = cantMilimetros % UnMetro;

    decimetros = residuo / UnDecimetro;
    residuo = residuo % UnDecimetro;

    centimetros= residuo / UnCentimetro;
    residuo = residuo % UnCentimetro;

    milimetros = residuo;
    //salida
    cout << "metros: "<< metros<<endl;
    cout << "decimetros: "<< decimetros<<endl;
    cout << "centimetros: "<< centimetros<< endl;
    cout << "milimetros: "<< milimetros;


    return 0;
}