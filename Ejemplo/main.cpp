#include <iostream>
#include <stdlib.h>
#include "Rectangulo.h"
using namespace std;

int main(void){
    Rectangulo A, B, C(4,5), D, E;

    cout<<"Ingresa C"<<endl;
    B.pideleAlUsuarioTusDatos();

    D.modificaTuBase(2 * C.dameTuBase());
    D.modificaTuAltura(2 * C.dameTuAltura());

    E.modificaTusDatos(3 * D.dameTuBase(), 3 * D.dameTuAltura());

    //3.Muestra resultado(s)
    cout<<endl;

    cout<<"A\n"<<"Base:\t   "<<A.dameTuBase()<<endl
        <<"Altura:    "<<A.dameTuAltura()<<endl
        <<"Area:\t   "<<A.dameTuArea()<<endl
        <<"Perimetro: "<<A.dameTuPerimetro()<<endl;

    cout<<"B\n";B.muestraTusDatos();cout<<endl;
    cout<<"C\n";C.muestraTusDatos();cout<<endl;
    cout<<"D\n";D.muestraTusDatos();cout<<endl;
    cout<<"E\n";E.muestraTusDatos();cout<<endl;

    cout<<endl;
    return 0;
}
