
#ifndef HORA_H

#include <string>
#define HORA_H

class Hora {

    int hh, mm;

    public:
        Hora();
        Hora(int, int);
        std::string to_string() const;
        void print() const;
        ~Hora();
};

#endif