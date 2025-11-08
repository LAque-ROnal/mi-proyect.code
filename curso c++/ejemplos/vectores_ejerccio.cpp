#include <iostream>
#include <vector>
using namespace std;
int main(){
  int num(0);
  cout<<"de cuantos elementos quieres que sea tu vector"<<endl;
  cin>> num;
  vector <int> records(num);
    for(int i=0 ; i<num; i++){
      
      cout<< "introduce el elemento del vector n°"<<i+1<<endl;

     cin >> records[i];
    }
  cout <<"los valores son: "<<endl;
    for(int i=0 ; i<records.size(); i++){
      
      cout << records[i]<<endl;
    
    } 
  
}