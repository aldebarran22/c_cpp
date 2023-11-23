
#ifndef HORA_H

#include <iostream>
#include <string>
#define HORA_H

class Hora {

    // Funciones amigas:
    friend bool operator>(const Hora &, const Hora &);
    friend std::ostream & operator<<(std::ostream &, const Hora &);

    // Atributos:
    int hh, mm;
    int minutos() const;

    public:
        Hora();
        Hora(int, int);
        std::string to_string() const;
        void print() const;
        Hora operator+(const Hora &);
        bool operator<(const Hora &);
        ~Hora();

    protected:
};

#endif