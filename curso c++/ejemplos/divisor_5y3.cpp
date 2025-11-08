#include <iostream>
using namespace std;
int main (){
    int num;
    cout<< "ingrese numero para saber si es multiplo de 3 y 5: ";
    cin >> num;
    if (num % 3 == 0 && num % 5 ==0)
        cout << "el mumero: "<<num<< " es MULTIPLO DE 3 Y 5";
    else 
        if (num % 3 ==0)
        {
            cout << "el numero: "<<num<< " es MULTIPLO DE 3.";
        }
        else if (num % 5 == 0)
        {
         cout << "el numero: "<<num<< " es MULTIPLO DE 5.";
        }
    else
        cout << "el numero: "<<num<< " no es multiplo de 3 ni de 5. ";
    
  return 0;

    
}