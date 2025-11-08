#include <iostream>
using namespace std;

int main (){

    int num1, num2;
    float r;
    char o;
    cout << "introduce un nuemro entero: ";
    cin >> num1;
    cout << " introduce un numero entero: ";
    cin >> num2;

    cout << "seleccione la operacion que deseaz realizar: "<<endl;
    cout<< "suma +"<<endl;
    cout << "resta - "<< endl ;
    cout << "multiplicacion *"<< endl;
    cout << "division /"<< endl;
    cin >> o;

    switch (o)
    {
        case '+':
            r=num1+num2;
            break;
        case '-':
            r=num1-num2;
            break;
        case '*':
            r=num1*num2;
            break;
        case '/':
            if (num2!=0)
            {
                r=(float)num1/num2;
            }
            else
                r=0;

            break;
        default: cout<<"el operador no es valido"<<endl;



    }

    cout<< "el resultado de tu operacion es: "<<r;





    return 0;
}