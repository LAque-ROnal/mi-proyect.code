#include <iostream>
using namespace std;
int main (){
    float salario,utilidad;
    int antig;
    cout<<"salario: ";
    cin>> salario;
    cout<< "antiguedad: ";
    cin >> antig;
    if (antig < 1)
    {
        utilidad = salario *5 /100;
    }
    else if (antig >= 1 && antig <2 )
    {
        utilidad = salario *7 /100;
    }
    else if (antig >= 2 && antig <5)
    {
        utilidad = salario *10 /100;
    }
    else if (antig >= 5 && antig <10)
    {
        utilidad = salario *15 /100;
    }
    else
    {
        utilidad = salario *20 / 100;
    }
    cout << "la utilidad del trabajador es: "<<utilidad;
    return 0;
}