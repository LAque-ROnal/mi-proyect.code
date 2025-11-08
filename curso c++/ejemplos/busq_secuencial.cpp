# include <iostream>
#include <cstdlib>
# include <ctime>
using namespace std;
int main (){
    int u[400];
    int n;
    int clave;
    cout << "tamaño de tu vector: "<<endl;
    cin>> n;
    
    srand(time(0));
    for (int i= 0; i<n;i++)
    {
        u[i]=rand()%40;
    }
  cout << "datos del vector"<<endl;
  for (int i= 0; i<n;i++)
  {
      cout << u[i]<< " ";
  }
  cout << "numero a buscar:"<<endl;
  cin>> clave;
  //busqueda swcuencial
  int i=0;
  while(i<n && clave !=u[i] )
  {
    i++;
  }
  if(i<n)
  cout << "el valor esta en el vector posicion: "<<i<<endl;
  else
  cout<<"no esta";









    return 0;
}