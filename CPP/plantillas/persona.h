
#ifndef PERSONA_H

#include <string>
#include <iostream>

#define PERSONA_H

class Persona {

    friend std::ostream & operator<<(std::ostream &, const Persona &);

    // Atributos:
    //private:
    std::string nombre;
    int edad;
    double altura;

    public:
        // Constructor por defecto, constructor copia y operator=
        Persona(std::string="", int=0, double=0.0);
        // Persona(const Persona &);
        // Persona & operator=(const Persona &);
        std::string getNombre(){ return this->nombre;}
        void setNombre(std::string nombre){ this->nombre = nombre; }
        std::string to_string() const;
        ~Persona();

    protected:

};

#endif