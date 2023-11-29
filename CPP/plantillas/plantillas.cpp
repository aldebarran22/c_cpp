#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>

//#include "persona.h"
#include "hora.h"
#include "Vector.h"

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

// Especializacion parcial
template<class T> std::vector<T> menor(std::vector<T> a, std::vector<T> b){
    std::cout << "plantilla vector menor" << std::endl;
    return (a < b) ? a : b;
}

template <class T> T* reservar(int n){
    T *ptr;

    ptr = new T[n];
    return ptr;
}

void testFunciones(){
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

    // Clase Vector:
    std::vector<int> numeros2 = {3,5,6,7,8,9};
    std::vector<int> numeros3 = {3,5,6,7,8,-10};
    std::vector<int> resp = menor(numeros2, numeros3);

    for (int item : resp){
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::vector<Hora> horas1 = {{4,55}, {3,45}, {12,9}, {12,23}};
    std::vector<Hora> horas2 = {{4,55}, {3,45}, {12,9}, {12,21}};
    std::vector<Hora> resp2 = menor(horas1, horas2);

    for (Hora item : resp2){
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> nombres2 = {"Julia", "Roberto", "Sara", "David"};
    for (std::string n : nombres2){
        std::cout << n << " ";
    }
    std::cout << std::endl;

}

void testClases(){
    Vector<int> numeros(15);
    //Vector<std::string> nombres; // Será de tamaño 10

    numeros.add(23);
    numeros.add(43);
    numeros.add(27);
    numeros.add(11);

    std::cout << "numeros: ";
    numeros.print();

    // Constructor copia:
    Vector<int> aux;
    Vector<int> numeros2(numeros);

    //aux = numeros2; // operator =

    std::cout << "numeros: ptr " << numeros.getPtr() << std::endl;
    std::cout << "numeros2: ptr " << numeros2.getPtr() << std::endl;

    numeros2.add(1000);

    numeros.add(999);

    std::cout << "numeros2: ";
    numeros2.print();

    std::cout << "numeros: ";
    numeros.print();
}

int main(){
   
    testClases();
    return 0;
}