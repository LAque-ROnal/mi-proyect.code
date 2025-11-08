#include <iostream>
using namespace std; 
int main (){

    //variables;
    int num1,num2,num3,num4;
    double p1,p2,p3,p4,suma,total;  // p = porcentaje
    //entrada
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;
    cout << "ingrese el tercer numero: ";
    cin >>num3;
    cout << "ingrese el cuarto numero: ";
    cin >> num4;
    //proceso
    suma = num1 + num2 + num3 + num4;
    p1 = (num1 / suma) *100;
    p2 = (num2 / suma) *100;
    p3 = (num3 / suma) *100;
    p4 = (num4 / suma) *100;
    //para verificar el porcentaje;
    total = p1+ p2+ p3 +p4;
    
    //salida
    cout << "porcentaje num1 es: "<<p1<< " %"<<endl;
    cout << "porcentaje num2 es: "<<p2<< " %"<<endl;
    cout << "porcentaje num3 es: "<<p3<< " %"<<endl;
    cout << "porcentaje num4 es: "<<p4<< " %"<<endl;

    cout << "suma total del PORCENTAJE: "<<total;

    return 0;
}