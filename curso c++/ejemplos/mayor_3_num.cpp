#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,b,c,mayor;
    cout << "introducir un numero entero:";
    cin>>a;
    cout << "introducir un numero entero:";
    cin>>b; 
    cout << "introducir un numero entero:";
    cin>>c;
    if(a>b)
        mayor=a;
    else
        mayor=b;
    if(c>mayor)
        mayor=c;
    cout <<"el mayor es "<< mayor;




   
}

