
#ifndef CUENTA_AHORRO_H

#define CUENTA_AHORRO_H

#include <string>
#include "cuenta.h"

class CuentaAhorro : public Cuenta {

    double maxCantidad;

    public:
    CuentaAhorro(std::string = "", std::string = "", double=0.0, double=0.0,double=250.0);
    double retirar(double);
    ~CuentaAhorro();
};

#endif
