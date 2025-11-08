#include <iostream>
using namespace std;
int main (){

    //variables
    float h,da,dc,al,ac,acir,a,ra,rc;
    //entrada
    cout << "ALTURA: ";
    cin>>h;
    cout << "diametro del alero: ";
    cin>>da;
    cout << "diametro del cilindro: ";
    cin>> dc;
    //calculos
    rc = dc/2;
    ra = da/2;
    al= 3.1415 * (ra*ra - rc*rc);
    ac= 2*3.1415*rc*h;
    acir = 3.1415*rc*rc;
    a = al+ac+acir;
    cout << "area total : "<< a;



    return 0;
}