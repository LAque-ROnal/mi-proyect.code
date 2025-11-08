#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int> laue {23,23,23,3};

    int i =0;

    while (i< 4){
        cout <<i<<". "<< laue[i]<< " ";
        i++;
    }
}