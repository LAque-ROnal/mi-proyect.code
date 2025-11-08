#include <iostream>
using namespace std;

int main ()
{
  double num1 , num2 ;
  string elec;
  char opcion;
  float r=0;

  cout << "...........................calculadora.................................."<< endl;
  cout << "dame el primer valor: ";
  cin >> num1;
  cout << "dame ele segundo valor: "; 
  cin >> num2;
  cout << "ingresa que opreacion desea hacer: ";
  cout << " + , - , * , / : ";
  cin >> opcion;
  switch (opcion)
  {
    case '+':
        r= num1+num2;
        break;
    case '-':
        r= num1-num2;
        break;
    case '*':
        r = num1*num2;
        break;
    case '/':
        if(num2!=0)
            r=num1/num2;
        else
            r=0;
        break;
    default:
        cout << "el operador no es valido !!!";
  }

   cout << " el resultado de tu " << opcion << " es: "<< r<< endl  ;
   cout << "...................................................";

 return 0;

}