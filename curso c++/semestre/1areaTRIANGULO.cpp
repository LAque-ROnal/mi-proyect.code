#include <iostream>
#include <cmath>
using namespace std;
int main (){
    //calcular eñ area de un triangulo concido altura y base
    //variables
    double area,base,altura;
    //entrada
    cout << "introduce la altura del triangulo: ";
    cin>> altura;
    cout << "itroduce la base del triangulo: ";
    cin >> base;
    //proceso
    area= (base * altura) /2;
    //salida
    cout << "el area de un triangulo es: "<< area<<" [u]";
}