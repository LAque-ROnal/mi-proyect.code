//dado tres numeros devolver el mayor

#include <iostream>
using namespace std;
int main (){
    /*int num1,num2,num3,m;
    //string res;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrees el segundo numero: ";
    cin >> num2;
    cout << "ingrese el tercer numero: ";
    cin >> num3;

    m=num1;
    if (num2>m)
        m=num2;
    if (num3>m)
        m=num3;
    cout << m;*/

    //OTRA FORMA
    int num1,num2,num3,m;
    string res;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrees el segundo numero: ";
    cin >> num2;
    cout << "ingrese el tercer numero: ";
    cin >> num3;
    if (num1>num2)
        if(num1>num3)
            res="mayor num1";
        else
            res ="mayor num3";
    else
        if (num2 > num3)
            res= "mayor num2";
        else
            res = "mayor num3";

    cout << res;
    if (num1 >num2 && num1 >num3)
        cout << " el mayor es: "<<num1;
    else
        if (num2 >num1 && num2 >num3)
            cout << "el mayor es: "<< num2;
        else
            cout << "el mayor es: "<<num3;
    return 0;
}