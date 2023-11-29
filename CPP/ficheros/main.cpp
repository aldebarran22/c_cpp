#include <vector>
#include <string>
#include <iostream>

#include "funciones.h"


int main(){
    std::vector<std::string> tokens;
    std::string cad = "10509;BLAUS;4;1;0.15;Alemania";

    split(cad, tokens);
    for (std::string s : tokens){
        std::cout << s << std::endl;
    }

    return 0;
}