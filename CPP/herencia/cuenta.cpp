#include <iostream>

#include "cuenta.h"

Cuenta::Cuenta(std::string numero, std::string cliente, double saldo, double interes){
    this->numero = numero;
    this->cliente = cliente;
    this->saldo = saldo;
    this->interes = interes;

}
        
void Cuenta::ingresar(double cantidad){
    if (cantidad > 0){
        this->saldo += cantidad;
    } else {
        std::cerr << "Cantidad tiene que ser > 0" << std::endl;
    }
}
    
double Cuenta::retirar(double cantidad){
    if (cantidad > 0){
        if (this->saldo - cantidad >= 0){
            this->saldo -= cantidad;
            return this->saldo;    
        } else {
            std::cerr << "La cantidad supera el saldo disponible: " << this->saldo << std::endl;
        }
    } else {
        std::cerr << "Cantidad tiene que ser > 0" << std::endl;
    }
}

Cuenta::~Cuenta(){}