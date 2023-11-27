#include <iostream>
#include <string>

#include "persona.h"

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
    int numeros[] = {1,2,3,4,5};
    std::string nombres[] = {"Ana", "Jorge", "Andres", "Sara"};
    double reales[] = {1.55, 7.8, 4.44, 9.0};
    Persona personas[] = {Persona("Ana",34, 1.8), Persona("Jorge",24, 1.77), Persona("Sara",44, 1.66)};

    imprimir(numeros, 5);
    imprimir(nombres, 4);
    imprimir(reales, 4);
    imprimir(personas, 3);

    int *p1 = reservar<int>(10);
    std::string *p2 = reservar<std::string>(5);

    delete [] p1;
    delete [] p2;
    return 0;
}