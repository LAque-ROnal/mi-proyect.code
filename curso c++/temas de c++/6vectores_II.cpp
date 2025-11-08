/*
metodo .at() //para acceder  a cualquir elemento o aignarle un valor
metodo .push_back() para agregar en la parte trasera del vector valores en los parametros se poner valores no la posicion
erase () para eliminar un elemento de un vector o varios elementos permite un parametro o dos
insert ()  insertar elemento a un vectoor en cualquier luagar 
para que el vector cresca
sirven para trabajar dinamicamente*/
#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector<int> laque {3,7,8,9};
  

   laque.push_back(105);
   //cout << laque.at (4);
   for(int i=0 ; i<laque.size();i++){// for esta compuesto d e 3 partes inicializacion(indica el valor de inicio),condicion de lbucle, incremento
    cout << laque.at(i)<<endl; //size muestra cuanto elementos hay dentro de un vector
   }


}
