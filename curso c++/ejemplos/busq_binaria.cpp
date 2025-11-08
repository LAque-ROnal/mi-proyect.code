# include <iostream>
#include <cstdlib>
# include <ctime>
using namespace std;
int main (){
    int a[20]={12,23,34,45,55,66,77,88,99,100};
    int n= 10;
    int ini,med,fin;
    int clave,sw=0;
    for (int i=0;i<n;i++)
    {
        cout << a[i]<<", ";

    }
    cout <<endl;
    cout << "valor a buscar:"<< endl;
    cin>>clave;
    ini=0;
    fin=n-1;
    while(ini<=fin && sw==0){
        med=(ini+fin)/2;
        if(clave==a[med])
            sw=1;
            else
                if(clave>a[med])
                 ini=med+1;
                else
                 fin=med-1;
    }
    if(sw==1)
        cout <<"esta  en la celda: "<<med<<endl;
        else
            cout << "no esta "<<endl;


    return 0;
}