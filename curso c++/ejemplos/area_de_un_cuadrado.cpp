#include <iostream>
// libreria para hacer operacione matematicas
#include <math.h> 
#include <cmath> 
using  namespace std;
int main (){
  double lado =0;
  double area = 0;
  cout <<" ingrese el lado del cuadrado" << endl;
  cin >> lado;
  area = pow (lado,2);
  cout<<" el area del cuadrado de"<<lado<< "es: " << area <<" u "<< endl;
  


    return 0;
}
