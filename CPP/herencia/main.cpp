
#include <iostream>

#include "cuenta.h"
#include "cuentaahorro.h"
#include "cuentavivienda.h"

void testCuenta(){
    Cuenta cc("cliente1", "1000-2020-99-12345678", 1000.0, 2.5);
    cc.ingresar(250);
    std::cout << "Saldo: " << cc.getSaldo() << std::endl;
    cc.retirar(1300);
    std::cout << "Nuevo saldo: " << cc.retirar(750) << std::endl;
}

void testCuentaAhorro(){
    CuentaAhorro cc("cliente1", "1000-2020-99-12345678", 1000.0, 2.5, 300.0);
    cc.imprimirSaldo();
}

void testCuentaVivienda(){
    CuentaVivienda cc("cliente1", "1000-2020-99-12345678", 1000.0, 2.5);
    cc.retirar(200);
    cc.ingresar(100);
    cc.ingresar(650);
    std::cout << "Saldo: " << cc.getSaldo() << std::endl;
}

void testBanco(){
    Cuenta *cuentas[3];      

    cuentas[0] = new CuentaVivienda("cliente1", "1000-2020-99-12345678", 1000.0, 2.5);
    cuentas[1] = new CuentaAhorro ("cliente1", "1000-2020-99-12345678", 1000.0, 2.5, 300.0);
    cuentas[2] = new Cuenta("cliente1", "1000-2020-99-12345678", 1000.0, 2.5);

    for (int i = 0 ; i < 3 ; i++){
        std::cout << "nuevo Saldo:" << cuentas[i]->retirar(550) << std::endl;;
    }

    for (int i = 0 ; i < 3 ; i++){
        delete cuentas[i];
        cuentas[i] = nullptr;
    }
}

int main(){
    //testCuenta();
    //testCuentaAhorro();
    //testCuentaVivienda();
    testBanco();
    return 0;
}