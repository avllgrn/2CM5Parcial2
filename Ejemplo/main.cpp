#include <iostream>
#include <stdlib.h>
#include "Fraccion.h"
using namespace std;

int main(void){
    Fraccion A, B, C;

    //1.Pide dato(s)
    cout<<endl<<"Ingresa la Fraccion 1"<<endl;
    A.pideleAlUsuarioTusAtributos();
    cout<<endl<<"Ingresa la Fraccion 2"<<endl;
    B.pideleAlUsuarioTusAtributos();

    C.modificaTuAtributoNumerador(
        (A.retornaTuAtributoNumerador() * B.retornaTuAtributoDenominador() )
        +
        (B.retornaTuAtributoNumerador() * A.retornaTuAtributoDenominador() )
    );
    C.modificaTuAtributoDenominador(
        A.retornaTuAtributoDenominador() * B.retornaTuAtributoDenominador()
    );

    //3.Muestra resultado(s)
    cout<<endl;
    cout<<"A   = ";A.muestraTusAtributos();cout<<endl;
    cout<<"B   = ";B.muestraTusAtributos();cout<<endl;
    cout<<"A+B = ";C.muestraTusAtributos();cout<<endl;

    return 0;
}
