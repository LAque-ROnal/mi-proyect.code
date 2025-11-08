//dado 3 numeros devolver los numeros en orden ascendente
#include <iostream>
using namespace std;
int main (){
    int a,b,c,menor,intermedio,mayor;
    cout << "introduce el numero: ";
    cin >> a;
    cout << "introduce el numero: ";
    cin >> b;
    cout << "introduce el numero: ";
    cin >> c;
    if (a>b && a>c)
        mayor =a;
    else
        if (b>a && b>c)
            mayor =b;
        else
            mayor =c;

    if (a<b && a<c)
        menor = a;
    else
        if (b<a && b<c)
            menor =b;
        else
            menor =c;
    intermedio = (a + b + c)-(mayor + menor);
    cout << "menor: "<<menor<<endl;
    cout <<"intermedio: " <<intermedio<< endl;
    cout << "mayor: "<<mayor<< endl;

    return 0;
}