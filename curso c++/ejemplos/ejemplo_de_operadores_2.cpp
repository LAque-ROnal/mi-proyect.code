#include <iostream>
using namespace std;
// esta funcion convierte cualquier string en minuscula
void  tolowerCast( string  &cadena){
    for ( int i= 0; i<cadena.length(); i++){
     cadena [i]= tolower (cadena[i]); 
    }
}


int main(){
  int edad;
  string medico;
  cout<<" introduce tu edad porfavor: ";
   cin>> edad;
   cout<<" pasaste el examen de medico(si/no):";
   cin>> medico;
   tolowerCast(medico);
    if(edad>= 18 && medico=="si"){

      cout<<"puedes obtener el carnet de conducir ";
    }
    else{

     cout <<"Eres menor de edad no cumples los requisitos";
    }


}