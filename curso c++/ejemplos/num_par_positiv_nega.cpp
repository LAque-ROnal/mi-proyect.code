#include <iostream>
using namespace std ;
int main (){
 int n;
    cout << "ingresa el un numero entero: ";
    cin >>n;
    if (n %2==0){
        if(n>0){
           cout << "el numero es par y positivo"<< endl;
        }
        else
        cout << "el numero es par y negativo "<< endl;

    }
    else {
        if (n<0){
         cout << "el numero es impar y es negativo"<< endl;
        }
        else
        cout <<"el numero es impar y es poditivo " ;
    }
    return 0;
}