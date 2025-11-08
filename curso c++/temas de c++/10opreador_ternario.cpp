/*OPERADOR TERNARIIO
Es una forma de escribir la estructura if-else abreciada
SINTAXIS
(condicion)? verdadero : falso;*/
#include <iostream>
using namespace std;
int main(){
    // numero impar o par entero
    int num(0);
    cout <<" dame un nunero entero positivo: ";
    cin>> num;
    cout<<"el numero "<<num<<((num%2==0)? " es par ":" es impar");// poner() para la precedencia de opreadores(orden en el que de evalua los operadores)

    //otro ejemplo
    int edad;
    cout << "introduce tu edad: ";
    cin >>edad;
    string edades= (edad>=18)? "eres mayor de edad": "eres menor de edad";
    cout << edades;

    //otro ejemplo
    int num1 ,num2;
    cout << "introduce los dos numeros: "<<endl;
    cin>>num1;
    cin>>num2;
    int mayor = (num1>num2)? num1:num2;
    cout << "el MAYOR ES: "<<mayor;



}