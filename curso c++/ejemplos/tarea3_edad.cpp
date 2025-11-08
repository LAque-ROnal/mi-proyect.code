# include <iostream>
using namespace std;

int main () {
  // programa para ver si eres un niño , adolescente , adulto o adulto mayor
  //niño 0 - 12
  //adolescente 13 -17
  // adulto 18 - 64
  //adulto mayor 65+
    int edad;
    cout << "ingrese su edad: ";
    cin >> edad;
    if (edad < 0){
    cout << "edad no existe !!"<< endl ;
    }
    else
        if (edad <= 12){
            cout << " eres un nino " << endl ;
    }
    else 
        if (edad <= 17 ){
            cout << "eres un adolescente "<< endl;

    }
    else 
        if (edad <=64 ){
            cout << "eres un adulto "<<endl ;
    
    }
    else {
        cout << "eres un adulto mayor "<< endl;
    }

 return 0;
}