#include <iostream>
using namespace std;
int main(){
    int num(0);
    cout<<" introduce un numero "<<endl;
    cin>>num;
    if(num %2 ==0){
        if(num>0){
           cout <<num<<" el numero es par positivo"<<endl;
        }    
        else{
         cout<<num<<" el numero es par negativo"<<endl;
        }
    }
    else{
        if(num>0){
          cout<<num<< " el numero es impar positivo"<<endl;
        }
        else{
           cout<<num<<" el numero es impar negativo"<<endl;
        }
         
    }
} 