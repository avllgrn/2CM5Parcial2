#include "Fraccion.h"


Fraccion::Fraccion(void){
    Fraccion::numerador = 0;
    Fraccion::denominador = 1;
    cout<<"Objeto construido..."<<endl;
}
Fraccion::Fraccion(int numerador, int denominador){
    Fraccion::numerador = numerador;
    Fraccion::denominador = denominador;
    cout<<"Objeto construido..."<<endl;
}
Fraccion::~Fraccion(void){
    cout<<"Objeto destruido..."<<endl;
}
void Fraccion::pideleAlUsuarioTusAtributos(void){
    cout<<"Dame mi numerador ";
    cin>>this->numerador;
    cout<<"Dame mi denominador ";
    cin>>this->denominador;
}
void Fraccion::muestraTusAtributos(void){
    cout<<this->numerador<<"/"<<this->denominador;
}
int Fraccion::retornaTuAtributoNumerador(void){
    return this->numerador;
}
void Fraccion::modificaTuAtributoNumerador(int numerador){
    this->numerador = numerador;
}
int Fraccion::retornaTuAtributoDenominador(void){
    return this->denominador;
}
void Fraccion::modificaTuAtributoDenominador(int denominador){
    this->denominador = denominador;
}
void Fraccion::modificaTusAtributos(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;
}
