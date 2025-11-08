/*BUCLE FOR-EACH = por cada
Sirve para recorrer colecciones, como los arraays o los contenedores(vector,list,st,map,etc)
SINTAXIS
for(declaracion: contenedor){cuerpo}
for (int n 'declarar variable' : numeros 'coleeciones que quieres recorrer' ){
  cout << n <<endl;
}
*/

#include <iostream>
using namespace std;
int main (){
    /*int edades []{15,25,67,7,98,45,45,67,67,8,9,87};
    for(auto e : edades){ // c++ puede detectar que tipo de dato es como auto
     cout <<e<<endl;
    }*/

    string nombre= "RonalLaque";
    for(auto  n : nombre){ 
        cout<<n<<endl;
        if(n == 'q' ) cout<<" ENCONTRE LA Q "<<endl;
        else cout<< "no se pudo encontrar "<<endl;
        
    }
   
}