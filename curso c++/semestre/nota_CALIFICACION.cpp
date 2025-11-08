#include <iostream>
using namespace std; 
int main () {
    //variables
    int n;
    string resp;
    //entrada
    cout << "introduce tu nota : ";
    cin >> n;
    //calculos
    if(n<51)
        resp = "reprobado";
    if (n>= 51 && n<70)
        resp = "regular";
    if (n>=70 && n<90)
        resp = "bien";
    if (n>= 90 && n<= 100)
        resp = "excelente";
    //salida
    cout << resp;

    return 0;
}