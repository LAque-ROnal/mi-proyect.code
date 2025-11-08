//dado un número  devolver el doble si el numero no es par caso contrario trile.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "introduce el número: ";
    cin >>n;
    if (n % 2 != 0)
        n=n*2;
        
    else
        n = n*3;
        
    cout <<n;
    return 0;
}