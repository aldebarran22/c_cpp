
#ifndef TIME_EXCEPTION_H

#define TIME_EXCEPTION_H

#include <stdexcept>
#include <string>


class TimeException : public std::exception {

    std::string mensaje;

    public:
        TimeException(std::string mensaje):exception(), mensaje(mensaje){}
        const char *what() const throw(){
            return this->mensaje.c_str();
        }
        ~TimeException(){}
};

#endif