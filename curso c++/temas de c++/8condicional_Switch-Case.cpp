/*QUE ES LA CONDICION SWITCH-CASE = ESTRUCTURA DE SELECCION MULTIPLE  
(todo lo que puedes  hacer con if lo puedes hacer con esta condicional o biceversa)
Es una instruccion condiocional especialmente util cuando se neces9ra realizar acciones especificas segun el valor de una variable
util cuando necesitamos evaluar varias condiciones(solo funciona comparando tipos enteros int, char, long, etc
mo se puede utilizar para comparar cadena de caracteres (string) )
EJEMPLO:
-menus de opciones
-maquinas de esradis finitos
-implementacion de un interprete de comandos

switch= OPCIONES O INTERRUPTOR (variable){
  case = CASO valor1:
             //bloque de codigo para el valor 1
             break = ROMPER O SALIR;
 case valor2:
             //bloque de codigo para el valor 2
             break;
 case valor3:
             //bloque de codigo para el valor 3
             break;
 default = POR DEFECTO:
             // bloque de codigo para el caso cuando no cumpla ningun case

}
*/ 
#include <iostream>
using namespace std;
int main (){
 int opcion;
 cout<< "menu de opciones:\n";
 cout<< " 1. mostrar mensaje:\n";
 cout<< " 2. calcular la suma:\n";
 cout<< " 3. salir del programa:\n";
 cout<<"introduce la opcion deseada (1,2 o 3 )"<<endl;
 cin>>opcion;
    switch(opcion){
    
        case 1:
          cout<< " hola mundo elegiste la opcion 1 "<<endl;
          break;   
        case 2:
          int num1,num2,suma;
          cout<<"introduce dos numeros: "<<endl;
          cin>>num1;
           cin>>num2;
           suma= num1+num2; 
          cout<<" resultado de tu suma es: "<<suma;
           break;
        case 3:
            cout<<"saliendo del programa";
             break;    
        default:
           cout<< "opcion no valida: ";
    }
  

}

