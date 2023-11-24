
#include <iostream>

#include "cuentaahorro.h"

CuentaAhorro::CuentaAhorro(std::string cliente, std::string numero, 
                        double saldo, double interes, double maxCantidad):
                        Cuenta(cliente, numero,saldo,interes), maxCantidad(maxCantidad){

}

double CuentaAhorro::retirar(double cantidad){
    if (cantidad > 0 && cantidad <= this->maxCantidad){
        // Llamamos al metodo retirar de la clase padre:
        return Cuenta::retirar(cantidad);

    } else {
        std::cerr << "La cantidad debe ser > 0 y < " << this->maxCantidad << std::endl;
        return -1;
    }
}

void CuentaAhorro::imprimirSaldo(){
    std::cout << "Saldo de la C.Ahorro: " << this->getSaldo() << std::endl;
    //std::cout << "Saldo:" << Cuenta::saldo;
}

CuentaAhorro::~CuentaAhorro(){}