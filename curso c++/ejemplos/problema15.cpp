//determinar si un numero es par o impar 

#include <iostream>
using namespace std;
int main (){
    int num;
    string res;
    cout << "ingrese el numero: ";
    cin >> num;
    if (num % 2 ==0)
        res ="ES PAR";
    else
        res ="ES IMPAR";

    cout << res;
    return 0;
}