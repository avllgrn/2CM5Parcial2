#ifndef PUNTO_H
#define PUNTO_H


#include <iostream>
#include <math.h>
using namespace std;

class Punto{
private:
    double x;
    double y;
public:
	Punto(void);
	Punto(double x, double y);
	~Punto(void);
	void pideleAlUsuarioTusAtributos(void);
	void muestraTusAtributos(void);
	double retornaTuAtributoX(void);
	void modificaTuAtributoX(double x);
	double retornaTuAtributoY(void);
	void modificaTuAtributoY(double y);
	void modificaTusAtributos(double x, double y);
};
Punto sumaPuntos(Punto P1, Punto P2);
Punto restaPuntos(Punto P1, Punto P2);
double calculaDistanciaEntre(Punto P1, Punto P2);
double calculaPendienteDados(Punto P1, Punto P2);



#endif // PUNTO_H
