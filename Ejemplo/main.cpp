#include <iostream>
#include <stdlib.h>
#include "Circulo.h"
using namespace std;

int main(void){
    Circulo A, B(1), C, D;

    cout<<"Ingresa C"<<endl;
    C.pideleAlUsuarioTusDatos();

    D.modificaTuRadio(3 * C.dameTuRadio());

    //3.Muestra resultado(s)
    cout<<endl;

    cout<<"A\n"<<"Radio:\t   "<<A.dameTuRadio()<<endl
        <<"Diametro:  "<<A.dameTuDiametro()<<endl
        <<"Area:\t   "<<A.dameTuArea()<<endl
        <<"Perimetro: "<<A.dameTuPerimetro()<<endl;

    cout<<"B\n";B.muestraTusDatos();cout<<endl;
    cout<<"C\n";C.muestraTusDatos();cout<<endl;
    cout<<"D\n";D.muestraTusDatos();cout<<endl;

    cout<<endl;
    return 0;
}
