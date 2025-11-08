#include <iostream>
using namespace std;
int main (){
    //variables
    int num, numInverso,residuo;
    //entrada
    cout << "dame un numero con cinco digitos: ";
    cin >> num;
    //proceso

    residuo=num%10;
    num=num/10;
    numInverso=residuo*10;

    residuo=num%10;
    num=num/10;
    numInverso=(numInverso + residuo)*10;

    residuo=num % 10;
    num=num/10;
    numInverso=(numInverso + residuo)*10;

    residuo= num % 10;
    num= num/10;
    numInverso= (numInverso + residuo)*10;

    numInverso=numInverso + num;
    //salida
    cout << "el inverso del numero es: "<<numInverso;




    return 0;
}