#include <iostream>
using namespace std;
int main (){

    /*int n=0;
    int contador=0;
    int numero=1;
    cout <<"ingresa la cantidad de numeros perfectos que deseas ver: ";
    cin >>n;
    while(contador<n){
        int suma=0;
        for(int i=1; i<numero; i++){
            if(numero % i == 0){
                suma+=i;
            }    
      
        }
        if (suma == numero){
            cout <<numero<<". ";
            contador ++;
        }   
        numero++;
    }  
    return 0;*/
    int num ,suma=0;
    cout <<"ingresa un numero para ver sies num perfecto o no ";
    cin>>num;
    for(int i=1 ; i <num ; i++){
        if (num%i==0){
            suma+=i;
        }
    }
    if(suma==num){
        cout<< num<<" es perfecto";

    }
    else{
        cout <<num<<" no  es perfecto";
    }    
       
}
