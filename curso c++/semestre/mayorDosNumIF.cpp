#include <iostream>
#include <math.h>
using namespace std;
 
int main (){
    int a , b ;

    cout << "introduce el primer numero: "<< endl;
    cin>> a;
    cout << "introduce el segundo numero: "<< endl;
    cin >>b;
    if (a>b){
        cout << "el mayor es: "<<a<<endl;
    }
    else{
        if (b>a){
        cout<< "el mayor es: "<<b<<endl;
        }
        else{
            cout <<"ambos numeros son iguales: "<<a<<endl;
        }
    }



    return 0;
}