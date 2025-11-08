#include <iostream>
using namespace std; 
int main (){

    float suma=0;
    float baja=9999;
    float a,calif,media;
    for (a=1;a<=20; a++){
        cout <<a<<". ";
        cin>>calif;
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