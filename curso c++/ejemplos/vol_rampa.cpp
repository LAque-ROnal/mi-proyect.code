# include <iostream>
using namespace std;

int main () {

    //varaibles
    float h,lcaja,base,lb,v,v1,v2,ancho;
    //entrada
    cout << "ingrese la altura de la rampa: ";
    cin >> h;
    cout << "ingrese la longitud de la base de la caja: ";
    cin >> lcaja;
    cout << "base caja: ";
    cin >> lb;
    cout << "ancho: ";
    cin >>ancho;
    //calculos
    v1 = lcaja*lcaja*lcaja;
    v2 = (lb*h*ancho)/2;
    v =v1+v2;
    cout << v;


    return 0;
}