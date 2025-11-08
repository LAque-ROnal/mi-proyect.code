#include <iostream>
using namespace std;

int main (){
   int a,b,c,mayor;

    cout<<"numero: ";
    cin>>a;
    cout<<"numero: ";
    cin>>b;
    cout<<"numero: ";
    cin>>c;

    /*if (a>=b && a>=c){

        cout << "mayor: "<<a;
    
    }
    else{ 
        if  (b>=a && b>=c){
         cout << "el mayor es: "<< b;
        }
        else
        cout <<"el mayor es: "<<c;
    }
    // otra forma mas sencilla de encontrar el mayor de tres nuemros*/

    mayor =a;

    if (b>mayor)
        mayor=b;
    if (c>mayor)
        mayor=c;
    cout <<"el mayor es: "<<mayor;







    return 0;
}