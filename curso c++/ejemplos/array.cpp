#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int cantidad;
    cout << "ingrese la cantidad de elementos: ";
    cin >>cantidad;
    vector <double> laque(cantidad);
    int nuevo=0;
    for (int i=0 ; i<cantidad ; i++){
        cout << "elemeno N°: "<< i<< endl;
        cin>>nuevo;
        laque.push_back(nuevo);
        
    }
    cout << "ELEMENTOS DE UN VECTOR: "<<endl;
    for (int i= 0 ; i<laque.size(); i++){
        cout << laque.at(i)<< " ";
    }



    return 0;
}