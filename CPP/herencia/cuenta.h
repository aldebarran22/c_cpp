#ifndef CUENTA_H
#define CUENTA_H

#include <string>

class Cuenta
{
    std::string cliente;
    std::string numero;
    double saldo;
    double interes;

	public:
		Cuenta(std::string = "", std::string = "", double=0.0, double=0.0);
        void ingresar(double);
        double retirar(double);
        double getSaldo(){ return this->saldo;}
		~Cuenta();
	protected:
};

#endif