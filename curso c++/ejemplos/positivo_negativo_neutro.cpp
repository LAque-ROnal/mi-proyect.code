#include <iostream>
using namespace std;
int main (){
    int num;
    cout << "ingrese el numero: ";
    cin >> num;
    if (num >0 )
        cout <<"el numero: "<< num<< " es POSITIVO";
    else
        if (num<0)
            cout << "el numero: "<<num<<" es NEGATVO";
        else
            cout << "el numero: "<<num<< " es NEUTRO";


    return 0;
}