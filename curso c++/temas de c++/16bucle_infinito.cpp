/*bucle infinito 
en C++ es un ciclo que nunca termina porque su condición de terminación nunca se cumple. 
Esto significa que el bloque de código dentro del bucle se ejecuta una y otra vez sin detenerse, 
a menos que intervenga una acción externa (como un break, una señal del sistema, o el cierre forzado del programa).*/

// ejemplo:
/*for (;;){

      cout << "hola";
    }
 
    while (true){

        cout << "bug ";
    }*/
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
//#include <bits/stdc++.h> // es un biblioteca que tiene muchas funciones
using namespace std;
double leerTemperatura (){

  return 20.0 + (rand ()%20);
}
void esperarSegundos(int segundos){

 this_thread ::sleep_for(chrono::seconds(segundos));
}
int main (){

    const double LimiteTemperatura =35.0;
    while (true ){
      double TemActual = leerTemperatura();
      cout << "temperarura actual :"<< TemActual<< "°c"<< endl;
      if (TemActual>LimiteTemperatura){
        cout << "ALERTA TEMPERATURA ELEVADA "<< TemActual<< "°C"<< endl;
      }
      esperarSegundos(1);
    }

  


  return 0;
}