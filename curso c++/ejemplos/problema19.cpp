/*un restaurante ofrece un descuent0 de 10% para consumos de hasta s/100.00 
y un descuento de 20% para consumos mayores,para ambos casos se aplica un impuesto del 19%. 
determinar el monto del descuento, el impuesto y el importe a pagar
*/
#include <iostream>
using namespace std;
int main (){
    const float D1=0.1;
    const float D2=0.2;
    const float IGV= 0.19;
    float c,m_d,m_igv,p;
    cout << "inserte el consumo: ";
    cin >> c;
    if (c<=100)
        m_d=c*D1;
    else
        m_d= c * D2;

    m_igv= (c - m_d) * IGV;
    p = (c - m_d) + m_igv;
    cout << "monto de descuento: "<<m_d<<endl;
    cout << "impuesto IGV: "<<m_igv<<endl;
    cout << "importe a pagar: "<<p<<endl;
        

    return 0;
}