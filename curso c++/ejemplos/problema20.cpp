//determinar el monto de descuento,el importe del impuesto y el importe a pagar
/*
consumo            descuento %
hasta 100           10
mayor a 100         20
mayor a 200         30

*/
#include <iostream>
using namespace std;
int main (){
    const float D1=0.1;
    const float D2 = 0.2;
    const float D3 = 0.3;
    float igv= 0.19;
    float des,impuesto,importe,consumo;
    cout << "inserte ele monto: ";
    cin >> consumo;

    if (consumo > 200)
        des=consumo * D3;
    else
        if (consumo >100)
            des= consumo * D2;
        else 
            des = consumo * D1;
    
    impuesto = (consumo - des) * igv;
    importe = (consumo - des)+impuesto;

    cout << "monto descuento: "<<des<<endl;
    cout << "impuesto igv: "<<impuesto<<endl;
    cout << "importe total :"<<importe;

    return 0;
}