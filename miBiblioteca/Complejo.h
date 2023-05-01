#ifndef COMPLEJO_H
#define COMPLEJO_H


#include <iostream>
#include <math.h>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
	Complejo(void);
	Complejo(double real, double imaginario);
	~Complejo(void);
	void pideleAlUsuarioTusAtributos(void);
	void muestraTusAtributos(void);
	double retornaTuAtributoReal(void);
	void modificaTuAtributoReal(double real);
	double retornaTuAtributoImaginario(void);
	void modificaTuAtributoImaginario(double imaginario);
	void modificaTusAtributos(double real, double imaginario);
};
Complejo sumaComplejos(Complejo C1, Complejo C2);
Complejo restaComplejos(Complejo C1, Complejo C2);
Complejo multiplicaComplejos(Complejo C1, Complejo C2);
Complejo divideComplejos(Complejo C1, Complejo C2);


#endif // COMPLEJO_H
