#include <iostream>
using namespace std;
int main (){
    float temperatura;
    cout << "ingrese la temperatura corporal (grados celsius): ";
    cin >> temperatura;

    if (temperatura> 37.5)
    {
        cout << "la persona tiene fiebre. "<< endl;
    }    
    else
        if(temperatura >= 36.0 && temperatura <= 37.5 )
        {
            cout << "la persona tiene temperatura normal. "<< endl;
        }
        else 
        {
            cout << "la persona tiene hipotermia. "<<endl;  
        }



    return 0;
}