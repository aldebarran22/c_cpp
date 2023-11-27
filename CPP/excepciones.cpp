
#include <string>
#include <iostream>
#include <stdexcept>

void ejemplo1(){
    std::string cadena = "Hola que tal";

    for (int i = 0 ; i <= cadena.size()+3 ; i++){
        std::cout <<  cadena.at(i) << "";
    }
    std::cout << cadena.at(100) << std::endl;   
}

void ejemplo2(){
    try {
        std::string cadena = "Hola que tal";

        for (int i = 0 ; i <= cadena.size()+3 ; i++){
            std::cout <<  cadena.at(i) << "";
        }
        std::cout << cadena.at(100) << std::endl; 

    } catch (std::out_of_range &e){
        std::cerr << "\nERROR: " << e.what() << std::endl;
    }

    std::cout << "Fin de la funcion" << std::endl;
}

void ejemplo3(){
    try {
        std::string cadena = "Hola que tal";

        for (int i = 0 ; i <= cadena.size()+3 ; i++){
            std::cout <<  cadena.at(i) << "";
        }
        std::cout << cadena.at(100) << std::endl; 

    } catch (std::exception &e){
        std::cerr << "\nERROR: " << e.what() << std::endl;
    }

    std::cout << "Fin de la funcion" << std::endl;
}

int main(){
    // ejemplo1();
    //ejemplo2();
    ejemplo3();
    return 0;
}