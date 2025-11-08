#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a , b ,c,d ;
    double suma , p1,p2,p3,p4;
    cin >> a;
    cin >> b ;
    cin >> c ;
    cin >> d;

    suma = a+b+c+d;
    if (suma != 0)
    {
        p1 = (a/suma)*100;
        p2 = (b/suma)*100;
        p3 = (c/suma)*100;
        p4 = (d/suma)*100;

        cout << "numero 1: "<<p1<<endl;
        cout << "numero 2: "<<p2<<endl;
        cout << "numero 3: "<<p3<<endl;
        cout << "numero 4: "<<p4<<endl;
    }
    else 

    cout << "la suma es cero, no se puede calcular el porcentaje";

}