#include <iostream>
#include <math.h>
using namespace std;
int main(){
   int num1,num2;
   int mayor,menor;
   cout<<"dame le primer valor: ";
   cin >>num1;
   cout <<"dame el esegundo valor: ";
   cin>> num2;
   mayor=(num1+num2+abs(num1-num2))/2;
   menor =(num1+num2-abs(num1-num2))/2;
   cout << "el mayor es: "<< mayor<<endl;
   cout << "el menor es: "<< menor<<endl;

  return 0;




}