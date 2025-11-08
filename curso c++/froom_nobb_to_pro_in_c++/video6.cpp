#include <iostream>
using namespace std;
int main (){

    //constantes
    const int HORA = 3600;
    const int MINUTO = 60;

    //variables
    int tiempo, horas, minutos, segundos;

    //entraada
    cout << " tiempo en segundos que quieras convertir: ";
    cin >> tiempo;

    //proceso
    horas = tiempo / HORA;
    tiempo = tiempo % HORA;
    minutos = tiempo / MINUTO;
    segundos = tiempo % MINUTO;

    //salida
    cout << "horas: "<<horas<<endl;
    cout << "minutos: "<<minutos<<endl;
    cout << "segundos: "<< segundos<< endl;





    return 0;
}