#include <iostream>
#include <stdlib.h>
#include "Fraccion.h"
using namespace std;

int main(void){
    Fraccion A(1,2), B, C, D, E, F;
    B.modificaTusAtributos(3,4);

    C = sumaFracciones(A,B);
    D = restaFracciones(A,B);
    E = multiplicaFracciones(A,B);
    F = divideFracciones(A,B);

    //3.Muestra resultado(s)
    cout<<endl;
    cout<<"A   = ";A.muestraTusAtributos();cout<<endl;
    cout<<"B   = ";B.muestraTusAtributos();cout<<endl;
    cout<<"A+B = ";C.muestraTusAtributos();cout<<endl;
    cout<<"A-B = ";D.muestraTusAtributos();cout<<endl;
    cout<<"A*B = ";E.muestraTusAtributos();cout<<endl;
    cout<<"A/B = ";F.muestraTusAtributos();cout<<endl;
    cout<<endl;

    return 0;
}
