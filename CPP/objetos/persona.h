
#ifndef PERSONA_H

#include <string>

#define PERSONA_H

class Persona {

    // Atributos:
    //private:
    std::string nombre;
    int edad;
    double altura;

    public:
        // Constructor por defecto, constructor copia y operator=
        Persona(std::string="", int=0, double=0.0);
        std::string getNombre(){ return this->nombre;}
        void setNombre(std::string nombre){ this->nombre = nombre; }
        std::string to_string();
        ~Persona();

    protected:

};

#endif