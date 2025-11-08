//al ingresar la temperatura obtener el tipo de clima segun la tabla:
/*
    TEMPERATURA         CLIMA
    temp <10              frio
    temp entre 10 y 20  nublado
    temp entre 21 y 30  calor
    temp > 30           tropical

*/
#include <iostream>
using namespace std;
int main (){
    int temp;
    string res;
    cout << "ingrese la temperatura: ",
    cin>> temp;

    if (temp < 10)
        res="FRIO";
    else
        if (temp>=10 && temp <=20)
            res = "NUBLADO";
        else
            if (temp >= 21 && temp <=30)
                res = "CALOR";
            else
                res = "TROPICAL";
    cout << res;

    return 0;

}