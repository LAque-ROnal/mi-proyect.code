#include <iostream>

using namespace std;


int main (){
    int a ,b ,c,mayor;

    cout<<"numero: ";
    cin>>a;
    cout<<"numero: ";
    cin>>b;
    cout<<"numero: ";
    cin>>c;
    mayor =(a+b>c)&& (a+c>b)&&(c+b>a);

    if(mayor){
        cout << "los lados si forman un triangulo"<<endl;
        if(a==b && b==c){
            cout << "forma un triangulo equilatero"<< endl;
        }
        else
            if(a==b || a==c || b==c ){

                cout << "forma un triangulo isosceles"<< endl;

            }
            else
                cout << "forma un triangulo escaleno"<<endl;

   
    }
    else
        cout << "no forma ningun tipo de triangulo";

   return 0;
}
