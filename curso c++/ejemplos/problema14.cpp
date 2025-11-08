//determinar si un numero es multiplo de 3 y 5

#include <iostream>
using namespace std;
int main (){
    //variables
    int num;
    string res;
    //entrada
    cout << "ingrese el numero: ";
    cin >> num;
    if (num % 3 ==0 && num % 5 == 0){
        res= " ES  multiplo de 3 y 5.";
    
    }
    else{
        res= "NO multiplo de 3 y 5.";
    
    }
    cout << res;

    return 0;
}