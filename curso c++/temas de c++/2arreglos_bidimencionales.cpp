/*DECLARACION Y INICIALIZACION 
ejemplo: interactuan filas[n de filas] y columnas[n de columnas]
       int mi_matriz[4][5]={12,12,4,-7,45,45,67,7,34,76,56,56,43,23,64,64,64};
         para saber cunatos elemrntos almacena mi array (multiplico filas* columnas)
 otra forma:
ejemplo:
   int mi_matriz [4][5]={
                         {12,12,45,45,6},
                         {12,12,45,45,6},
                         {12,12,45,45,6},
                         {12,12,45,45,6}
                         }:
ACCESO Y ALMACENAMIENTO
 ALMACENAMIENTO:
 int mi_matriz[0][0]= 12;
 int mi_matriz[0][3]= 14;
 int mi_matriz[0][4]= 16;
 int mi_matriz[1][0]= 12;
 ACCESO: 
 mi_matriz[0][0] ...12
 mi_matriz[0][3] ...14
 mi_matriz[0][4] ...16
 mi_matriz[1][0] ...12


   }*/    
   #include <iostream>
   using namespace std;
      int main(){
      
      /*int mi_matriz[4][5]={12,62,4,-7,45,75,67,7,34,76,06,56,43,23,90,94,64,76,50,67};

      cout<< mi_matriz [0][0]<<endl;
      cout<< mi_matriz [3][3] <<endl;
      mi_matriz[0][0]= 29999999;
      cout<< mi_matriz [0][0]<<endl;*/
      /// como rellenar mi arreglo desde el teclado (con ciclo for)
       
      int mi_matriz[4][5];
      for (int fila =0; fila<4; fila++  ){  

       for( int columna=0; columna<5; columna++){
         cin>> mi_matriz [fila][columna];

        }

      }

     //mostrar los valores de mi arreglo
      cout<< "veremos los valores almacenados en mi arreglo; "<< endl;
      for (int fila =0; fila<4; fila++  ){  

        for( int columna=0; columna<5; columna++){
          cout<< mi_matriz [fila][columna];
          
        }
        cout << endl;
      }
        
    }