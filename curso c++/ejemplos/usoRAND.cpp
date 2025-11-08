#include <iostream>
#include <cstdlib> // para generar numeros aleatorios
#include <ctime> // para time generar cada vez numeros aleatrios
using namespace std;
int main (){
        srand(time(NULL));
        float suma=0;
        float baja=9999;
        float a,calif,media,n;
        cout <<"ingrese la cantidad de calificaciones: ";
        cin>>n;
    for (a=1;a<=n; a++){
        calif = rand() % 101;
        cout <<a<<". "<<calif<<" "<<endl;
        suma=suma+calif;
        if(calif<baja){
            baja=calif;

        }
    
    }
    media=suma/20;
    cout << "media= "<<media<<endl;
    cout << "baja= "<<baja<<endl;


    return 0;
}