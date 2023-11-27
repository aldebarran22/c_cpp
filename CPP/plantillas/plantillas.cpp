#include <iostream>
#include <string>
#include <cstring>

//#include "persona.h"
#include "hora.h"

template <class T> T menor(T a, T b){
    std::cout << "plantilla menor" << std::endl;
    return (a < b) ? a : b;
}

const char *menor(const char *a, const char *b){
    std::cout << "funcion const char *" << std::endl;
    return (std::strcmp(a, b) == -1) ? a : b;
}

template<class T> void imprimir(T *ptr, int n){
    for (int i = 0 ; i < n ; i++){
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}

template <class T> T* reservar(int n){
    T *ptr;

    ptr = new T[n];
    return ptr;
}

int main(){
    std::cout << "char: " << menor('Z', 'a') << std::endl;
    //std::cout << "int: " << menor("88", 7.9) << std::endl; ERROR! distinto
    std::cout << "const char *: " << menor("hola", "HOLA") << std::endl;
    std::cout << "string: " << menor(std::string("hola"), std::string("HOLA")) << std::endl;


    int numeros[] = {1,2,3,4,5};
    std::string nombres[] = {"Ana", "Jorge", "Andres", "Sara"};
    double reales[] = {1.55, 7.8, 4.44, 9.0};
    //Persona personas[] = {Persona{"Ana",34, 1.8}, Persona{"Jorge",24, 1.77}, Persona{"Sara",44, 1.66}};
    Hora horas[] = {Hora(12,30), Hora(4,55), Hora(8,45)};

    imprimir(numeros, 5);
    imprimir(nombres, 4);
    imprimir(reales, 4);
    imprimir(horas, 3);
    //imprimir(personas, 3);

    int *p1 = reservar<int>(10);
    std::string *p2 = reservar<std::string>(5);

    delete [] p1;
    delete [] p2;
    return 0;
}