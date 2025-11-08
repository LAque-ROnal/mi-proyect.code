#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b,c;
    float semi,area;
    int verificacion;
    cout <<" dame la primera longituda del triangulo: ";
    cin>> a;
    cout <<" dame la primera longituda del triangulo: ";
    cin>> b;
    cout <<" dame la primera longituda del triangulo: ";
    cin>> c;
    
    verificacion= (a+b)>c && (a+c)>b && (b+c)>a;
    cout<< "valor numerico: "<<verificacion<<endl;

    semi=(a+b+c)/2;
    area= sqrt(semi*(semi-a)*(semi-b)*(semi-c));
    cout << "el area del triangulo es: "<<area ;
 



    return 0;
}