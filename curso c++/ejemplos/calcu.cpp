#include <iostream>
using namespace std;
int main (){
    int num1,num2;
    float resultado;
    char operador;
    cout << "introduce el primer numero: ";
    cin >> num1;
    cout << "introduce el segundo numero: ";
    cin >> num2;
    cout << "que operador desea realizar (+ - * /): ";
    cin>> operador;
    switch (operador){
        case '+':
            resultado =num1 +num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultado = (float)num1 / num2;
            else 
                resultado = 0;
        break;
        default:
            cout << "operador inexistente!!";
    }
    cout << "EL RESULTADO DE TU OPERACION ES: "<<resultado;
    return 0;
}