#include <iostream>
using namespace std;
int main (){
    //mayor de 3 numeros 
    //variables
    int a,b,c,m;
    //entrada
    cin>>a>>b>>c;
    if (a>b)
        if(a>c)
            m=a;
        else
            m=c;
    else
        if(b>c)
            m=b;
        else
            m=c;       
    cout <<"MAYOR DE LOS 3 NUMEROS ES: "<< m;
    
    return 0;
}