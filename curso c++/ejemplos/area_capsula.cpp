#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float h,d,r,ac,as,a;
    //entrada
    cout << "altura: ";
    cin>>h;
    cout << "diametro: ";
    cin >> d;
    //proceso
    r = d/2;
    ac= 2* M_PI*r*h;
    as= 2 * 3.1415*r*r;
    a= 2*as + ac;
    cout << "area total: "<<a;


    return 0;
}