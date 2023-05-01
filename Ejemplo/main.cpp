#include <iostream>
#include <stdlib.h>
#include "Punto.h"
#include "Complejo.h"
using namespace std;

int main(void){
    Punto P1, P2, P3, P4;
    double d, m;

    //1.Pide dato(s)
    cout<<endl<<"Ingresa las coordenadas de P1"<<endl;
    P1.pideleAlUsuarioTusAtributos();
    cout<<endl<<"Ingresa las coordenadas de P2"<<endl;
    P2.pideleAlUsuarioTusAtributos();

    P3 = sumaPuntos(P1,P2);
    P4 = restaPuntos(P1,P2);
    d = calculaDistanciaEntre(P1,P2);
    m = calculaPendienteDados(P1,P2);

    //3.Muestra resultado(s)
    cout<<endl;
    cout<<"P1 = ";P1.muestraTusAtributos();cout<<endl;
    cout<<"P2 = ";P2.muestraTusAtributos();cout<<endl;
    cout<<"P3 = ";P3.muestraTusAtributos();cout<<endl;
    cout<<"P4 = ";P4.muestraTusAtributos();cout<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"m = "<<m<<endl<<endl;
    system("pause");
    system("cls");


    Complejo C1, C2, C3, C4, C5, C6;

    //1.Pide dato(s)
    cout<<endl<<"Ingresa C1"<<endl;
    C1.pideleAlUsuarioTusAtributos();
    cout<<endl<<"Ingresa C2"<<endl;
    C2.pideleAlUsuarioTusAtributos();

	C3 = sumaComplejos(C1,C2);
	C4 = restaComplejos(C1,C2);
	C5 = multiplicaComplejos(C1,C2);
	C6 = divideComplejos(C1,C2);

    //3.Muestra resultado(s)
    cout<<endl;
    cout<<"C1 = ";C1.muestraTusAtributos();cout<<endl;
    cout<<"C2 = ";C2.muestraTusAtributos();cout<<endl;
    cout<<"C3 = ";C3.muestraTusAtributos();cout<<endl;
    cout<<"C4 = ";C4.muestraTusAtributos();cout<<endl;
    cout<<"C5 = ";C5.muestraTusAtributos();cout<<endl;
    cout<<"C6 = ";C6.muestraTusAtributos();cout<<endl;

    return 0;
}

