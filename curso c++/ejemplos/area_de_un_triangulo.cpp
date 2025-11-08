#include <iostream>
using  namespace std;
int main (){
    double base (0);
    double altura (0);
    double area(0);
    cout <<" ingrese la base del triangulo: " << endl;
    cin >> base;
    cout <<" ingrese la Altura del triangulo: " << endl;
    cin >> altura;
    
    area = (base*altura)/2;
    cout<<" El area del triangulo es de: "<<area<<"u";
    
    return 0;
}

