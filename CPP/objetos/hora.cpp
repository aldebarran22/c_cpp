
#include <iomanip>
#include <iostream>
#include <cstdio>

#include "hora.h"

Hora::Hora(){
    this->hh = 0;
    this->mm = 0;
}

Hora::Hora(int h, int m):hh(h), mm(m){}

// Funcion externa:
bool operator>(const Hora &h1, const Hora &h2){
    // h1 > h2? 

    if (h1.hh > h2.hh){
        return true;

    } else if (h1.hh < h2.hh){
        return false;

    } else {
        return h1.mm > h2.mm;
    }
}

std::ostream & operator<<(std::ostream &os, const Hora &hora){
    return os << std::setw(2) << std::setfill('0') << hora.hh
            << ":" << std::setw(2) << std::setfill('0') << hora.mm;
}

int Hora::minutos() const{
    return this->hh * 60 + this->mm;
}

bool Hora::operator<(const Hora &otro){
    return this->minutos() < otro.minutos();
}
        
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

Hora Hora::operator+(const Hora &otro){
    Hora suma(this->hh+otro.hh, this->mm+otro.mm);
    suma.hh += suma.mm / 60;
    suma.hh %= 24;
    suma.mm %= 60;
    return suma;
}
        
Hora::~Hora(){}