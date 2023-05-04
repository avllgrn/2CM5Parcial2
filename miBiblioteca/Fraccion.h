#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>
using namespace std;

class Fraccion{
private:
    int numerador;
    int denominador;
public:
    Fraccion(void);
    Fraccion(int numerador, int denominador);
    ~Fraccion(void);
    void pideleAlUsuarioTusAtributos(void);
    void muestraTusAtributos(void);
    int retornaTuAtributoNumerador(void);
    void modificaTuAtributoNumerador(int numerador);
    int retornaTuAtributoDenominador(void);
    void modificaTuAtributoDenominador(int denominador);
    void modificaTusAtributos(int numerador, int denominador);
};

#endif // FRACCION_H
