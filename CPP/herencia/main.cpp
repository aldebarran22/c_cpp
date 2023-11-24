
#include <iostream>

#include "cuenta.h"

void testCuenta(){
    Cuenta cc("cliente1", "1000-2020-99-12345678", 1000.0, 2.5);
    cc.ingresar(250);
    std::cout << "Saldo: " << cc.getSaldo() << std::endl;
    cc.retirar(1300);
    std::cout << "Nuevo saldo: " << cc.retirar(750) << std::endl;
}


int main(){
    testCuenta();
    return 0;
}