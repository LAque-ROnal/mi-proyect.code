#include<iostream>
using namespace std;
int main (){
 // arreglo de 3 dimensiones
   /*int coches[24][31][12];// hora dia mes
   //15 de mayo 2 de la mañana
    coches[2][14][4]=4;
    cout<< "el 15 de mayo alas 2 de la mañana pasaron:"<< coches[2][14][4]<< " coches";*/
    int coches[24][31][12];
    for( int i=0 ; i<24;i++){

        for (int x=0; x<31; x++){

            for(int z=0; z<24;z++){
              coches[i][x][z]= rand() % 1000;// funcion paraque te genere numeros aleatorios
              
            }
        }

    }
    //ver el arreglo 
 cout << "veremos todos los datos de mi arreglo: "<<endl;

    for( int i=0 ; i<24;i++){

        for (int x=0; x<31; x++){

            for(int z=0; z<24;z++){
             
             cout<< coches[i][x][z]<< " ";
            }
        }
     cout<<endl;
    }
    
 cout << "el 29 de julio alas 19:00 de la tarde pasaron: "<< coches[19][28][11]<< " coches";
}   
      