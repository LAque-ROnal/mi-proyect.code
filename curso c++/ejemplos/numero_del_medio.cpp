# include <iostream>
using namespace std;
int main (){
  double a,b,c,me,med,ma;
  cout << "dame el primer valor: ";
  cin >> a;
  cout << "dame el segundo valor: ";
  cin >> b;
  cout << "dame el tercer valor: ";
  cin >> c;
    if (a>b)
            {
              ma=a;
              me=b;
            }
        else
        {
           ma=b;
           me=a;
        }
    
    if(c>ma){
        ma=c;
    }
    if (c<me){
        c=me;
    }
    med=(a+b+c)-(ma+me);
   cout << "forma ascendente: "<<me<< ", "<<med<<"," << ma<<endl;
   cout << "forma descendente: "<< ma<<", "<<med<< ", "<< me<<endl; 













    return 0;
}