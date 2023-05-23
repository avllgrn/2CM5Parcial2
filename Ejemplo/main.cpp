#include <iostream>
#include <stdlib.h>
#include "Evento.h"
#include "Fecha.h"
#include "Hora.h"
using namespace std;

int main(void){
    Fecha A(23,5,2023);
    Hora B(15,16,17);
    Evento E1;
    Evento E2(A,B);
    Evento E3(15,9,1821,5,6,7);

    cout<<"Pruebas de muestraTusDatos() y constructores"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"E2"<<endl;
    E2.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"E3"<<endl;
    E3.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTuF(), modificaTuH()"<<endl
        <<"dameTuF() y dameTuH()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"E2"<<endl;
    E2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    E1.modificaTuF(E2.dameTuF());
    E1.modificaTuH(E2.dameTuH());
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"E2"<<endl;
    E2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTuF(), modificaTuH()"<<endl
        <<"E3.dameTuF().dameTuDia(), E3.dameTuF().dameTuMes(), E3.dameTuF().dameTuAnio()"<<endl
        <<"E3.dameTuH().dameTuHora(), E3.dameTuH().dameTuMinuto(), E3.dameTuH().dameTuSegundo()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"E3"<<endl;
    E3.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    E1.modificaTuF(E3.dameTuF().dameTuDia(),
                   E3.dameTuF().dameTuMes(),
                   E3.dameTuF().dameTuAnio());
    E1.modificaTuH(E3.dameTuH().dameTuHora(),
                   E3.dameTuH().dameTuMinuto(),
                   E3.dameTuH().dameTuSegundo());
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"E3"<<endl;
    E3.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTusDatos()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    E1.modificaTusDatos(A,B);
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTusDatos()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    E1.modificaTusDatos(13,11,2010,9,8,7);
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de pideleAlUsuarioTusDatos()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    cout<<endl<<endl;
    E1.pideleAlUsuarioTusDatos();
    cout<<endl<<"E1"<<endl;
    E1.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
