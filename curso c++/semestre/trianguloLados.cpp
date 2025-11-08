#include <iostream>
using namespace std;

int main (){
    int a,b,c,res;

    cout<< "ingrese el primer lado del triangulo: ";
    cin>>a;
    cout << "ingrese el segundo lado del triangulo: ";
    cin>> b;
    cout << "ingrese el tercer lado del triangulo: ";
    cin>>c;
    res= (a+b>c)&&(c+b>a)&&(c+a>b);

    if (res){
        cout << "los lados forman un tringulo"<<endl;
        if (a==b && b==c){
          cout << "forma un triangulo equilatero"<<endl; 
        }
        else{
            if (a==b || b==c || a==c){
                cout<< "forma un triangulo isosceles"<<endl;
            }
            else{
                cout<<"forma un triangulo escaleno"<<endl;
            }
        }
    }
    else
        cout <<"no forma ningun triangulo"<<endl;

    


    return 0;
}