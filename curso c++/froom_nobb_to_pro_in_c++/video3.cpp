#include <iostream>
#include <cmath>
using namespace std;
int main (){

    //variables
    double a,n,resultado;
    //entrada
    cout <<"valor positivo para la base (a): ";
    cin >> a;
    cout << "valor positivo para el exponente (n): ";
    cin >>n;
    //proceso
    resultado= pow(a,n);
    //salida
    cout << "resultado de: "<<a<<"^"<<n <<" es: "<<resultado;




    return 0;
}