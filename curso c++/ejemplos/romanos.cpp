#include <iostream>
#include <string>


using namespace std;

int main()
{
    int n,u,d,c;
    string rom="";
    cout << "introducir un numero de tres digitos:";
    cin>>n;
    u=n%10;
    d=(n/10)%10;
    c=n/100;
    switch (c)
    {
        case 1: rom=rom+"C"; break;
        case 2: rom=rom+"CC"; break;
        case 3: rom=rom+"CCC"; break;
        case 4: rom=rom+"CD"; break;
        case 5: rom=rom+"D"; break;
        case 6: rom=rom+"DC"; break;
        case 7: rom=rom+"DCC"; break;
        case 8: rom=rom+"DCCC"; break;
        case 9: rom=rom+"CM"; break;
    }
    switch (d)
    {
        case 1: rom=rom+"X"; break;
        case 2: rom=rom+"XX"; break;
        case 3: rom=rom+"XXX"; break;
        case 4: rom=rom+"XL"; break;
        case 5: rom=rom+"L"; break;
        case 6: rom=rom+"LX"; break;
        case 7: rom=rom+"LXX"; break;
        case 8: rom=rom+"LXXX"; break;
        case 9: rom=rom+"XC"; break;
    }
    switch (u)
    {
        case 1: rom=rom+"I"; break;
        case 2: rom=rom+"II"; break;
        case 3: rom=rom+"III"; break;
        case 4: rom=rom+"IV"; break;
        case 5: rom=rom+"V"; break;
        case 6: rom=rom+"VI"; break;
        case 7: rom=rom+"VII"; break;
        case 8: rom=rom+"VIII"; break;
        case 9: rom=rom+"IX"; break;
    }

    cout<<"el numero "<<n<< " en sistema Romanos es "<<rom<<endl;
    return 0;
}
