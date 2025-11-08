#include <iostream>
#include<cmath>
using namespace std;
int main (){
    //dado una cantidad de milimitros, expresarlo en la maaxima cantidad de metros  el resto en decimetros
    //,centrimetros y milimetros
    const int UNmetro=1000;
    const int UNdecimetro = 100;
    const int UNcentimetro=10; 
    int milimetros, metros,decimetros,centimetros,milimetross,residuo;
    cout << "cantidada en milimetros a convertir: ";
    cin>> milimetros;

    metros=milimetros / UNmetro;
    residuo= milimetros % UNmetro;

    decimetros=residuo / UNdecimetro;
    residuo= residuo % UNdecimetro;

    centimetros= residuo / UNcentimetro;
    residuo= residuo % UNcentimetro;
    
    milimetross= residuo;

    cout << "metros: "<< metros<<endl;
    cout << "decimetro: "<< decimetros<<endl;
    cout << "centimetros: "<<centimetros<<endl;
    cout << "milimetros: "<<milimetross;




    return 0;
}