#include <iostream>
using namespace std;
int main (){
    /*
        CALCULAR EL SISTEMA DE ECUACIONES DE 2 INCOGNITAS
        CON MATRIZ
        3x + 5y =  4 1era ecuacion 
        (a)  (b)  (c)
        2x - 3y =  6 2da ecuacion
        (d)  (e)   (f)
    */
    //VARIABLES
    float a,b,c,d,e,f,x,y,determinante;
    // ENTRADA
    cout << "introduce el coeficiente (a): ";
    cin >> a;
    cout << "introduce el coeficiente (b): ";
    cin >> b;
    cout << "introduce el coeficiente (c): ";
    cin >> c;
    cout << "introduce el coeficiente (d): ";
    cin >> d;
    cout << "introduce el coeficiente (e): ";
    cin >> e;
    cout << "introduce el coeficiente (f): ";
    cin >> f;
    //CALCULOS
    determinante= (a * e) - (b*d );
    x= (( c*e) - (b * f)) / determinante;
    y=((a * f )-(c * d)) / determinante;
    //salida
    cout << "x= "<<x<< endl;
    cout << "y= "<<y;





    return 0;
}