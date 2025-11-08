#include <iostream>
using namespace std;
int main(){
  int eleccion;
  string e;
  cout << "introduce un numero para poder elegir una estacion del año : "<< endl;
  cout << "1: primavera 2: invierno 3: verano 4: otoño: ";
  cin>> eleccion;

  switch (eleccion)
  {
    case 1:
        e= "primavera";
        break;
    case 2:
        e= "invierno";
        break;
    case 3:
        e=  "verano ";
       break;
    case 4:
       e=  "otoño ";
        break;
    default:
       e= "la opcion que elegiste no existe ";
  }

  cout << "la opcion que elegiste fue : "<< e;


  return 0;


}
