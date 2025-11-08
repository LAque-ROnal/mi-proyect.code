#include <iostream>
using namespace std;
int main (){

    //variables
    int a,b,c,res;
    //entrada
    cout << "ingrese el primer lado del TRIANGULO (a): ";
    cin >> a;
    cout << "ingrese el seegundo lado del TRIANGULO (b): ";
    cin >> b;
    cout << "ingrese el tercer lado del TRIANGULO (c): " ;
    cin >> c;
    //calculo
    res = (a + b > c)&&(a+c>b)&&(b+c>a); //condicion para formar un triangulo

    if (res)
    {
        cout << "LOS LADOS FORMAN UN TRIANGULO"<< endl;
        if (a == b && b == c) //tres lados iguales
            cout << "forma un TRIANGULO RECTANGULO";
        else
            if (a==b || b==a || b==c) // dos lados iguales y uno desigual
                cout << "forma un TRIANGULO ISOSCELES";
            else
                cout << "forma un TRIANGULO ESCALENO "; //los tres lados desiguales
    }
    else
        cout << "LOS LADOS NO FORMAN NINGUN TRIANGULO";



    return 0;
}