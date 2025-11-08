/*QUE ES UN VECTOR
-un vector es una clase de la libreria estndar de c++.Esta clase crea estructuras contenedoras
para almacenar datos secuenciales
-los vectores pueden crecer o decrecer en tamaño de forma dinamica(varia su tamaño)
-sintaxis similar alos arreglos
-almacena los valores en posiciones separadas y see pude acceder con punteros
CARACTERISTICAS: 
-tamaño dinamico 
- los elementos alamacenados en su interior son del mismo tipo
- primer elemento tiene indice de 0
- el ultimo elemento tiene indice -1
- se interactuan con bucles
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // declaracion e inicializacion
 /*vector <int> records{4,5,6,86,7};

 vector<char> laque(10);
   for(int i=0 ; i<4 ; i++){
      cout << records[i] <<endl;
     
    }*/
   vector <double> salario(10,12.66666); // para repetir valores ()
   /*for(int i=0 ; i<345 ; i++)  // for bucle determinado
     cout<< salario[i]<< endl;
   }*/
  int i=0;
   while (i<salario.size()){  // while bucle indeterminado

    cout<<salario[i]<<endl;
    i++;
   }
}