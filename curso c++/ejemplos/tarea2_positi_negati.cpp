# include <iostream>
using namespace std;
int main(){
 
    int num1, num2;
    cout << "ingrese dos numeros enteros : " << endl;
    cin >> num1;
    cin >> num2;

    if (num1 >0)
        cout << "el numero positivo es:  "<<num1<< endl;
    else 
        if (num1 < 0)
            cout << "el numero negativo es: "<< num1<< endl;
        else   
            cout << "cero "<< endl;
    
    if (num2 >0)
        cout << "el numero positivo es:  "<<num2<< endl;
        else
            if (num2 < 0)
                cout << "el numero negativo es: "<< num1<< endl;
            else   
                cout << "cero "<< endl;
    return 0;
}