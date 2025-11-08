#include <iostream>
using namespace std;
int main(){
    int num(0);
    int ni(0);
    int r(0);

    cout<<"\n ingrede un numero de 5 DIGITOS :";
    cin>>num;
    r=num%10;
    num=num/10;
    ni=r*10;
    
    r=num%10;
    num=num/10;
    ni=(ni+r)*10;

    r=num%10;
    num=num/10;
    ni=(ni+r)*10;

    r=num%10;
    num=num/10;
    ni=(ni+r)*10;
    ni = ni+num;
    cout<<"inverso: "<<ni<<endl;



}