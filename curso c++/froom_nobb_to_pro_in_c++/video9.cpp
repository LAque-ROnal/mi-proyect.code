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
    //variables
    float a,b,c,d,e,f; // coeficientes
    float determinante;
    float x ,y; // incognitas
    //entrada
    cout << "coeficiente (a): ";
    cin >> a;
    cout << "coeficiente (b): ";
    cin >> b;
    cout << "coeficiente (c): ";
    cin >> c;
    cout << "coeficiente (d): ";
    cin >> d;
    cout << "coeficiente (e): ";
    cin >> e;
    cout << "coeficiente (f): ";
    cin >> f;
    //calculos
    determinante = (a*e)-(b*d);
    x = ((c * e) - (b * f)) / determinante;
    y = ((a* f) - (c*d)) / determinante;
    //salida
    cout << "x= "<<x<<endl;
    cout << "y= "<<y;


    return 0;
}