#include <iostream>

#include "cuentavivienda.h"

CuentaVivienda::CuentaVivienda(std::string cliente, std::string numero, 
                double saldo, double interes):Cuenta(cliente, numero, saldo,interes)
{}
    
void CuentaVivienda::ingresar(double cantidad){
    if (cantidad >= INGRESO_MIN){
        Cuenta::ingresar(cantidad);
    } else  {
        std::cerr << "Cantidad a ingresar insuficiente" << std::endl;
    }
}

double CuentaVivienda::retirar(double cantidad){
    std::cerr << "De esta cuenta no se puede retirar dinero" << std::endl;
    return -1;
}
    
CuentaVivienda::~CuentaVivienda(){}