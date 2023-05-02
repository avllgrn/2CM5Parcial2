#include "Punto.h"


Punto::Punto(void){
    Punto::x = 0.0;
    Punto::y = 0.0;
    //cout << "Objeto construido, this -> " << this << endl;
}
Punto::Punto(double x, double y){
    Punto::x = x;
    Punto::y = y;
    //cout << "Objeto construido, this -> " << this << endl;
}
Punto::~Punto(void){
    //cout << "Objeto destruido, this -> " << this << endl;
}
void Punto::pideleAlUsuarioTusAtributos(void){
    cout<<"Dame mi x ";
    cin>>this->x;
    cout<<"Dame mi y ";
    cin>>this->y;
}
void Punto::muestraTusAtributos(void){
    cout << "(" << this->x << ", " << this->y <<")";
}
double Punto::retornaTuAtributoX(void){
    return this->x;
}
void Punto::modificaTuAtributoX(double x){
    this->x = x;
}
double Punto::retornaTuAtributoY(void){
    return this->y;
}
void Punto::modificaTuAtributoY(double y){
    this->y = y;
}
void Punto::modificaTusAtributos(double x, double y){
    this->x = x;
    this->y = y;
}
Punto sumaPuntos(Punto P1, Punto P2){
    Punto P3;
    //2.Palcula formula(s)
    P3.modificaTuAtributoX( P1.retornaTuAtributoX() + P2.retornaTuAtributoX() );
    P3.modificaTuAtributoY( P1.retornaTuAtributoY() + P2.retornaTuAtributoY() );
    return P3;
}
Punto restaPuntos(Punto P1, Punto P2){
    Punto P3;
    //2.Palcula formula(s)
    P3.modificaTuAtributoX( P1.retornaTuAtributoX() - P2.retornaTuAtributoX() );
    P3.modificaTuAtributoY( P1.retornaTuAtributoY() - P2.retornaTuAtributoY() );
    return P3;
}
double calculaDistanciaEntre(Punto P1, Punto P2){
    return sqrt(
                pow(P2.retornaTuAtributoY()-P1.retornaTuAtributoY(),2)
                +
                pow(P2.retornaTuAtributoX()-P1.retornaTuAtributoX(),2)
                );
}
double calculaPendienteDados(Punto P1, Punto P2){
    return (P2.retornaTuAtributoY()-P1.retornaTuAtributoY())
           /
           (P2.retornaTuAtributoX()-P1.retornaTuAtributoX())
    ;
}
