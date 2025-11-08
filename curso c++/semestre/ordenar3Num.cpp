#include <iostream>

using namespace std;

int main (){
    int a , b,c ;

    int menor,medio,mayor;

    cout << "introduce el un numero: ";
    cin >> a ;
    cout << "introduce el un numero: ";
    cin >> b;
    cout << "introduce el un numero: ";
    cin >> c ;

    if (a>=b){
        mayor=a;
        menor=b;
    }
    else{
        menor=a;
        mayor=b;
    }

    if(c>=mayor){
        mayor=c;
    }

    if (c<=menor){

        menor= c;
    }
    

    medio=(a+b+c)-(menor+mayor);

    cout << "los numeros odenados son: ";

    cout <<menor<<", " <<medio<<", "<< mayor<<", "<<endl;







    return 0;
}