#include <iostream>
using namespace std;
int main (){
    int num1,num2,m;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;
    if (num1> num2)
        m = num1;
    if (num2 > num1)
        m = num2;
    cout << "mayor es: "<<m;
    return 0;
}