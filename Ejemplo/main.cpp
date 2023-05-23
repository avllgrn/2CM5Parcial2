#include <iostream>
#include <stdlib.h>
#include "Hora.h"
using namespace std;

int main(void){
    Hora H1;
    Hora H2(11,12,13);

    cout<<"Pruebas de muestraTusDatos() y constructores"<<endl<<endl;
    cout<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"H2"<<endl;
    H2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTuHora(), modificaTuMinuto(), modificaTuSegundo()"<<endl
        <<"dameTuHora(), dameTuMinuto() y dameTuSegundo()"<<endl<<endl;
    cout<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"H2"<<endl;
    H2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    H1.modificaTuHora(H2.dameTuHora());
    H1.modificaTuMinuto(H2.dameTuMinuto());
    H1.modificaTuSegundo(H2.dameTuSegundo());
    cout<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"H2"<<endl;
    H2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTusDatos()"<<endl<<endl;
    cout<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    H1.modificaTusDatos(14,15,16);
    cout<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de pideleAlUsuarioTusDatos()"<<endl<<endl;
    cout<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    cout<<endl<<endl;
    H1.pideleAlUsuarioTusDatos();
    cout<<endl<<"H1"<<endl;
    H1.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
