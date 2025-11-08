/*WHILE= mientras
SINTAXIS
while(condicion a evaluar verdad o falsa){  cuerpo  }
ejemplo:
while(num!=0){
 // codigoa ajecutar
}*/
#include <iostream>
using namespace std;
int main (){
   /*int num(1) ;
   while(num<=10){
        if(num %  2==0){
          cout <<num<<" Es par"<<endl;
        }
        num++;
    }  */  
    int num,suma=0;

    cout <<"ingres un numer0 (0 para salir de programa): ";
    cin>>num;
    while(num!=0){
        suma=suma+num;
        cout <<"ingres un numer0 (0 para salir de prorama): ";
        cin>>num;
    }
   cout<<"la suma total de todoss los numeros ingresados: "<<suma;


}