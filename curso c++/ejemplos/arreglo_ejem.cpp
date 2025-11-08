#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    srand(time(0));
  int a[10][10]={{12,54,45,45,4},{12,12,34,32,3}};

   int b[14][12];
   for (int i=0 ; i<3 ;i++)
   {
    for (int y=0 ;y <3; y++)
    {
       cin >> b[i][y];
    }
   }
   for (int i=0 ; i<3 ;i++)
   {
    for (int y=0 ;y <3; y++)
    {
        cout << b[i][y]<< " ";
    }
    cout << endl;
   }

    return 0;
}