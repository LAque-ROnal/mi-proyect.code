 /*-QUE ES UN ARREGLO:
 un arreglo es un tipo de variable grande que almacena valores grandes , valores del mismo tipo
 ejemplo: 
         una variable es como una cajon que almacena variables mientra que un arreglo seria como un 
 armario grande donde dentro de ese armario estaria los cajones o  arreglos
 -PARA QUE SIRVEN:
 Para almacenar valores que tiene relacion entre si
 ejemplo: 
          en una escuela quiero almacenar la edad de 1.500 estudiante pues lo puedo hacer uno por uno con 
 variables pero no seria eficiente en eso entraria los arreglos en ves de crear uno por uno con las variables
 pues utilizo lo arreglos donde almaceno todo en uno 1.500
 -SINTAXIS:
 Int(tipo de dato de array entero,decimal etc) mi_matriz(nombre de mi arreglo)[n](la cantidad de elementos que va almacenar mi arreglo valor fijo)
 ejemplo : 
          int mi_matriz [5]
 -DECLARACION Y INICIALIZACION 
 ejemplo: 
          *int_matriz[5]{5,60,12,34,1};
          *int_matriz[5]{5,60}; = los 3 siguientes son de valor 0 
          *const double salario{20}; para inicilar todos con dato numerico
            double mi_matriz[salario]{2.1000};
          *int mi_matriz []{12,23,56,56,67}; = mi arreglo asume que tiene valor de [5]
 */ 


#include <iostream>
using namespace std;
int main(){
 
 /*int matrix[]{15,26,23};
 cout<< matrix[1]<< endl;
 cout<< matrix[2]<< endl;*/
 const int personas {12};
 int edad [personas]{12,12,34};
 cin>> edad[12]; // pedir un valor al usuario desde ele teclado en la posicion 12
 cout << "la edad es de : "<<edad[12]<<" años"<< endl;

 int arre [4];
 arre[1]=12;  //acceder en una posicion del array
  // los valores se pueden cambiar
  cin >> arre[1];
 cout << arre [1];
 
 
 
 
 
} 
