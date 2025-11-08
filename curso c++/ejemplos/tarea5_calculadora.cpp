#include <iostream>
using namespace std;
int main (){
    int a,b;
    int opcion;

    cout << "....................CALCULADORA..................................." <<endl ;
    
    cout << "ingrese el primer valor: " ;
    cin  >> a;
    cout << "ingrese el segundo valor: ";
    cin >> b;
    cout << "Elija la opcion que desea realizar: "<< endl ;
    cout << "1.suma\n2.restar\n3.multiplicacion\n4.dividir\n"<<endl ;
    cin >> opcion;
    if (opcion == 1 ){
        cout << "resultado de la suma es: "<< a + b <<endl; 
    }
    else
        if (opcion == 2)
        cout << "resultado de la resta es: "<< a - b <<endl; 
    
    else
        if (opcion == 3 )
        cout << "resultado de la multiplicacion es: "<< a * b <<endl;
    
    else 
        if (opcion == 4){
            if (b != 0)
                cout << "el resultado de tu division es: "<< ((float)a /b)<< endl;
            else
                cout << "ERROR !! no es posible dividir entre 0 "<< endl;
       
        }
    else
        cout << "opcion no valida !!"<< endl ;
    
    return 0;
}