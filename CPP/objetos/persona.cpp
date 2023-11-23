
#include "persona.h"


Persona::Persona(std::string nombre, int edad, double altura){
    this->nombre = nombre;
    this->edad = edad;
    this->altura = altura;
}

std::string Persona::to_string() const {
    return this->nombre + " " + std::to_string(this->edad) + 
    " " + std::to_string(this->altura);
}

Persona::~Persona(){}
