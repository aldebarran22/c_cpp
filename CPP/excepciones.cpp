
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

void ejemplo4(){
    try {
        std::string cadena = "hola que tal";

        //int n = 10 / 0;

        if (cadena[0]=='h')
            throw std::invalid_argument("La cadena empieza en minusculas");

        for (int i = 0 ; i <= cadena.size()+3 ; i++){
            std::cout <<  cadena.at(i) << "";
        }
        std::cout << cadena.at(100) << std::endl; 

    } catch (std::out_of_range &e){
        std::cerr << "\nERROR out_of_range: " << e.what() << std::endl;
        throw e; // Relanzar la excepcion:

    } catch (std::exception &e){
        std::cerr << "\nERROR exception: " << e.what() << std::endl;
    }

    std::cout << "Fin de la funcion" << std::endl;
}


void ejemplo5_1(){
    std::string cad = "hola";

    std::cout << cad.at(100) << std::endl;
}

void ejemplo5(){
    try {
        ejemplo5_1();
    } catch (std::out_of_range &e){
        std::cerr << "\nERROR out_of_range: " << e.what() << std::endl;
    }
}

void ejemplo6_1(int n){
    if (n % 2 == 0){
        throw 24;

    } else if (n % 3 == 0){
        throw "falla, multiplo de 3";

    } else 
        throw 45.55;       

    std::cout << std::endl;
}

void ejemplo6(){
    try {

        ejemplo6_1(55);

    } catch (int &cod){
        std::cerr << "Codigo de error: " << cod << std::endl;

    } catch (const char *mensaje){
        std::cerr << "ERROR: " << mensaje << std::endl;

    } catch (std::exception &e){
        std::cerr << "Excepcion capturada: " << e.what() << std::endl;    

    } catch (...){
        std::cerr << "Otro tipo de error" << std::endl;
    }
}

void ejemplo7_1(){
    throw std::runtime_error("Error de prueba");
}

void ejemplo7(){
    try {
        ejemplo7_1();

    } catch (...){
        std::cout << "error general ..." << std::endl;
    }
}

int main(){
    // ejemplo1();
    //ejemplo2();
    //ejemplo3();
    //ejemplo4();
    //ejemplo5();
    ejemplo6();
    return 0;
}