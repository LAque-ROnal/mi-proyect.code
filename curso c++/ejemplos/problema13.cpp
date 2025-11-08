//dado un caracter determinar si es vocal
#include <iostream>
using namespace std;
int main (){
    char caracter;
    string respuesta;
    cout << "ingrese el caracter: ";
    cin >> caracter;

    
    if (caracter == 'a' || caracter== 'A')
        respuesta = "ES VOCAL";
    if (caracter == 'e' || caracter == 'E')
        respuesta = "ES VOCAL";
    if (caracter == 'i' || caracter == 'I')
        respuesta = "ES VOCAL";
    if (caracter == 'o' || caracter == 'O')
        respuesta = "ES VOCAL";
    if (caracter == 'u' || caracter == 'U')
        respuesta = "ES VOCAL";
    respuesta= "NO ES VOCAL ";
    cout << "el caracter ingresado es: "<< respuesta;

    return 0;
}