#include <iostream>
using namespace std;
int main ()  {

    int num;
    cout << "ingrese el numero: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "el numero: "<<num<<" es PAR";
    }
    else
    {
        cout << "el numero: "<<num<<" es IMPAR";

    }
    return 0;
}