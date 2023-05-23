#include "CirculoP.h"


CirculoP::CirculoP(void){
}
CirculoP::CirculoP(Punto C, Punto P){
    CirculoP::C = C;
    CirculoP::P = P;
}
CirculoP::CirculoP(double xC, double yC, double xP, double yP){
    CirculoP::C.modificaTusAtributos(xC,yC);
    CirculoP::P.modificaTusAtributos(xP,yP);
}
CirculoP::~CirculoP(void){
}
void CirculoP::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi C"<<endl;
    this->C.pideleAlUsuarioTusAtributos();
    cout<<"Dame mi P"<<endl;
    this->P.pideleAlUsuarioTusAtributos();
}
void CirculoP::muestraTusDatos(void){
    cout<<"C";
    this->C.muestraTusAtributos();
    cout<<" P";
    this->P.muestraTusAtributos();
    cout<<endl
        <<"Radio: "<<this->dameTuRadio()<<endl
        <<"Diametro: "<<this->dameTuDiametro()<<endl
        <<"Area: "<<this->dameTuArea()<<endl
        <<"Perimetro: "<<this->dameTuPerimetro()<<endl;
}
Punto CirculoP::dameTuC(void){
    return this->C;
}
void CirculoP::modificaTuC(Punto C){
    this->C = C;
}
void CirculoP::modificaTuC(double xC, double yC){
    this->C.modificaTusAtributos(xC,yC);
}
Punto CirculoP::dameTuP(void){
    return this->P;
}
void CirculoP::modificaTuP(Punto P){
    this->P = P;
}
void CirculoP::modificaTuP(double xP, double yP){
    this->P.modificaTusAtributos(xP,yP);
}
void CirculoP::modificaTusDatos(Punto C, Punto P){
    this->C = C;
    this->P = P;
}
void CirculoP::modificaTusDatos(double xC, double yC, double xP, double yP){
    this->C.modificaTusAtributos(xC,yC);
    this->P.modificaTusAtributos(xP,yP);
}
double CirculoP::dameTuRadio(void){
    return calculaDistanciaEntre(this->C, this->P);
}
double CirculoP::dameTuDiametro(void){
    return 2 * this->dameTuRadio();
}
double CirculoP::dameTuArea(void){
    return M_PI * pow(this->dameTuRadio(),2);
}
double CirculoP::dameTuPerimetro(void){
    return 2 * M_PI * this->dameTuRadio();
}

