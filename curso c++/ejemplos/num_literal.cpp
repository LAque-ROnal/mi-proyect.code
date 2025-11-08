#include <iostream>
using namespace std;
int main()
{
int x,unidad,decena,centena;
cout<<"ingrese un numero entre 0-1000"<<endl;
cin>>x;
if((x<0)||(x>1000)) cout<<"INGRESA UN NUMERO DEL 0 AL 1000\n";
else if(x==0)cout<<"CERO";
else if(x==1000)cout<<"MIL";
else
{
    unidad=x%10;
    decena=(x%100)/10;
    centena=x/100;
switch(centena)
{
    case 9:cout<<"NOVECIENTOS " ;x=x-900;break;
    case 8:cout<<"OCHOCIENTOS " ;x=x-800;break;
    case 7:cout<<"SETECIENTOS " ;x=x-700;break;
    case 6:cout<<"SEISCIENTOS " ;x=x-600;break;
    case 5:cout<<"QUINIENTOS " ;x=x-500;break;
    case 4:cout<<"CUATROCIENTOS " ;x=x-400;break;
    case 3:cout<<"TRESCIENTOS " ;x=x-300;break;
    case 2:cout<<"DOSCIENTOS " ;x=x-200;break;
    case 1:
if(x>100)
    cout<<"CIENTO " ;
else cout<<"CIEN" ;x=x-100;
    break;
}
switch(decena)
{
    case 9:if(x>90) cout<<"NOVENTA Y " ;
    else cout<<"NOVENTA" ;x=x-90; break;
    case 8:if(x>80) cout<<"OCHENTA Y " ;
    else cout<<"OCHENTA" ;x=x-80; break;
    case 7:if(x>70) cout<<"SETENTA Y " ;
    else cout<<"SETENTA" ;x=x-70; break;
    case 6:if(x>60) cout<<"SESENTA Y " ;
    else cout<<"SESENTA" ;x=x-60; break;
    case 5:if(x>50) cout<<"CINCUENTA Y " ;
    else cout<<"CINCUENTA" ;x=x-50; break;
    case 4:if(x>40) cout<<"CUARENTA Y " ;
    else cout<<"CUARENTA" ;x=x-40; break;
    case 3:if(x>30) cout<<"TREINTA Y " ;
    else cout<<"TREINTA" ;x=x-30; break;
    case 2:if(x>20) cout<<"VEINTI " ;
    else cout<<"VEINTE" ;x=x-20; break;
    case 1: if (x>=16)
{
cout<<"DIECI";
}
else if(x>=10)
{
switch(x)
{
    case 15: {cout<<"QUINCE" ; break;}
    case 14: {cout<<"CATORCE" ; break;}
    case 13: {cout<<"TRECE" ;break; }
    case 12: {cout<<"DOCE" ;break; }
    case 11: {cout<<"ONCE" ; break;}
    case 10: {cout<<"DIEZ" ; break;}
}
}
}
switch(unidad)
{
    case 9: {cout<<"NUEVE" ;break; }
    case 8: {cout<<"OCHO" ;break; }
    case 7: {cout<<"SIETE" ;break; }
    case 6: {cout<<"SEIS" ;break; }
    case 5: if(decena!=1){cout<<"CINCO" ;break; }
    case 4: if(decena!=1){cout<<"CUATRO" ;break; }
    case 3: if(decena!=1){cout<<"TRES" ;break; }
    case 2: if(decena!=1){cout<<"DOS" ;break; }
    case 1: if(decena!=1){cout<<"UNO" ;break; }
}
cout<<endl;
}
return 0;
}