#include <iostream>
#include <cmath> 
using namespace std;
int main (){

    //calular el are  y perimetr de un circulo conocido su diametro;
    //variables
    double area,perimetro, diametro,radio;
    //entrada
    cout << "inserte el diametro  del circulo: ";
    cin >> diametro;
    //proceso
    radio = diametro/2;
    area = M_PI * pow(radio,2);
    perimetro =3.1416 * diametro;
    //salida
    cout << "area: "<<area<<endl;
    cout << "perimetro: "<< perimetro;


    return 0;

}