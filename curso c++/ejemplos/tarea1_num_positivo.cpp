
# include <iostream>
using namespace std;
int main(){
 
    int num1, num2;
    cout << "ingrese dos numeros enteros : " << endl;
    cin >> num1;
    cin >> num2;

    if (num1==num2){
        cout << "Ambos numeros son iguales ";
    }
    else {
        if (num1 > num2 ){
            cout <<"el mayor es: "<<num1<< endl;
            cout << "el menor es: " << num2<< endl;
        }
        else{
            cout <<"el mayor es: "<<num2<< endl;
            cout << "el menor es: " << num1<< endl;
        }
    }

 return 0;
}