#include "Complejo.h"

Complejo::Complejo(void){
	Complejo::real = 0.0;
	Complejo::imaginario = 0.0;
	//cout << "Objeto construido, this -> " << this << endl;
}
Complejo::Complejo(double real, double imaginario){
	Complejo::real = real;
	Complejo::imaginario = imaginario;
	//cout << "Objeto construido, this -> " << this << endl;
}
Complejo::~Complejo(void){
	//cout << "Objeto destruido, this -> " << this << endl;
}
void Complejo::pideleAlUsuarioTusAtributos(void){
	cout<<"Dame mi real ";
	cin>>this->real;
	cout<<"Dame mi imaginario ";
	cin>>this->imaginario;
}
void Complejo::muestraTusAtributos(void){
	cout << this->real;
	if(this->imaginario<0)
		cout << this->imaginario;
	else
		cout << "+" << this->imaginario;
	cout << "i";
}
double Complejo::retornaTuAtributoReal(void){
	return this->real;
}
void Complejo::modificaTuAtributoReal(double real){
	this->real = real;
}
double Complejo::retornaTuAtributoImaginario(void){
	return this->imaginario;
}
void Complejo::modificaTuAtributoImaginario(double imaginario){
	this->imaginario = imaginario;
}
void Complejo::modificaTusAtributos(double real, double imaginario){
	this->real = real;
	this->imaginario = imaginario;
}
Complejo sumaComplejos(Complejo C1, Complejo C2){
    Complejo C3;
    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(C1.retornaTuAtributoReal()
                              +
                              C2.retornaTuAtributoReal()
       );
    C3.modificaTuAtributoImaginario(C1.retornaTuAtributoImaginario()
                                    +
                                    C2.retornaTuAtributoImaginario()
       );
    return C3;
}
Complejo restaComplejos(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(C1.retornaTuAtributoReal()
                              -
                              C2.retornaTuAtributoReal()
       );
    C3.modificaTuAtributoImaginario(C1.retornaTuAtributoImaginario()
                                    -
                                    C2.retornaTuAtributoImaginario()
       );
    return C3;
}
Complejo multiplicaComplejos(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(
          C1.retornaTuAtributoReal()*C2.retornaTuAtributoReal()
          -
          C1.retornaTuAtributoImaginario()*C2.retornaTuAtributoImaginario()
    );
    C3.modificaTuAtributoImaginario(
          C1.retornaTuAtributoReal()*C2.retornaTuAtributoImaginario()
          +
          C2.retornaTuAtributoReal()*C1.retornaTuAtributoImaginario()
    );
    return C3;
}
Complejo divideComplejos(Complejo C1, Complejo C2){
    Complejo C3;

    //2.Calcula formula(s)
    C3.modificaTuAtributoReal(
          (C1.retornaTuAtributoReal()*C2.retornaTuAtributoReal()
          +
          C1.retornaTuAtributoImaginario()*C2.retornaTuAtributoImaginario()
          )
          /
          (pow(C2.retornaTuAtributoReal(),2)+pow(C2.retornaTuAtributoImaginario(),2))
    );
    C3.modificaTuAtributoImaginario(
          (C2.retornaTuAtributoReal()*C1.retornaTuAtributoImaginario()
          -
          C1.retornaTuAtributoReal()*C2.retornaTuAtributoImaginario()
          )
          /
          (pow(C2.retornaTuAtributoReal(),2)+pow(C2.retornaTuAtributoImaginario(),2))
    );

    return C3;
}
