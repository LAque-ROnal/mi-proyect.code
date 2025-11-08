#include <iostream>
using namespace std;
int main (){

    int n;
    string res;
    cout << "cantidad: ";
    cin >> n;
    if (n>= 2000 && n<= 2199)
        res = "espexto nacional";
    else
        if(n>= 2200 && n<= 2299)
            res = "cabsuato a maestro";
        else
            if (n>=300 && n<=2399)
                res ="maestro FIDE";
            else
                if (n>= 2400 && n <= 2499)
                    res = "maestro internacional";
                else 
                    if (n >= 2500 && n <= 2599)
                    res = "gran  maestro";
                else
                    cout << "cantidad inexistente!!";
    cout << res;                
    return 0;
}