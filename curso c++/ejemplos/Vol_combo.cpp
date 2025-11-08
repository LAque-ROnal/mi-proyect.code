
/*diseñar un algoritmo para calcular el volumen de un combo (martillo)
se conoce el diametreo del mango y su logitud tambien el diametro de la
cabeza y su longitud
volumen mango (cilindro) = pi * r^2 * h  // h = longitud
volumen cabeza (cilindro) = pi * r^2 *h
radio = d/2
*/
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    //variables
    float vm,vc,v,dm,dc,hm,hc,rm,rc;
    //entrada
    cout << "introduce la longitud del mango (hm): ";
    cin >> hm;
    cout << "introduce el diametro del mango (dm): ";
    cin >> dm;
    cout << "introduce la longitud de la cabeza (hc): ";
    cin >> hc;
    cout << "introduce el diametro de la cabeza (dc): ";
    cin >> dc;
    //calculos
    rm = dm /2;
    rc = dc /2;
    vm = M_PI * rm *rm *hm;
    vc = M_PI * rc * rc *hc;
    v= vm + vc;
    //salida
    cout << "el columen del combo es: "<< v;

    return 0;
}