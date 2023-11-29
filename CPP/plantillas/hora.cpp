
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

std::istream & operator>>(std::istream &is, Hora &hora){
    return is >> hora.hh >> hora.mm;
}

Hora Hora::operator++(){
    // Prefijo:

    // Incrementar 1 min:
    this->mm++;
    this->ajustar(); 

    // Retornar el mismo objeto
    return *this;
}

Hora Hora::operator++(int){
    // Postfijo:
    
    // Guardar el valor actual
    Hora aux = *this; // Hora aux(*this);

    // Incrementar 1 min:
    this->mm++;
    this->ajustar(); 

    // Devolver el aux (temporal)
    return aux;

}

int Hora::minutos() const{
    return this->hh * 60 + this->mm;
}

bool operator<(const Hora &h1, const Hora &h2){
    return h1.minutos() < h2.minutos();
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

void Hora::ajustar(){
    this->hh += this->mm / 60;
    this->hh %= 24;
    this->mm %= 60;
}

Hora Hora::operator+(const Hora &otro){
    Hora suma(this->hh+otro.hh, this->mm+otro.mm); 
    this->ajustar();   
    return suma;
}
        
Hora::~Hora(){}