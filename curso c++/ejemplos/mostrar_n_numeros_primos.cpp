#include <iostream>
using namespace std;
int main (){
    int n(0);
    int contador =0;
    int numero=2;
    cout <<"ingresa la cantidad de numeros primos quieres ver: ";
    cin >> n;
    while(contador < n){
        bool primo=true;
        for(int i=2 ; i< numero ; i++ ){
            if(numero % i==0){
                primo= false;
                break;
            }
        }
        if(primo){
            cout <<numero<<". ";
            contador++;
        }
     numero ++;       
        
    }
}   