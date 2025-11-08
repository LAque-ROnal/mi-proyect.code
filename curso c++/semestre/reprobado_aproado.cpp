#include <iostream>
using namespace std;
int main (){
    //variables
    int n;
    string res;
    //entrada
    cout << "introduce la nota: ",
    cin >>n;
    //calculos
    if (n>=51 && n<= 100)
        res = "aprobado";
    else 
        if(n >= 0 && n <=50)
        res = "reprobado";
        else 
            res=  "INEXISTENTE !!";
    //salida
    cout <<res;
    return 0;

}