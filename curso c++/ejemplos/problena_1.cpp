#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double velocidad;
    double angulo;
    double g=9.81;

    cout << "ingrese la velocidad inicial (m/s): ";
    cin >> velocidad;
    cout << "ingrese el angulo de lanzamiento (radianes) : ";
    cin >> angulo;
    double radianes=angulo*3.1416/180;

    for (int t = 0; t<= 3; t++)
    {
        double x = velocidad * cos(radianes)*t;
        double y= velocidad *sin (radianes)*t-0.5*g*t*t;

        cout << "tiempo t= "<<t<<"s ->";
        cout << " x(t)= "<<x<<" m, y(t)= "<<y<<" m"<<endl;
    }




    return 0;
}