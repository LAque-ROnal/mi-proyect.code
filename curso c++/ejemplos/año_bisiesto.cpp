#include <iostream>
using namespace std;
int main (){

    int a,m;
    cout << "ingrese el mes del año: ";
    cin >> m;
    if (m>= 0 &&  m <13){
        if (m==2){
            cout << "ingrese el ano: ";
            cin >> a;
            if((a%4== 0 && a%100!=0) || ( a%400==0)){
                cout << "febrero tiene 29 dias y es un año biciesto " << endl;
            }else 
            cout << "febresro tiene 28 dias y no es un año bisiesto ";
        }else
            if ((m%2!=0 && m>0 && m<8)||(m>= 8 && m%2==0)){
              cout << "el mes tiene 31 dias";

            }else{ 
             cout << "el mes tiene 30 dias ";
            }
    }
    else
    {
        cout << "NO ES UN MES DEL AÑO!! ";
    }

    return 0;
    
}