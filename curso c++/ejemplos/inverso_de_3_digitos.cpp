#include <iostream>
using namespace std;
int main(){
  //invrso de trs digitoa
  int num(0);
  int residuo(0);
  int inverso(0);
  cout<<"dame un digito de 3 numeros"<<endl;
  cin>>num;
  //operaciones
  residuo=num%10;
  num=num/10;
  inverso = residuo*10;

  residuo=num%10;
  num=num/10;
  inverso=(inverso+residuo)*10;



  inverso=inverso+num;

  cout <<"inverso de tu numer0 es: "<<inverso;
    

 












}