//calculo de una ecuacion cuadratica 4x^2 + 5x - 5 =0  (ax^2 + bx + c)
#include <iostream>
#include <math.h>
using namespace std;
int main (){
  float a,b,c,x1,x2,d;
  cout << "dame el coeficiente a: ";
  cin >>a;
  cout << "dame el coeficiente b: ";
  cin >>b;
  cout << "dame el coeficiente c: ";
  cin >>c;
   d=b*b-4*a*c;
   if(d<0)
        cout << "no tiene soluciones reales !!";
    else{
        x1=(-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
        cout << "el resultado de tus raices son :" <<endl;
        cout <<"x1 = "<< x1 << endl;
        cout <<"x2 = "<< x2<< endl;
    }
 
    return 0;
}

