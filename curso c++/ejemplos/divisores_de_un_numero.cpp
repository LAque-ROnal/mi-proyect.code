#include <iostream>
using namespace std;
int main (){
    int n(2);
    cout <<"ingresa un numer opara ver sus divisores: ";
    cin >> n;
    for(int i=2; i< n ; i++ ){
        if (n%i==0){
            cout << i<<". ";
        }
    }


  return 0;

    
}