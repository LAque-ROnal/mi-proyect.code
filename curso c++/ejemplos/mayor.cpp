#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,b,mayor;
    cout << "introducir un numero entero:";
    cin>>a;
    cout << "introducir un numero entero:";
    cin>>b; 
    mayor=(a+b+abs(a-b))/2;
    cout << "el mayor es:"<<mayor << endl;
    return 0;
}
