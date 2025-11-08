#include<iostream>
using namespace std;
int main (){
   char idioma, categoria;
   cout<<"seleccione el idioma(e=español, i=ingles): ";
   cin >> idioma;
   switch (idioma){
        case 'e':
        case 'E':
          cout <<"seleccionaste el idioma español:\n ";
          cout<<"seleccione la categoria (R= ropa , L=libro )" <<endl;
          cin>> categoria;
            switch (categoria){
                case 'r':
                case 'R':
                  cout <<"seleccionaste la categorioa de Ropa ";
                  break;
                case 'L':
                case 'l':
                    cout << "Sleecionate la categoria de libro ";
                    break;
                default:
                 cout << " la categoria no existe";
        }
        break;
        case 'i':
        case 'I':
           cout<<" selec lenguaj inglis\n";
           cout<< "selecti the categori (C=clothes , B= books)";
           cin>> categoria;
            switch(categoria){
                case 'r':
                case 'C':
                  cout<< "select the cathegory of clothes\n";
                  break;
                case 'b':
                case 'B':
                   cout <<"selecti category of books\n";
                  break;
                default:
                   cout<<"the category nout exist";
        }

       break;
      default:
      cout<<"el iodioma no esiste :(";  
    }  



}