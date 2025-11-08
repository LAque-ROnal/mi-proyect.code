/*BUCLES
-son estructuras repetitivas fundamentales (estructura = forma de agrupar varios datos)
-Surgen por la necesidad de ejecutar varias veces el mismo codigo en un programa
- Puede repetir o ejecutr un bloque o miles de bloques o lineas de codigo
PARTES
- Los bucles estan formados por una cabecera y cuerpo
cabecera: contiene la condicion del bucle
cuerpo: contiene el codigo a repetir
TIPOS DE BUCLE
-determinados : son aquellos que sabemos anteds de ejecutar el prgrama.
cuantas veces se ejecuta(repetira) el codigo de su interior
- FOR = para
SINTAXIS
for(int=0[empieza en 0] inicializacion; i<5[repite mientras se cumpla] condicion; i++[suma 1 en cada vuelta] incremento){
 //codigo a ejecutar
}
-indeterminados :son aquellos que no sabemos 
hasta ejecutar el programa cuantas veses se ejcutara el codigo en su interior
- WHILE = mientras
- DO-WHILE = hacer mientras o hacer hasta que el codigo sea falsa
while(condicion){
  //linea de codigo a ejecutar
  //condicion que puede cambiar dentrop del bucle
}

*/
//BULE FOR
#include <iostream>
using namespace std;
int main (){

    /*for(int i=0; i<10 ; i++){
     cout<<"FNI"<<endl;
    }
    //ler un array con un for

    int edades []={20,28,4,8,9};
    for(int i=0 ; i<5;i++){
      cout <<"edad: " << edades[i]<<endl;
    }*/
   //leer array bidimencional con for

   int edades [3][5]={
       {20,28,4,8,9},
       {23,34,56,8,43},
       {34,43,7,4,9}
    };

    for(int i=0 ; i<3;i++){

        for(int j=0 ; j<5; j++){
          cout <<"edad: " << edades[i][j]<<endl;
        }
    }



}

