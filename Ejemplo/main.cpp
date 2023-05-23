#include <iostream>
#include <stdlib.h>
#include "CirculoP.h"
using namespace std;

int main(void){
    Punto A(1,2), B(3,4);
    CirculoP Q1;
    CirculoP Q2(A,B);
    CirculoP Q3(5,5,5,6);

    cout<<"Pruebas de muestraTusDatos() y constructores"<<endl<<endl;
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"Q2"<<endl;
    Q2.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"Q3"<<endl;
    Q3.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTuC(), modificaTuP(), "
        <<"dameTuC() y dameTuP()"<<endl<<endl;
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"Q2"<<endl;
    Q2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    Q1.modificaTuC(Q2.dameTuC());
    Q1.modificaTuP(Q2.dameTuP());
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"Q2"<<endl;
    Q2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTuC() y modificaTuP()"<<endl<<endl;
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    Q1.modificaTuC(0,0);
    Q1.modificaTuP(0,0);
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTusDatos()"<<endl<<endl;
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"Q3"<<endl;
    Q3.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    Q1.modificaTusDatos(Q3.dameTuC(),Q3.dameTuP());
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    cout<<"Q3"<<endl;
    Q3.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de modificaTusDatos()"<<endl<<endl;
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    Q1.modificaTusDatos(0,0,0,0);
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Pruebas de pideleAlUsuarioTusDatos()"<<endl<<endl;
    cout<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    Q1.pideleAlUsuarioTusDatos();
    cout<<endl<<"Q1"<<endl;
    Q1.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
