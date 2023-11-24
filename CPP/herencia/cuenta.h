#ifndef CUENTA_H
#define CUENTA_H

#include <string>

class Cuenta
{
    
	public:
		Cuenta(std::string = "", std::string = "", double=0.0, double=0.0);
        virtual void ingresar(double);
        virtual double retirar(double);
        double getSaldo(){ return this->saldo;}
		~Cuenta();
	protected:
    std::string cliente;
    std::string numero;
    double saldo;
    double interes;
};

#endif