# include <iostream>
#include <cstdlib>
# include <ctime>
using namespace std;
int main (){
 int t[2000];
 int n,suma=0;
 float prom;
 cout << "elementos a almacenar: "<< endl;
 cin>>n;
 srand(time(0));
 for (int i=0; i<n;i++)
 {
    t[i]=rand()%26;
 }
    cout <<"contenido del vector"<<endl;
    for (int i=0 ;i<n;i++)
    {
        cout <<t[i]<<" ";
    }
    cout << "promedio del vector "<<endl;
    for (int i=0; i<n; i++)
    {

        suma=suma+t[i];
    }
    prom=(float)suma/n;


    cout << "promedio: "<< prom;







    return 0;
}