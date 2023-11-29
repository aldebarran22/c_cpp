
#include "funciones.h"

#include <iostream>
#include <sstream>

void split(std::string linea, 
std::vector<std::string> & tokens, char sep){
    std::istringstream is(linea);
    std::string token;

    while (std::getline(is, token, sep)){
        //std::cout << token << std::endl;
        tokens.push_back(token);
    }

}