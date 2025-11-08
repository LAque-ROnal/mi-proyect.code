#include <iostream>
using namespace std;
int main (){
    int num,N,mult,n,resto;
    int cifras=0;
    int nuevo=0;
    cout <<"ingrese el numero: ";
    cin>>num;
    n=num;
    mult=1;
    while(n>0){
        n=n/10;
        cifras=cifras+1;
        mult= mult*10;
    }
    for (int j=1; j<= cifras ;j++ ){
        resto = num %10;
        mult=mult/10;
        nuevo=nuevo+resto*mult;
        num=num/10;
    }
    cout <<"numero invertido= "<<nuevo;
    return 0;
}