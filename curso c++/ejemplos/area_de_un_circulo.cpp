#include <iostream>
#include <cmath>
using  namespace std;
int main (){
    double radio (0);
    double area(0);
    cout <<" ingrese el radio del circulo: " << endl;
    cin >> radio;
    area = 3.14 * pow(radio,2);
    cout<<" El area del circulo es: "<<area<<" (unidades)";
    return 0;
}   
  