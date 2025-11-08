/* OPERADORES
ASIGNACION (=, +=, -=, *=, /=)
ARITMETICOS(+, -, *, /, %[modulo o residuo] , a++ a-- [sufijo], ++a, --a [prefijo])
COMPARACION (< menor que , > mayor que , <= menor o igual , >= mayor igual  ,== igual que , != diferente que )
una condional es un estructura,  es la forma en la que un programa toma desiciones, le dice al programa :
"si pasa esto , haz esto" es como pregunta al programa y dependiendo de la respuesta haces una cosa u otra.
LOGICO(! negacion(invierte la logica) , $$ y logico (y ademas), || o logico)
NIVEL BIT
*/
#include<iostream>
using namespace std;
int main(){
  
  int num(0);
  bool primo= true;

  cout<<"introduce un numero positivo: "<<endl;
  cin>> num;
    for(int i=2 ; i<=num/2; i++){
        if(num % i == 0){
          primo=false;
          break;
        } 
    } 
   if(primo){
       cout<< num<< " el numero es primo"<<endl;
    }else{

      cout <<num <<" el numero no es primo"<<endl;
    }
 


 }