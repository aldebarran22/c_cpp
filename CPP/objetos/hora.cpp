
#include <iomanip>
#include <iostream>
#include <cstdio>

#include "hora.h"

Hora::Hora(){
    this->hh = 0;
    this->mm = 0;
}

Hora::Hora(int h, int m):hh(h), mm(m){}
        
std::string Hora::to_string() const {
    // hh=1, mm=3  -> 01:03
    char aux[20];
    std::string unaHora;

    std::sprintf(aux, "%02d:%02d", this->hh, this->mm);
    unaHora = aux;
    return unaHora;
}

void Hora::print() const {
    std::cout << std::setw(2) << std::setfill('0') << this->hh
            << ":" << std::setw(2) << std::setfill('0') << this->mm;
}
        
Hora::~Hora(){}