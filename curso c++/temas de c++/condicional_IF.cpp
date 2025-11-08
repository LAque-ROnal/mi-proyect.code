/* QUE ES UNA CONDICION 
Una condicion es un expresion que puede ser verdadera true o falsa false es para que tu programa 
decida que camino va jecutar
QUE ES IF = SI
Verifica si un codigo es verdadero si lo es ejecuta una bloque de codigo
QUE ES ELSE = SI NO , O DE LO CONTRARO
tu programa ejecuta esta condicion si no se cumple tu bloque de codigo*/
#include <iostream>
using namespace std;
int main (){

    /*se da beca si su calificacion es mayor a 8 0 sila distancia
    del domicilio es superior a 20 km ademas los ingrsos familiares tienn que ser menor a 20.000 bs*/
  int calificacion, distancia_centro,ingreso;
  cout<<"porfavor indroduce la calificaion: ";
  cin>> calificacion;
  cout<< "introduce la distancia al centro: ";
  cin>> distancia_centro;
  cout<< " ingreso total de la familia(Bs): ";
  cin>> ingreso;
  // el operadorr || o logico  el resultado de evaluar la condicin sea verdad si se cuample una o las dos
  // el operador logico &&  obliga aque las condiciones sean verdad de al lado por eso es necesario usar parentesis
  if (calificacion>8 || (distancia_centro> 20 && ingreso < 20.000)){ 
      cout <<" Tienes derecho ala beca";                           

    } 
    else{

      cout <<"no cumples los requisitos necesarios";
    }
    












}