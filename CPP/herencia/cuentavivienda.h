
#ifndef CUENTA_VIVIENDA_H

#define CUENTA_VIVIENDA_H

#include "cuenta.h"

#define INGRESO_MIN 500

class CuentaVivienda : public Cuenta {

    public:
    CuentaVivienda(std::string = "", std::string = "", double=0.0, double=0.0);
    void ingresar(double);
    double retirar(double);
    ~ CuentaVivienda();
};


#endif