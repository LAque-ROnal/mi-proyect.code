# include <iostream>
using namespace std;

int main (){
  // numeros pares ingresados por teclado con arreglo
  int n;
  cout << "ingrese la cantidad de numeros primos que quieras ver: ";
  cin >> n;
  
  int arreglo[n];

  for (int i=0 ; i<n ; i++ )
  {
    cin >> arreglo[i];

  }
  cout << "numeros pares: ";
  for (int i =0 ; i<n ; i++){
    if (arreglo [i]%2 ==0){
        cout << arreglo[i]<< ", ";
    }
  }









    return 0;
}