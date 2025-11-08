#include <iostream>
using namespace std;

int main (){

    int num;
    int fact=1;
    int i=1;
    cout << "ingresa un numer opara hallar su factorial: ";
    cin >> num;
    while (i<= num){
        fact = fact *i;
        i=i+1;
    }
   cout << "el factorial de ese numer es: "<<fact;









    return 0;
}
