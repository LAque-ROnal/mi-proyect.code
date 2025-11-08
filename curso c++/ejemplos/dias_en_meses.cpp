#include <iostream>
using namespace std;
int main (){
    int mes ,anio,UltDia;
    cout << "introduce el mes: ",
    cin>> mes;
    cout << "introduce el anio: ";
    cin >> anio;
    switch (mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            UltDia= 31;
            break;
        case 4: case 6: case 9: case 11:
            UltDia = 30;
            break;
        case 2:
            if ((anio % 4 ==0 && anio % 100!=0) || (anio % 400 ==0))
                UltDia = 29;
            else 
                UltDia = 28;
            break;
        default:
            cout << "mes invalido!!";
    }
    if (mes>=1 && mes <=12)
        cout << "total dias del mes: "<<UltDia;

    return 0; 
}