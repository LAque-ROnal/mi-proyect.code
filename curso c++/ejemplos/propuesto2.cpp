#include <iostream>
#include<cmath>
using namespace std;
int main (){
    //Dado dos numeros enteros, determinar cuantos números enteros están incluidos en ellos.
    //variables
    int a,b,incluidos,paso,i;
    //entrada 
    cout << "dame el primer valor: ";
    cin>> a;
    cout << "dame el segundo valor: ";
    cin>> b;
    //proceso
    incluidos= abs(b-a)+1;
    paso=(b-a)/abs(b-a);
    i=a;
    for (int j=0; j< incluidos; j++)
    {
        cout <<i<<" ";
        i=i+paso;
    }
    
    //salida
    cout<< "los numerso incluidos desde "<<a<< " y "<< b<<" son: " << incluidos;





    return 0;
}