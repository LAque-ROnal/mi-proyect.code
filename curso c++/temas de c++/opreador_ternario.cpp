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




}