/*peograma para calcular el volumen  de un cuerpo con forma de capsula
se conoce el largo del cuerpo y su diametro
volumen del cuerpo (cilindro): pi * r^2 * h
volumen de la cabeza (semiesfera): 4/3 pi * r^3
radio = r/2

*/
#include <iostream>
using namespace std;
int main (){
    //variables
    float r,d,h,vs,vc,v;
    //entrada
    cout << "introduce la altura (largo): ";
    cin >> h;
    cout << "inserte el diametro: ";
    cin >>d;
    //calculos
    r=d/2;
    vc = 3.1415 * r *r *h;
    vs = (4*3.1415 * r*r*r)/3;
    v= vs + vc;
    //salida
    cout << "el volumen es: "<<v<< " m^3";
    return 0;
}