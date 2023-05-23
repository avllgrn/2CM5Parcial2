#include <iostream>
#include <stdlib.h>
#include "Fecha.h"
using namespace std;

int main(void){
    Fecha F1;
    Fecha F2(22,5,2023);

    cout<<"Pruebas de muestraTusDatos() y constructores"<<endl<<endl;
    cout<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"F2"<<endl;
    F2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTuDia(), modificaTuMes(), modificaTuAnio()"<<endl
        <<"dameTuDia(), dameTuMes() y dameTuAnio()"<<endl<<endl;
    cout<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"F2"<<endl;
    F2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    F1.modificaTuDia(F2.dameTuDia());
    F1.modificaTuMes(F2.dameTuMes());
    F1.modificaTuAnio(F2.dameTuAnio());
    cout<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"F2"<<endl;
    F2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTusDatos()"<<endl<<endl;
    cout<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    F1.modificaTusDatos(15,9,1820);
    cout<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de pideleAlUsuarioTusDatos()"<<endl<<endl;
    cout<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    F1.pideleAlUsuarioTusDatos();
    cout<<endl<<"F1"<<endl;
    F1.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
