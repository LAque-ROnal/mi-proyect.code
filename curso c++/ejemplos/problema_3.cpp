#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 ||
        num == 13 || num == 17 || num == 19 || num == 23 || num == 29 ||
        num == 31 || num == 37 || num == 41 || num == 43 || num == 47 ||
        num == 53 || num == 59 || num == 61 || num == 67 || num == 71 ||
        num == 73 || num == 79 || num == 83 || num == 89 || num == 97) 
   {
       
        cout << "Es primo." << endl;
   
    } 
    else
    { 
        if (num > 1 && num <= 100) 
        {
           cout << "No es primo." << endl;
        } else 
        {
          cout << "Número fuera de rango o no válido." << endl;
        }
    }
  return 0;
}