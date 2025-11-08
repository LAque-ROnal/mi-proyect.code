#include <iostream>
using namespace std;
int main (){
    int num;
    cout << "ingrese le numero: ";
    cin >> num;
    if (num > 0)
        cout << "el numero: "<<num<< " es POSITIVO"<<endl;
    else 
        if (num < 0)
           cout << "el numero: "<<num<< " es NEGATIVO"<<endl;
    else 
        cout << "el numero: "<<num<< " es CERO"<<endl;      


    return 0;
}
