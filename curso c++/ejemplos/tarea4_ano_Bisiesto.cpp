
#include <iostream>
using namespace std;
int main (){
    // un año bisiesto es aquel que tiene 366 dias en lugar de 365 por el mes de febrero
    int anio;
    cout << "ingrese un año: " << endl;
    cin >> anio;
    if ((anio % 4 == 0 && anio % 100 != 0 )|| (anio %400 ==0))
        cout <<anio<< "es un año bisiesto " << endl;
        
    else 
        cout <<anio<< " no es bisiesto"<< endl;

 return 0;
}