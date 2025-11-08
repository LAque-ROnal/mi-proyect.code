#include <iostream>
using  namespace std;
int main (){
 //conversion de dolares a bolivianos
  const double boliviano = 6.98;
  int dolares = 0;
  int conversiion =0;


  cout <<"ingrese la cantidad de dolares:"<< endl;
 
  cin >> dolares;

  conversiion = dolares * boliviano;
  cout<< dolares <<" $ en bolivianos son: " << conversiion <<" bolivianos"<< endl;
 return 0;
}

