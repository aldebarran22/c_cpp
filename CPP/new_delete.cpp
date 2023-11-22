
// Reservar memoria en C++

#include <cstdio>
#include <iostream>

#define MENOR2(A,B) ((A<B)?A:B)

int menor(int a, int b){
    return (a<b) ? a : b;
}

std::string menor(std::string a, std::string b){
    return (a<b) ? a : b;
}

void formatoFecha(int d=1, int m=1, int y=1970){
    std::printf("%02d/%02d/%04d", d,m,y);    
}

void formatoFecha(){}

int sumar(int a, int b){
    return a+b;
}

int sumar(int a, int b, int c){
    return a+b+c;
}

int main(){
    int *p;

    int a = 6, b = 8;
    std::cout << "menor int :" << menor(a++, b++) << std::endl;
    std::cout << "FUNCION a: " << a << " b: " << b << std::endl;

    std::cout << "menor string  :" << menor("Raul", "Eva") << std::endl;

    std::cout << "MENOR2 int :" << MENOR2(6, 8) << std::endl;
    std::cout << "MENOR2 string  :" << MENOR2("Raul", "Eva") << std::endl;
    std::cout << "MENOR2 double  :" << MENOR2(6.88, 2.54) << std::endl;

    a = 6; b = 8;
    std::cout << "MENOR2 int :" << MENOR2(a++,b++) << std::endl; // (a++ < b++)?a++:b++;
    std::cout << "MACRO a: " << a << " b: " << b << std::endl;

    // reservar un array de 10:
    p = new int[10];

    for (int i = 0 ; i < 10 ; i++){
        p[i] = i+1;
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    // Liberar el array:
    delete [] p;
    p = nullptr;

    //formatoFecha(); llamada ambigua: NO sabe a que función estamos llamando.
    std::puts("");
    formatoFecha(31, 2000);
    std::puts("");
    formatoFecha(31,5,1980);
    std::puts("");
    std::cout << "sumar 2: " << sumar(3,6) << " sumar 3: " << sumar(7,8,9) << std::endl;
    std::puts("");
    return 0;
}